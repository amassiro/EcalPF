void drawDeta(){

  //---- 3.170 meters in Z
  //---- 1.290 meters in R
//   
//   h = - ln ( tan (theta/2))
//   
  
  TGraph* gr = new TGraph();
  for (int i=0; i<40; i++) {
    
    //---- 26 mm 
    float xtal = 0.026;
    
    float y1 = 1.290 - xtal * (i);
    float y2 = 1.290 - xtal * (i+1);
    float x = 3.170;
    
    float theta1 = atan(y1/x);
    float theta2 = atan(y2/x);
    
    float eta1 = -ln(tan( theta1 / 2.) );
    float eta2 = -ln(tan( theta2 / 2.) );
    
    float deta = eta2- eta1;
    
    gr->SetPoint (i, i, deta);
  }
  
  gr->SetMarkerColor(kRed);
  gr->SetMarkerSize(2);
  gr->SetMarkerStyle(21);
  gr->Draw ("APL");
  
  gr->GetXaxis()->SetTitle("i");
  gr->GetYaxis()->SetTitle("#Delta#eta");
  
  gPad->SetGrid();
  
}


