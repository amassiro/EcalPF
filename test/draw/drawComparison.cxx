
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
  
  
}



