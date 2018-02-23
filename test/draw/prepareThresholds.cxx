void prepareThresholds(int level = 0){
  
  std::cout << " level = " << level << std::endl;
  
  //
  //---- transform iring thresholds into ix,iy and ieta,iphi maps
  //
  
  #include <iostream>
  #include <fstream>
  
  
  
  //---- EB ----
  

  ofstream myfile_EB;

  std::string name_EB = "EB_thresholds";
  if (level == 0) name_EB = name_EB + "_" + std::to_string(0) + ".txt";
  if (level == 1) name_EB = name_EB + "_" + std::to_string(1) + ".txt";
  if (level == 2) name_EB = name_EB + "_" + std::to_string(2) + ".txt";
  
  myfile_EB.open (name_EB);
  
  
  float thresholdsEB[85];
  for (int ieta=0; ieta<85; ieta++) {
    if (level == 0) thresholdsEB[ieta] = 0.100;
    if (level == 1) thresholdsEB[ieta] = 0.140;
    if (level == 2) thresholdsEB[ieta] = 0.180;
  }  
   
  
  for (int iz=0; iz<2; iz++) {
    for (int ieta=0; ieta<85; ieta++) {
      for (int iphi=0; iphi<360; iphi++) {
     
        if (iz==0) myfile_EB << -(ieta+1) << " " << (iphi+1) << " ";
        else       myfile_EB <<  (ieta+1) << " " << (iphi+1) << " ";
        
        myfile_EB << thresholdsEB[ieta];
        
        myfile_EB << std::endl;
      }
    }
  }
  
  
  
  myfile_EB.close(); 
  
  
  
  
  
  //---- EE ----
    
  // ---- read iring definition from file
  //        (ix, iy, iz) -> ring
  //
    
  
  std::map < std::pair<int, int> , int > iring_map_plus;
  std::map < std::pair<int, int> , int > iring_map_minus;
  
  std::ifstream fileEEring ("eerings.dat"); 
  
  std::string buffer;
  int num;
  if (!fileEEring.is_open()) {
    std::cerr << "** ERROR: Can't open for input" << std::endl;
    return false;
  }
  
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
      
      std::pair<int, int> ixiy (ix, iy);
      //       if (iz>0) iring_map_plus  [ixiy] = 38 - iring;
      //       else      iring_map_minus [ixiy] = 38 - iring;
      
      if (iz>0) iring_map_plus  [ixiy] = iring;
      else      iring_map_minus [ixiy] = iring;
      
    } 
  }
  
  
  
  ofstream myfile_EE;
 
  std::string name_EE = "EE_thresholds";
  if (level == 0) name_EE = name_EE + "_" + std::to_string(0) + ".txt";
  if (level == 1) name_EE = name_EE + "_" + std::to_string(1) + ".txt";
  if (level == 2) name_EE = name_EE + "_" + std::to_string(2) + ".txt";
  
  myfile_EE.open (name_EE);
  
  
  float thresholdsEE_0[39] = {0.055, 0.055, 0.06, 0.065, 0.07, 0.075, 0.08, 0.085, 0.085, 0.09, 0.09, 0.095, 0.095, 0.1, 0.11, 0.115, 0.125, 0.135, 0.145, 0.155, 0.17, 0.18, 0.195, 0.21, 0.225, 0.25, 0.285, 0.34, 0.42, 0.535, 0.7, 0.94, 1.275, 1.735, 2.365, 3.21, 4.325, 5.8, 7.7 };
  float thresholdsEE_1[39] = {0.11, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.17, 0.18, 0.18, 0.19, 0.19, 0.20, 0.22, 0.23, 0.25, 0.27, 0.29, 0.31, 0.34, 0.36, 0.39, 0.42, 0.45, 0.50, 0.57, 0.68, 0.84, 1.07, 1.40, 1.88, 2.55, 3.47, 4.73, 6.42, 8.65, 11.6, 15.4};
  float thresholdsEE_2[39] = {0.22, 0.22, 0.24, 0.26, 0.28, 0.3, 0.32, 0.34, 0.34, 0.36, 0.36, 0.38, 0.38, 0.4, 0.44, 0.46, 0.5, 0.54, 0.58, 0.62, 0.68, 0.72, 0.78, 0.84, 0.9, 1.0, 1.14, 1.36, 1.68, 2.14, 2.8, 3.76, 5.1, 6.94, 9.46, 12.84, 17.3, 23.2, 30.8};
  
  float thresholdsEE[39];
  
  for (int iring=0; iring<39; iring++) {
    if (level == 0) thresholdsEE[iring] = thresholdsEE_0[iring];
    if (level == 1) thresholdsEE[iring] = thresholdsEE_1[iring];
    if (level == 2) thresholdsEE[iring] = thresholdsEE_2[iring];
  }  
  
  
    
  for (int iz=0; iz<2; iz++) {
    
    std::map<std::pair<int, int> , int>::iterator it;
    
    for ( it = iring_map_plus.begin(); it != iring_map_plus.end(); it++ ) {
      myfile_EE << it->first.first << " " << it->first.second << " ";
      
      if (iz==0) myfile_EE << -1 << " ";
      else  myfile_EE << 1 << " ";
      
      int iring = it->second;
      
      myfile_EE << thresholdsEE[iring];
      
      myfile_EE << std::endl;
      
    }
    
  }
  
  
  
  myfile_EE.close(); 
  
  
  
  
  
  
}


