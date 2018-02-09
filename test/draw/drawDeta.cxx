void drawDeta(){

  //---- 3.170 meters in Z
  //---- 1.290 meters in R
  //   
  //   h = - ln ( tan (theta/2))
  //   theta = ( 2 * atan( exp(-eta) ))
  //   y = x * tan ( 2 * atan( exp(-eta) ))
  
  //---- 1.290 meters in R
//   float maxy = 1.290;
  float maxy = 1.523786;
//   3.170 * tan ( 2 * atan( exp(-1.479) )) = 1.523786
  
  //---- 3.170 meters in Z
  float maxx = 3.170;
  
  //---- 28.6 mm 
//   float xtal = 0.0286;
  float xtal = 0.0286 * 1.10; //---- alveola??
  
  //---- total xtals = 39
  int xtals = 39;
  
  
  TCanvas* cc = new TCanvas ("cc","",800,600);
  
  TGraph* gr = new TGraph();
  for (int i=0; i<xtals; i++) {
    
    
    float y1 = maxy - xtal * (i-0.5);
    float y2 = maxy - xtal * (i+0.5);
    float x = maxx;
    
    float theta1 = atan(y1/x);
    float theta2 = atan(y2/x);
    
    float eta1 = -log(tan( theta1 / 2.) );
    float eta2 = -log(tan( theta2 / 2.) );
    
    float deta = eta2- eta1;
    
    gr->SetPoint (i, i+1, deta);
  }
  
  gr->SetMarkerColor(kRed);
  gr->SetMarkerSize(2);
  gr->SetMarkerStyle(21);
  gr->Draw ("APL");
  
  gr->GetXaxis()->SetTitle("i");
  gr->GetYaxis()->SetTitle("#Delta#eta");
  
  gPad->SetGrid();
  
  
  
  
  
  
  
  
  TCanvas* cc2 = new TCanvas ("cc2","",800,600);
  
  TGraph* gr2 = new TGraph();
  for (int i=0; i<xtals; i++) {
    
    
    float y1 = maxy - xtal * (i-0.5);
    float y2 = maxy - xtal * (i+0.5);
    float x = maxx;
    
    float theta1 = atan(y1/x);
    float theta2 = atan(y2/x);
    
    float eta1 = -log(tan( theta1 / 2.) );
    float eta2 = -log(tan( theta2 / 2.) );
    
    float deta = eta2- eta1;
    
    gr2->SetPoint (i, (eta1+eta2)/2., deta);
  }
  
  gr2->SetMarkerColor(kRed);
  gr2->SetMarkerSize(2);
  gr2->SetMarkerStyle(21);
  gr2->Draw ("APL");
  
  gr2->GetXaxis()->SetTitle("#eta");
  gr2->GetYaxis()->SetTitle("#Delta#eta");
  
  gPad->SetGrid();
  
  
  
  
  
  
  

  
  
  TCanvas* cc3 = new TCanvas ("cc3","",800,600);
  
  TGraph* gr3 = new TGraph();
  for (int i=0; i<xtals; i++) {
    
    
    float y1 = maxy - xtal * (i-0.5);
    float y2 = maxy - xtal * (i+0.5);
    float x = maxx;
    
    float theta1 = atan(y1/x);
    float theta2 = atan(y2/x);
    
    float eta1 = -log(tan( theta1 / 2.) );
    float eta2 = -log(tan( theta2 / 2.) );
    
    float deta = eta2- eta1;
    
    gr3->SetPoint (i, (y1+y2)/2., deta);
  }
  
  gr3->SetMarkerColor(kRed);
  gr3->SetMarkerSize(2);
  gr3->SetMarkerStyle(21);
  gr3->Draw ("APL");
  
  gr3->GetXaxis()->SetTitle("y");
  gr3->GetYaxis()->SetTitle("#Delta#eta");
  
  gPad->SetGrid();
  
  
  
  
  
  
  
  
  
  
  
  
  TCanvas* cc4 = new TCanvas ("cc4","",800,600);
  
  TGraph* gr4 = new TGraph();
  for (int i=0; i<xtals; i++) {
    
    float y1 = maxy - xtal * (i-0.5);
    float y2 = maxy - xtal * (i+0.5);
    float x = maxx;
    
    gr4->SetPoint (i, i+1, (y1+y2)/2.);
  }
  
  gr4->SetMarkerColor(kRed);
  gr4->SetMarkerSize(2);
  gr4->SetMarkerStyle(21);
  gr4->Draw ("APL");
  
  gr4->GetXaxis()->SetTitle("i");
  gr4->GetYaxis()->SetTitle("y");
  
  gPad->SetGrid();
  
  
  
  
  
  
  
  
  
  
  
  TCanvas* cc5 = new TCanvas ("cc5","",800,600);
  
  TGraph* gr5 = new TGraph();
  for (int i=0; i<xtals; i++) {
    
    
    float y1 = maxy - xtal * (i-0.5);
    float y2 = maxy - xtal * (i+0.5);
    float x = maxx;
    
    float theta1 = atan(y1/x);
    float theta2 = atan(y2/x);
    
    float eta1 = -log(tan( theta1 / 2.) );
    float eta2 = -log(tan( theta2 / 2.) );
    
    gr5->SetPoint (i, (y1+y2)/2., (eta1+eta2)/2.);
    
  }
  
  gr5->SetMarkerColor(kRed);
  gr5->SetMarkerSize(2);
  gr5->SetMarkerStyle(21);
  gr5->Draw ("APL");
  
  gr5->GetXaxis()->SetTitle("y");
  gr5->GetYaxis()->SetTitle("#eta");
  
  gPad->SetGrid();
  






  
  
  TCanvas* cc6 = new TCanvas ("cc6","",800,600);
  
  TGraph* gr6 = new TGraph();
  for (int i=0; i<xtals; i++) {
    
    
    float y1 = maxy - xtal * (i-0.5);
    float y2 = maxy - xtal * (i+0.5);
    float x = maxx;
    
    float theta1 = atan(y1/x);
    float theta2 = atan(y2/x);
    
    float eta1 = -log(tan( theta1 / 2.) );
    float eta2 = -log(tan( theta2 / 2.) );
    
    gr6->SetPoint (i, i+1, (eta1+eta2)/2.);
    
  }
  
  gr6->SetMarkerColor(kRed);
  gr6->SetMarkerSize(2);
  gr6->SetMarkerStyle(21);
  gr6->Draw ("APL");
  
  gr6->GetXaxis()->SetTitle("i");
  gr6->GetYaxis()->SetTitle("#eta");
  
  gPad->SetGrid();
  
  
  
  
  
  
}


