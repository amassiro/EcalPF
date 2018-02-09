void drawDeta(){

  //---- 3.170 meters in Z
  //---- 1.290 meters in R
//   
//   h = - ln ( tan (theta/2))
//   
  
  TGraph* gr = new TGraph();
  for (int i=0; i<40; i++) {
    float theta = 0;
    
    float deta = 0;
    
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


