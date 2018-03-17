void prepareMap(){
  
  //
  //---- create map iring - eta
  //
  
  #include <iostream>
  #include <fstream>
  
  
  
  
  //---- EE ----
    
  // ---- read iring definition from file
  //        (ix, iy, iz) -> ring
  //
  
  
  TFile* file_eta_ixiy = new TFile ("etaphi_to_ixiy.root", "READ");
  TH2F* histo_eta_ixiy = (TH2F*) file_eta_ixiy->Get("eta_ixiy");
  
  TH2F* histo_iring_ixiy = (TH2F*) histo_eta_ixiy->Clone("iring_ixiy");
  
  
  std::map < std::pair<int, int> , std::pair<int, float> > iring_eta_map_plus;
  std::map < std::pair<int, int> , std::pair<int, float> > iring_eta_map_minus;
  
  std::ifstream fileEEring ("eerings.dat"); 
  
  
  TGraph* gr_eta_iring = new TGraph ();
  
  std::string buffer;
  int num;
  if (!fileEEring.is_open()) {
    std::cerr << "** ERROR: Can't open for input" << std::endl;
    return false;
  }
  
  int ipoint = 0;
  while(!fileEEring.eof()) {
    getline(fileEEring,buffer);
    if (buffer != ""){ ///---> save from empty line at the end!
      int ix;
      int iy;
      int iz;
      int iring;
      
      //       std::cout << " buffer = " << buffer << std::endl;
      
      std::stringstream line( buffer );      
      line >> ix; 
      line >> iy; 
      line >> iz; 
      line >> iring; 
      
      float eta = histo_eta_ixiy->GetBinContent(ix, iy);
      
      //---- iring from 1 to 39
      iring +=1;
      
      histo_iring_ixiy->SetBinContent(ix, iy, iring);
      
      std::pair<int, int> ixiy (ix, iy);
      std::pair<int, float> iringeta (iring, eta);

      gr_eta_iring->SetPoint (ipoint, iring, eta);
      ipoint++;
      
      if (iz>0) iring_eta_map_plus  [ixiy] = iringeta;
      else      iring_eta_map_minus [ixiy] = iringeta;
      
    } 
  }
  
  
  ofstream myfile_EE;
  myfile_EE.open ("ixiyiringeta.txt");
  
  for (int iz=0; iz<2; iz++) {
    
    std::map<std::pair<int, int> , std::pair<int, float>>::iterator it;
    
    if (iz ==0) {
      for ( it = iring_eta_map_minus.begin(); it != iring_eta_map_minus.end(); it++ ) {
        myfile_EE << it->first.first << " " << it->first.second << " " << -1 << "  ";
        myfile_EE << it->second.first << " " << it->second.second << " ";
        myfile_EE << std::endl;
      }
    }
    else {
      for ( it = iring_eta_map_plus.begin(); it != iring_eta_map_plus.end(); it++ ) {
        myfile_EE << it->first.first << " " << it->first.second << " " << 1 << "  ";
        myfile_EE << it->second.first << " " << it->second.second << " ";
        myfile_EE << std::endl;
      }
    }
    
  }
  
  
  
  myfile_EE.close(); 
  
  
  
  
  TCanvas* cc = new TCanvas ("cc", "", 800, 600);
  gStyle->SetOptStat(0);
  gr_eta_iring->Draw("APL");
  gr_eta_iring->SetMarkerColor(kRed);
  gr_eta_iring->SetMarkerStyle(20);
  gr_eta_iring->SetMarkerSize(1);
  gr_eta_iring->GetXaxis()->SetTitle("iRing");
  gr_eta_iring->GetYaxis()->SetTitle("#eta");
  cc->SetGrid();
  
  TCanvas* cc2 = new TCanvas ("cc2", "", 800, 600);
  histo_iring_ixiy->Draw("colz");
  histo_iring_ixiy->GetXaxis()->SetTitle("ix");
  histo_iring_ixiy->GetYaxis()->SetTitle("iy");
  histo_iring_ixiy->GetZaxis()->SetTitle("iring");
  
  
}


