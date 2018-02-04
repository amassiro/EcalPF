Run
====

    cmsRun runDump.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_new.root   outputFile=test.root   maxEvents=10

    cmsRun runDump.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_new.root   outputFile=/tmp/amassiro/test.root

    
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_new.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000_org.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000pre3_new.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/20180130_NuGun_1000/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_1000pre3_org.root

    
    
    
    Zee
    
    /RelValZEE_13/CMSSW_10_0_0-PU25ns_100X_upgrade2018_realistic_v7_HS-v1/MINIAODSIM
    
    cmsRun runDump.py  inputFiles=file:/eos/cms/store/relval/CMSSW_10_0_0/RelValZEE_13/MINIAODSIM/PU25ns_100X_upgrade2018_realistic_v7_HS-v1/10000/4E21127D-6601-E811-A618-0025905A60D0.root   outputFile=/tmp/amassiro/test.zee.root

    
    
    cmsRun runDump.py  inputFiles=file:/eos/cms/store/relval/CMSSW_10_0_0/RelValZEE_13/GEN-SIM-DIGI-RAW-RECO/PU25ns_100X_upgrade2018_realistic_v7_HS-v1/10000/0025CDE5-C900-E811-AB38-0CC47A4C8ED8.root   outputFile=/tmp/amassiro/test.zee.root

    
    
    
    
    
Plot
====

    TTree* tree = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
 
    tree ->Draw("energy:eta", "energy>0 && energy < 20", "colz");
    
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==0 && number < 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==1 && number < 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==3 && number < 61200", "colz");

    
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==0 && number >= 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==1 && number >= 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==3 && number >= 61200", "colz");

    
    tree ->Draw("number<61200", "energy>0");
