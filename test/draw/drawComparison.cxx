
void SetErrors (TH1F* histo){
  int nbin = histo->GetNbinsX();
  for (int iBin=0; iBin < nbin; iBin++) {
    histo->SetBinError   (iBin, sqrt(histo->GetBinContent(iBin)) );
  }
}


float SumQ(float A, float B) {
  return sqrt(A*A + B*B);
}
  

TH1F* Ratio (TH1F* hNum, TH1F* hDen) {
  
  int nbin = hNum->GetNbinsX();
  float min = hNum->GetBinLowEdge(1);
  float max = hNum->GetBinLowEdge(nbin+1);
  
  std::cout << " nbin, min, max = " << nbin << " , " << min << " , " << max << std::endl;
  TString name = Form ("h_ratio_%s_OVER_%s", hNum->GetTitle(), hDen->GetTitle() );
  
  TH1F* new_histo = new TH1F (name.Data(), name.Data(), nbin, min, max );
  
  for (int iBin=0; iBin < nbin; iBin++) {
    float ratio = 1.;
    float error_ratio = 0.;
    if (hDen->GetBinContent (iBin) != 0) {
      ratio = hNum->GetBinContent (iBin) / hDen->GetBinContent (iBin);
      error_ratio = SumQ (hNum->GetBinError (iBin) / hDen->GetBinContent (iBin), hDen->GetBinError (iBin) / hDen->GetBinContent (iBin) * ratio );
    }
    
    new_histo->SetBinContent (iBin, ratio);
    new_histo->SetBinError   (iBin, error_ratio );
  }
  
  return new_histo;
}



void drawComparison(std::string variable, int nbin, float min, float max, std::string cut = "1") { 

  std::cout << " variable = " << variable << std::endl;
  std::cout << " >> " << nbin << " : " << min << " - " << max << std::endl;
  
  
  gStyle->SetOptStat(0);
  
  TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree");
  TTree* tree1 = (TTree*) _file1->Get("TreeProducerPFrechits/tree");
  
  TString toDraw;
  TString toCut;
  
  toCut = Form ("%s", cut.c_str());
  
  toDraw = Form ("%s >> h0(%d, %f, %f)", variable.c_str(), nbin, min, max );
  tree0 ->Draw(toDraw.Data(), toCut.Data());
  
  toDraw = Form ("%s >> h1(%d, %f, %f)", variable.c_str(), nbin, min, max );
  tree1 ->Draw(toDraw.Data(), toCut.Data());
 
  TH1F* h0 = (TH1F*) gDirectory->Get("h0");
  TH1F* h1 = (TH1F*) gDirectory->Get("h1");
  
  SetErrors(h0);
  SetErrors(h1);
  
  h0->Sumw2();
  h1->Sumw2();
  
  h0->Scale (1./h0->Integral());
  h1->Scale (1./h1->Integral());
  
  h0->SetLineColor(kRed);
  h0->SetMarkerColor(kRed);

  h1->SetLineColor(kBlue);
  h1->SetMarkerColor(kBlue);
  
  h0->SetLineWidth(2);
  h1->SetLineWidth(2);
  
  h0->Draw("hist");
  h1->Draw("hist same");
  
  h0->GetXaxis()->SetTitle(variable.c_str());
  
  TLegend* leg = new TLegend (0.65,0.75,0.90,0.90);
  leg -> AddEntry (h0,    "Yes #gamma stat", "PL");
  leg -> AddEntry (h1,    "No  #gamma stat", "PL");
  leg -> Draw();
  
  
  TH1F* h_ratio = Ratio (h0, h1);
  
  TCanvas* cc = new TCanvas ("cc", "Ratio", 800, 600);
  h_ratio -> SetLineColor(kBlack);
  h_ratio -> SetLineWidth(2);
  h_ratio->GetXaxis()->SetTitle(variable.c_str());
  h_ratio->GetYaxis()->SetTitle("Ratio Yes/No #gamma");
  h_ratio->GetYaxis()->SetRangeUser(0.,2.);
  h_ratio -> Draw();
  
}



