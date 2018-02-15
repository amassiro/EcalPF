Run
====

    cmsRun runDump.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_new.root   outputFile=test.root   maxEvents=10

    cmsRun runDump.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_new.root   outputFile=/tmp/amassiro/test.root

    cmsRun runDump.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000pre3_new.root   outputFile=/tmp/amassiro/test.pre3.root

    
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_new.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_org.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000pre3_new.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000pre3_org.root

    
    
    
    Zee
    
    /RelValZEE_13/CMSSW_10_0_0-PU25ns_100X_upgrade2018_realistic_v7_HS-v1/MINIAODSIM
    
    cmsRun runDump.py  inputFiles=file:/eos/cms/store/relval/CMSSW_10_0_0/RelValZEE_13/MINIAODSIM/PU25ns_100X_upgrade2018_realistic_v7_HS-v1/10000/4E21127D-6601-E811-A618-0025905A60D0.root   outputFile=/tmp/amassiro/test.zee.root

    
    
    cmsRun runDump.py  inputFiles=file:/eos/cms/store/relval/CMSSW_10_0_0/RelValZEE_13/GEN-SIM-DIGI-RAW-RECO/PU25ns_100X_upgrade2018_realistic_v7_HS-v1/10000/0025CDE5-C900-E811-AB38-0CC47A4C8ED8.root     outputFile=/tmp/amassiro/test.zee.root

    
    
    
    
    Zee tests with modified pf-rechit thresholds
    /afs/cern.ch/work/c/crovelli/public/4DPG/outputRelVal/step3_2.root
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/outputRelVal/step3_2.root   outputFile=/tmp/amassiro/test.zee.test.pf.root

    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/outputRelVal/step3_1.root   outputFile=/tmp/amassiro/test.zee.test.pf.1.root
    
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/outputRelVal/step3_2__100events.root   outputFile=/tmp/amassiro/test.zee.test.pf.2_100.root
    
    
    
Plot
====

    TTree* tree = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
 
    tree ->Draw("energy:eta", "energy>0 && energy < 20", "colz");
    
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==1 && number < 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==3 && number < 61200", "colz");

    
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==1 && number >= 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==3 && number >= 61200", "colz");

    
    tree ->Draw("number<61200", "energy>0");

    
    //---- check sr@pf thresholds -> mainly high eta EE region
    tree ->Draw("energy", "energy>0 && abs(eta) > 2.5 && number >= 61200", "colz");

    
    
    r99t /tmp/amassiro/test.pre3.root  /tmp/amassiro/test.root
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    TTree* tree1 = (TTree*) _file1->Get("TreeProducerPFrechits/tree")

    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0 && seed_number >= 61200 && seed_flag==1");
    tree1 ->Draw("seed_energy >> h1(100,0,40)", "seed_energy>0 && seed_number >= 61200 && seed_flag==1");

    h0->Scale (1./h0->Integral());
    h1->Scale (1./h1->Integral());
    
    h0->SetLineColor(kRed);
    
    h0->Draw();
    h1->Draw("same");
    

    tree0 ->Draw("energy >> h0(100,0,40)", "energy>0 && abs(eta) > 2.5 && number >= 61200 && flag==1");
    tree1 ->Draw("energy >> h1(100,0,40)", "energy>0 && abs(eta) > 2.5 && number >= 61200 && flag==1");

    h0->Scale (1./h0->Integral());
    h1->Scale (1./h1->Integral());
    
    h0->SetLineColor(kRed);
    
    h0->Draw();
    h1->Draw("same");
    

    
    
    tree0 ->Draw("energy >> h2(100,0,40)", "energy>0 && abs(eta) > 2.5 && number >= 61200 && flag==3");
    tree1 ->Draw("energy >> h3(100,0,40)", "energy>0 && abs(eta) > 2.5 && number >= 61200 && flag==3");

    h2->Scale (1./h2->Integral());
    h3->Scale (1./h3->Integral());
    
    h2->SetLineColor(kRed);
    
    h2->Draw();
    h3->Draw("same");
 
 

 
    tree0 ->Draw("energy >> h0(100,0,40)", "energy>0 && abs(eta) > 1.5 && number >= 61200 && flag==1");
    tree1 ->Draw("energy >> h1(100,0,40)", "energy>0 && abs(eta) > 1.5 && number >= 61200 && flag==1");

    h0->Scale (1./h0->Integral());
    h1->Scale (1./h1->Integral());
    
    h0->SetLineColor(kRed);
    
    h0->Draw();
    h1->Draw("same");
    

    
    
 
 
    r00t /tmp/amassiro/test.zee.root
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    
    tree0 ->Draw("energy >> h0(100,0,40)", "energy>0 && abs(eta) > 2.5 && number >= 61200 && flag==1");
    
    tree0 ->Draw("energy >> h0(100,0,40)", "energy>0  && number < 61200 && flag==1");
    tree0 ->Draw("energy >> h0(100,0,40)", "energy>0  && number < 61200 && flag==3");
    
    h0->Scale (1./h0->Integral());
    
    h0->SetLineColor(kRed);
    
    h0->Draw();
    
    
    tree0 ->Draw("eta", "energy>0  && number >= 61200 && flag==3");
    tree0 ->Draw("eta", "energy>0  && number >= 61200 && flag==1");

    tree0 ->Draw("seed_eta", "seed_energy>0  && seed_number >= 61200 && seed_flag==1");
    
    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0  && seed_number < 61200 && seed_flag==1");
    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0  && seed_number >= 61200 && seed_flag==1");
 
    
    
    
    tree0 ->Draw("flag", "energy>0 && abs(eta) > 2.5 && number >= 61200");
    tree0 ->Draw("flag", "energy>0 && abs(eta) > 2.5");
    
    
    
    tree0 ->Draw("seed_flag", "seed_energy>0 && seed_number >= 61200");
    
    tree0 ->Draw("seed_flag", "seed_energy>0");
    tree0 ->Draw("seed_flag", "seed_flag>-50");
    
    
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0  && seed_number >= 61200 && seed_flag==1");
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0  && seed_number >= 61200");
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0  && seed_number < 61200");
 
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0 && seed_energy<0.3  && seed_number < 61200", "colz");
    
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0 && seed_energy<3  && seed_number >= 61200", "colz");
    
    
    tree0 ->Draw("seed_energy:sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5))", "seed_eta>0 &&  seed_energy>0 && seed_energy<20  && seed_number >= 61200", "colz");
    tree0 ->Draw("seed_energy:sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200", "colz");
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200", "colz");
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200 && seed_flag==1", "colz");
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200 && seed_flag==3", "colz");
    tree0 ->Draw("(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200 ");
    
    
    
    
    
    
    
    
    r99t /tmp/amassiro/test.zee.test.pf.1.root
    
    
    
    
    
    