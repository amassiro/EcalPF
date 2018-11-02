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
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/outputRelVal/step3_all3.root   outputFile=/tmp/amassiro/test.zee.test.pf.caryThresholds.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/outputRelVal/step3_all3.root
    
    
    
    
    
    Tests DB for PF thresholds
    
    /afs/cern.ch/work/c/crovelli/public/4DPG/standard/step3.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/new/step3.root
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/standard/step3.root   outputFile=/tmp/amassiro/test.zee.test.pf.standard.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/new/step3.root        outputFile=/tmp/amassiro/test.zee.test.pf.new.root

    
    /afs/cern.ch/work/c/crovelli/public/4DPG/step3.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/step3.root        outputFile=/tmp/amassiro/test.zee.test.pf.TEST.root

    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_inMINIAODSIM___default.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_inMINIAODSIM___default.root        outputFile=/tmp/amassiro/test.zee.test.pf.TEST.2.root
    
    
    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_inMINIAODSIM___onlyStep3New.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_inMINIAODSIM___new.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_inMINIAODSIM___default.root

    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM___onlyStep3New.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM___new.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM___default.root

    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM___onlyStep3New.root        outputFile=test.zee.test.pf.onlyStep3New.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM___new.root        outputFile=test.zee.test.pf.new.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/secondRound/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM___default.root        outputFile=test.zee.test.pf.default.root
    
    
    r99t test.zee.test.pf.onlyStep3New.root     test.zee.test.pf.default.root
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    TTree* tree1 = (TTree*) _file1->Get("TreeProducerPFrechits/tree")

    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0 && seed_number >= 61200");
    tree1 ->Draw("seed_energy >> h1(100,0,40)", "seed_energy>0 && seed_number >= 61200");

    h0->Scale (1./h0->Integral());
    h1->Scale (1./h1->Integral());
    
    h0->SetLineColor(kRed);
    h0->SetLineWidth(2);
    
    h0->Draw();
    h1->Draw("same");

    
    r99t test.zee.test.pf.onlyStep3New.root     test.zee.test.pf.default.root
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    TTree* tree1 = (TTree*) _file1->Get("TreeProducerPFrechits/tree")

    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0  && seed_number >= 61200 && seed_flag==1");
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0  && seed_energy<10 && seed_number >= 61200");
    tree0 ->Draw("seed_energy:seed_eta", "seed_energy>0  && seed_number < 61200");

    tree0 ->Draw("(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200 ");
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<20  && seed_number >= 61200", "colz");
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<2  && seed_number >= 61200", "colz");

    
    /afs/cern.ch/work/c/crovelli/public/4DPG/standard/step3.root
    /afs/cern.ch/work/c/crovelli/public/4DPG/new/step3.root
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/standard/step3.root   outputFile=/tmp/amassiro/test.zee.test.pf.standard.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/new/step3.root        outputFile=/tmp/amassiro/test.zee.test.pf.new.root

    
    /afs/cern.ch/work/c/crovelli/public/4DPG/step3.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/c/crovelli/public/4DPG/step3.root        outputFile=/tmp/amassiro/test.zee.test.pf.TEST.root

    

    /afs/cern.ch/work/a/amassiro/ECAL/CMSSW_9_4_2/src/ECALValidation/EcalPF/test/production/step3.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/work/a/amassiro/ECAL/CMSSW_9_4_2/src/ECALValidation/EcalPF/test/production/step3.root        outputFile=/tmp/amassiro/test.zee.test.pf.TEST.root
    
    
    /afs/cern.ch/user/a/amassiro/work/ECAL/CMSSW_10_2_0/src/ECALValidation/EcalPF/test/production/step3.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/user/a/amassiro/work/ECAL/CMSSW_10_2_0/src/ECALValidation/EcalPF/test/production/step3.root      outputFile=/tmp/amassiro/test.zee.test.pf.root
    
    r99t /tmp/amassiro/test.zee.test.pf.root
    TTree* tree = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200", "colz");
    
    
    
    
    
2018 data
====
 
    /eos/cms/store/data/Commissioning2018/ZeroBias/MINIAOD/PromptReco-v1/000/314/664/00000/621A761E-8C46-E811-BEF0-FA163E5CC803.root
    
    cmsRun runDump.py  inputFiles=file:/eos/cms/store/data/Commissioning2018/ZeroBias/MINIAOD/PromptReco-v1/000/314/664/00000/621A761E-8C46-E811-BEF0-FA163E5CC803.root        outputFile=/tmp/amassiro/test.data.2018.root

     
    
    /eos/cms/store/data/Commissioning2018/ZeroBias/AOD/PromptReco-v1/000/314/665/00000/C8CCC941-8E46-E811-B4A6-FA163EC01425.root
    
    cmsRun runDump.py  inputFiles=file:/eos/cms/store/data/Commissioning2018/ZeroBias/AOD/PromptReco-v1/000/314/665/00000/C8CCC941-8E46-E811-B4A6-FA163EC01425.root        outputFile=/tmp/amassiro/test.data.2018.root

    
    /eos/cms/store/data/Commissioning2018/ZeroBias/RAW/v1/000/314/665/00000/84631C0C-A943-E811-890F-FA163E171A40.root
    
    cmsRun RecoFull_2018.py 
    cmsRun RecoFull_2018_TEST.py 
    
    cmsRun runDump.py  inputFiles=file:/tmp/amassiro/step3.root        outputFile=/tmp/amassiro/test.data.2018.root

    
    /eos/cms/store/data/Commissioning2018/HLTPhysics2/MINIAOD/PromptReco-v1/000/314/863/00000/4E534A8F-1549-E811-BF4C-FA163E2ABCEA.root
    cmsRun runDump.py  inputFiles=file:/tmp/amassiro/4E534A8F-1549-E811-BF4C-FA163E2ABCEA.root        outputFile=/tmp/amassiro/test.data.2018.root
    
    /eos/cms/store/data/Commissioning2018/HLTPhysics2/RAW-RECO/LogError-PromptReco-v1/000/314/860/00000/E2C3DF38-E148-E811-AE26-02163E0176EC.root
    cmsRun runDump.py  inputFiles=file:/tmp/amassiro/E2C3DF38-E148-E811-AE26-02163E0176EC.root         outputFile=/tmp/amassiro/test.data.2018.root
    
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200", "colz");
    
    

    
2018 MC
====
    
    /DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/RunIIFall18MiniAOD-102X_upgrade2018_realistic_v12-v1/MINIAODSIM
    /store/mc/RunIIFall18MiniAOD/DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/102X_upgrade2018_realistic_v12-v1/100000/FD22CB36-F128-2F4F-99BB-FDE3C9C50A46.root  
    cmsRun runDumpMC.py  inputFiles=file:/store/mc/RunIIFall18MiniAOD/DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/102X_upgrade2018_realistic_v12-v1/100000/FD22CB36-F128-2F4F-99BB-FDE3C9C50A46.root         outputFile=/tmp/amassiro/test.mc.2018.root
    
    cmsRun runDumpMC.py  inputFiles=file:/eos/cms/store/mc/RunIIFall18MiniAOD/DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/MINIAODSIM/102X_upgrade2018_realistic_v12_ext1-v1/60000/09EC3099-3F8B-4D47-AD48-95BE9A29EB14.root     outputFile=/tmp/amassiro/test.mc.2018.root
    
    
    /DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/RunIIFall18DRPremix-102X_upgrade2018_realistic_v11-v1/AODSIM
    /store/mc/RunIIFall18DRPremix/DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/AODSIM/102X_upgrade2018_realistic_v11-v1/1210000/8176DA36-70D2-EB4B-AAC4-C7F81845F0B7.root 
    
    edmDumpEventContent  root://xrootd-cms.infn.it//store/mc/RunIIFall18DRPremix/DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/AODSIM/102X_upgrade2018_realistic_v11-v1/1210000/8176DA36-70D2-EB4B-AAC4-C7F81845F0B7.root >dump.aod.txt

    cmsRun runDumpMC.py  inputFiles=/store/mc/RunIIFall18DRPremix/DYToEE_M-50_NNPDF31_TuneCP5_13TeV-powheg-pythia8/AODSIM/102X_upgrade2018_realistic_v11-v1/1210000/8176DA36-70D2-EB4B-AAC4-C7F81845F0B7.root     outputFile=/tmp/amassiro/test.mc.2018.root
    
    
    cmsRun runDumpMC.py  inputFiles=/store/relval/CMSSW_10_3_0_pre4/RelValPREMIXUP18_PU25/GEN-SIM-DIGI-RAW/PU25ns_103X_upgrade2018_realistic_v4-v1/20001/B5A4DF1F-E590-C044-B431-9637FE457FA7.root     outputFile=/tmp/amassiro/test.mc.2018.root
    
    edmDumpEventContent /eos/cms/store/relval/CMSSW_10_3_0_pre4/RelValPREMIXUP18_PU25/GEN-SIM-DIGI-RAW/PU25ns_103X_upgrade2018_realistic_v4-v1/20001/B5A4DF1F-E590-C044-B431-9637FE457FA7.root > dump.premix.txt

    
    /RelValPREMIXUP18_PU25/CMSSW_10_3_0_pre5-PU25ns_103X_upgrade2018_realistic_v7-v1/PREMIX
    edmDumpEventContent  root://cmsxrootd.fnal.gov,//store/relval/CMSSW_10_3_0_pre5/RelValPREMIXUP18_PU25/PREMIX/PU25ns_103X_upgrade2018_realistic_v7-v1/10001/1E36E92D-B45A-5143-8B8D-DF1851BF99A1.root     
    edmDumpEventContent  root://cms-xrd-global.cern.ch//store/relval/CMSSW_10_3_0_pre5/RelValPREMIXUP18_PU25/PREMIX/PU25ns_103X_upgrade2018_realistic_v7-v1/10001/1E36E92D-B45A-5143-8B8D-DF1851BF99A1.root 

    
    
    https://dmytro.web.cern.ch/dmytro/cmsprodmon/workflows.php?prep_id=CMSSW_10_2_5__fullsim_noPU_2018_Can30fb-1539288093-QCD_FlatPt_15_3000HS_13
    /RelValQCD_FlatPt_15_3000HS_13/CMSSW_10_2_5-102X_upgrade2018_realistic_v12_Can30fb_v1-v1/GEN-SIM-DIGI-RAW
    cmsRun RecoFull_2018_TEST.py 
    /store/relval/CMSSW_10_2_5/RelValQCD_FlatPt_15_3000HS_13/GEN-SIM-DIGI-RAW/102X_upgrade2018_realistic_v12_Can30fb_v1-v1/10000/10989D9A-3927-CE45-90D1-9D7F5E13F404.root outputFile=/tmp/amassiro/test.mc.2018.root
    
    cmsRun runDumpMC.py  inputFiles=file:production/step3.root     outputFile=/tmp/amassiro/test.mc.2018.root

    /RelValQCD_FlatPt_15_3000HS_13/CMSSW_10_2_5-102X_upgrade2018_realistic_v12_Can30fb_v1-v1/GEN-SIM-RECO
    cmsRun runDumpMC.py  inputFiles=/store/relval/CMSSW_10_2_5/RelValQCD_FlatPt_15_3000HS_13/GEN-SIM-RECO/102X_upgrade2018_realistic_v12_Can30fb_v1-v1/10000/9163AB5D-8C85-B747-B534-9E72AE581405.root      outputFile=/tmp/amassiro/test.mc.2018.reco.root
    
    
    r99t /tmp/amassiro/test.mc.2018.reco.root
    TTree* tree = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==1 && number >= 61200", "colz");
    tree ->Draw("energy:eta", "energy>0 && energy < 20 && flag==3 && number >= 61200", "colz");

    
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20 && seed_flag==0 && seed_number >= 61200 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))>1.5 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))<3.0", "colz");
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20 && seed_flag==1 && seed_number >= 61200 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))>1.5 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))<3.0", "colz");
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20 && seed_flag==3 && seed_number >= 61200 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))>1.5 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))<3.0", "colz");
    
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20                 && seed_number >= 61200 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))>1.5 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))<3.0", "colz");
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20                                         && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))>1.5 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))<3.0", "colz");
    
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20                                         && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))>1.5 && (52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))<3.0", "colz");

    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20                                                                                  ", "colz");

    
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 20                 && seed_number >= 61200", "colz");
    tree ->Draw("seed_energy:abs(seed_eta)", "seed_energy>0 && seed_energy < 20                 && seed_number <  61200", "colz");
    
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 40    && seed_flag==0              && seed_number >= 61200", "colz");
    tree ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 40    && seed_flag==1              && seed_number >= 61200", "colz");
    
    
    tree ->Draw("seed_flag:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_energy>0 && seed_energy < 100            && seed_number >= 61200", "colz");
    
    tree ->Draw("seed_flag:abs(seed_eta)", "seed_energy>0 && seed_energy < 100            && seed_number < 61200", "colz");
    
    
    pfClusterTag = cms.InputTag("particleFlowClusterECAL")
    tree ->Draw("energy:abs(eta)", "energy>0 && energy < 40                   && number >= 61200", "colz");
    tree ->Draw("flag:abs(eta)",   "energy>0 && energy < 40                   && number >= 61200", "colz");


    
2018 MC: test photostatistics
====

    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun

    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_NoPhoStat_1.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_PhoStat_1.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_NoPhoStat_2.root
    /eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_PhoStat_2.root


    cmsRun runDumpMC.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_NoPhoStat_1.root    outputFile=NoPhoStat_1.root   maxEvents=1000
    cmsRun runDumpMC.py  inputFiles=file:/eos/cms/store/group/dpg_ecal/comm_ecal/cmkuo/NuGun/step3_RAW2DIGI_L1Reco_RECO_RECOSIM_EI_PAT_VALIDATION_DQM_PhoStat_1.root      outputFile=PhoStat_1.root     maxEvents=1000

    
    TTree* tree = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    tree ->Draw("seed_energy", "seed_energy>0 && seed_energy<50", "colz");

    
    r99t NoPhoStat_1_numEvent1000.root PhoStat_1_numEvent1000.root  
    
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    TTree* tree1 = (TTree*) _file1->Get("TreeProducerPFrechits/tree")

    tree0 ->Draw("seed_energy >> h0(400,0,40)", "seed_energy>0");
    tree1 ->Draw("seed_energy >> h1(400,0,40)", "seed_energy>0");

    h0->Scale (1./h0->Integral());
    h1->Scale (1./h1->Integral());
    
    h0->SetLineColor(kRed);
    
    h0->Draw();
    h1->Draw("same");
      
    
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"seed_energy\",50,0,50\)
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"seed_energy\",50,0,50,\"seed_number\>\=61200\"\)
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"seed_energy\",20,0,20,\"seed_number\<61200\"\)
        
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"Sum$\(seed_energy\>0\&\&seed_number\<61200\)\",100,0,1000,\"1\"\)
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"Sum$\(seed_energy\>0\&\&seed_number\>\=61200\)\",100,0,1000,\"1\"\)
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"Sum$\(seed_energy\>0\&\&seed_number\>\=61200\)\",50,0,250,\"1\"\)
    
    
    
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"seed_eta\",170,-85,85,\"seed_energy\>0\&\&seed_number\<61200\"\)
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"\(52-sqrt\(\(seed_eta-50.5\)\*\(seed_eta-50.5\)\+\(seed_phi-50.5\)\*\(seed_phi-50.5\)\)\)\",42,0,42,\"seed_energy\>0\&\&seed_number\>\=61200\"\)
    
    
    
    
    
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
    
    
    tree0 ->Draw("seed_energy:(52-sqrt((seed_eta-50.5)*(seed_eta-50.5)+(seed_phi-50.5)*(seed_phi-50.5)))", "seed_eta>0 &&  seed_energy>0 && seed_energy<50  && seed_number >= 61200", "colz");
    
    
    
    
    r99t /tmp/amassiro/test.pre3.root  /tmp/amassiro/test.root
    
    r99t /tmp/amassiro/test.pre3.root  /tmp/amassiro/test.zee.test.pf.2_100.root
    
    r99t /tmp/amassiro/test.zee.test.pf.caryThresholds.root
    
    
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    TTree* tree1 = (TTree*) _file1->Get("TreeProducerPFrechits/tree")

    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0 && seed_number >= 61200 && seed_flag==1");
    tree1 ->Draw("seed_energy >> h1(100,0,40)", "seed_energy>0 && seed_number >= 61200 && seed_flag==1");

    h0->Scale (1./h0->Integral());
    h1->Scale (1./h1->Integral());
    
    h0->SetLineColor(kRed);
    
    h0->Draw();
    h1->Draw("same");
    

 
    TTree* tree0 = (TTree*) _file0->Get("TreeProducerPFrechits/tree")
    
    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0 && seed_number >= 61200 && seed_flag==1");
    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0 && seed_number >= 61200 && seed_flag==3");
    tree0 ->Draw("seed_energy >> h0(100,0,40)", "seed_energy>0 && seed_number >= 61200");

    
    
    r99t /tmp/amassiro/test.zee.test.pf.1.root
    
    
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/user/a/amassiro/work/ECAL/SRatPF/CMSSW_10_0_2/src/step3.root   outputFile=test.zee.test.pf.mytest.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/user/a/amassiro/work/ECAL/SRatPF/CMSSW_10_0_2/src/step3.root   outputFile=test.zee.test.pf.mytest.2.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/user/a/amassiro/work/ECAL/SRatPF/CMSSW_10_0_2/src/step3.root   outputFile=test.zee.test.pf.mytest.oldsratpf.root
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/user/a/amassiro/work/ECAL/SRatPF/CMSSW_10_0_2/src/step3.root   outputFile=test.zee.test.pf.mytest.newzsatpf.root
    
    
    cmsRun runDump.py  inputFiles=file:/afs/cern.ch/user/a/amassiro/work/ECAL/SRatPF/github/CMSSW_10_0_2/src/step3.root   outputFile=test.zee.test.pf.mytest.newzsatpf..mynewchange.root
    
    
    
    
    
    
    