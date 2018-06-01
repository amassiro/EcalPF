    
Instructions:

    http://cms-sw.github.io/tutorial.html
    
    git-cms-addpkg  RecoParticleFlow/PFClusterProducer
    git cms-addpkg HLTrigger/Configuration

    git checkout amassiro-pfrechit-thresholds


    git push my-cmssw amassiro-pfrechit-thresholds
    
    
    
Produce:

    
     ### step1: GENSIM step (se non avete gia' i GENSIM su cui girare)
    
     cmsDriver.py ZEE_13TeV_TuneCUETP8M1_cfi --conditions    \
     auto:phase1_2018_realistic -n 10 --era Run2_2018 --eventcontent \
     FEVTDEBUG -s GEN,SIM --datatier GEN-SIM --beamspot \
     Realistic25ns13TeVEarly2017Collision --geometry DB:Extended  \
     --python ZEE_13TeV_TuneCUETP8M1_2018_GenSimFull.py --fileout \
     file:step1.root --nThreads 8

     
     cmsDriver.py ZEE_13TeV_TuneCUETP8M1_cfi --conditions    \
     auto:phase1_2017_realistic -n 10 --era Run2_2017 --eventcontent \
     FEVTDEBUG -s GEN,SIM --datatier GEN-SIM --beamspot \
     Realistic25ns13TeVEarly2017Collision --geometry DB:Extended  \
     --python ZEE_13TeV_TuneCUETP8M1_2017_GenSimFull.py --fileout \
     file:step1.root --nThreads 8
     
     cmsDriver.py ZEE_13TeV_TuneCUETP8M1_cfi --conditions    \
     101X_upgrade2018_realistic_forJetMetHLT -n 10 --era Run2_2018 --eventcontent \
     FEVTDEBUG -s GEN,SIM --datatier GEN-SIM --beamspot \
     Realistic25ns13TeVEarly2017Collision --geometry DB:Extended  \
     --python ZEE_13TeV_TuneCUETP8M1_2018_GenSimFull.py --fileout \
     file:step1.root --nThreads 8

     
     
     ### step2: DIGI step con customize function di HLT
    
     cmsDriver.py step2 --conditions auto:phase1_2018_realistic -n 10 --era \
     Run2_2018 --eventcontent FEVTDEBUGHLT  \
     -s DIGI:pdigi_valid,L1,DIGI2RAW,HLT:@relval2018   \
     --datatier GEN-SIM-DIGI-RAW   \
     --customise \
     HLTrigger/Configuration/customizeHLTforCMSSW.customiseForEcalTest   \
     --geometry DB:Extended --dump_python --python DigiFull_2018.py   \
     --filein file:step1.root --fileout file:step2.root --nThreads 8


     cmsDriver.py step2 --conditions auto:phase1_2018_realistic -n 10 --era \
     Run2_2018 --eventcontent FEVTDEBUGHLT  \
     -s DIGI:pdigi_valid,L1,DIGI2RAW,HLT:@relval2018   \
     --datatier GEN-SIM-DIGI-RAW   \
     --customise \
     HLTrigger/Configuration/customizeHLTforCMSSW.customiseForEcalTestPR22254Default   \
     --geometry DB:Extended --dump_python --python DigiFull_2018.py   \
     --filein file:step1.root --fileout file:step2.root --nThreads 8

     
     
     
     cmsDriver.py step2 --conditions auto:phase1_2018_realistic -n 10 --era \
     Run2_2018 --eventcontent FEVTDEBUGHLT  \
     -s DIGI:pdigi_valid,L1,DIGI2RAW,HLT:@relval2018   \
     --datatier GEN-SIM-DIGI-RAW   \
     --geometry DB:Extended --dump_python --python DigiFull_2018.py   \
     --filein file:step1.root --fileout file:step2.root --nThreads 8

     
     cmsDriver.py step2 --conditions auto:phase1_2017_realistic -n 10 --era \
     Run2_2017 --eventcontent FEVTDEBUGHLT  \
     -s DIGI:pdigi_valid,L1,DIGI2RAW,HLT:@relval2017   \
     --datatier GEN-SIM-DIGI-RAW   \
     --customise \
     HLTrigger/Configuration/customizeHLTforCMSSW.customiseForEcalTest   \
     --geometry DB:Extended --dump_python --python DigiFull_2017.py   \
     --filein file:step1.root --fileout file:step2.root --nThreads 8


     

     
     cmsDriver.py step2 --conditions 101X_upgrade2018_realistic_forJetMetHLT -n 10 --era \
     Run2_2018 --eventcontent FEVTDEBUGHLT  \
     -s DIGI:pdigi_valid,L1,DIGI2RAW,HLT:@relval2018   \
     --datatier GEN-SIM-DIGI-RAW   \
     --geometry DB:Extended --dump_python --python DigiFull_2018.py   \
     --filein file:step1.root --fileout file:step2.root --nThreads 8
     
     cmsRun DigiFull_2018.py
     

     
     ### step3: RECO step
    
     cmsDriver.py step3 --conditions auto:phase1_2018_realistic   \
     -n 10 --era Run2_2018 --eventcontent RECOSIM,MINIAODSIM,DQM   \
     --runUnscheduled  \
     -s    \
     RAW2DIGI,L1Reco,RECO,RECOSIM,EI,PAT,VALIDATION:@standardValidation+@miniAODValidation,DQM:@standardDQM+@ExtraHLT+@miniAODDQM \
     --datatier GEN-SIM-RECO,MINIAODSIM,DQMIO --geometry DB:Extended \
     --dump_python --python RecoFull_2018.py --filein file:step2.root  \
     --fileout file:step3.root --nThreads 8
    
    
    cmsDriver.py step3 --conditions auto:phase1_2017_realistic   \
     -n 10 --era Run2_2017 --eventcontent RECOSIM,MINIAODSIM,DQM   \
     --runUnscheduled  \
     -s    \
     RAW2DIGI,L1Reco,RECO,RECOSIM,EI,PAT,VALIDATION:@standardValidation+@miniAODValidation,DQM:@standardDQM+@ExtraHLT+@miniAODDQM \
     --datatier GEN-SIM-RECO,MINIAODSIM,DQMIO --geometry DB:Extended \
     --dump_python --python RecoFull_2017.py --filein file:step2.root  \
     --fileout file:step3.root --nThreads 8

     
     
     
    cmsDriver.py step3 --conditions auto:phase1_2017_realistic   \
     -n 10 --era Run2_2018 --eventcontent RECOSIM,MINIAODSIM,DQM   \
     --runUnscheduled  \
     -s    \
     RAW2DIGI,L1Reco,RECO,RECOSIM,EI,PAT:@standardValidation+@miniAODValidation,DQM:@standardDQM+@ExtraHLT+@miniAODDQM \
     --datatier RECO,MINIAODSIM,DQMIO --geometry DB:Extended \
     --dump_python --python RecoFull_2018.py --filein file:step2.root  \
     --fileout file:step3.root --nThreads 8  --data

     cmsDriver.py step3 --conditions auto:phase1_2018_realistic   \
     -n 10 --era Run2_2018 --eventcontent RECOSIM,MINIAODSIM,DQM   \
     --runUnscheduled  \
     -s    \
     RAW2DIGI,L1Reco,RECO,RECOSIM,EI,PAT:@standardValidation+@miniAODValidation,DQM:@standardDQM+@ExtraHLT+@miniAODDQM \
     --datatier RECO,MINIAODSIM,DQMIO --geometry DB:Extended \
     --dump_python --python RecoFull_2018_TEST.py --filein file:step2.root  \
     --fileout file:step3.root --nThreads 8  --data

     
     
     cmsDriver.py step3 --conditions 101X_upgrade2018_realistic_forJetMetHLT   \
     -n 10 --era Run2_2018 --eventcontent RECOSIM,MINIAODSIM,DQM   \
     --runUnscheduled  \
     -s    \
     RAW2DIGI,L1Reco,RECO,RECOSIM,EI,PAT:@standardValidation+@miniAODValidation,DQM:@standardDQM+@ExtraHLT+@miniAODDQM \
     --datatier RECO,MINIAODSIM,DQMIO --geometry DB:Extended \
     --dump_python --python RecoFull_2018_TEST.py --filein file:step2.root  \
     --fileout file:step3.root --nThreads 8  --data

    
    
    
    
    
    100X_dataRun2_Prompt_v3
    101X_dataRun2_Prompt_v9
    101X_upgrade2018_realistic_forJetMetHLT
    
    cmsRun RecoFull_2018.py 
    cmsRun RecoFull_2018_TEST.py 
    cmsRun RecoFull_2018_TEST.py 
    
    

Arbitrary customization:
    
    cmsDriver.py step3 --conditions auto:phase1_2017_realistic   \
     -n 10 --era Run2_2017 --eventcontent RECOSIM,MINIAODSIM,DQM   \
     --runUnscheduled  \
     -s    \
     RAW2DIGI,L1Reco,RECO,RECOSIM,EI,PAT,VALIDATION:@standardValidation+@miniAODValidation,DQM:@standardDQM+@ExtraHLT+@miniAODDQM \
     --customise RecoParticleFlow/Configuration/customizePF.ecalNoSRPFCut1sigma \
     --datatier GEN-SIM-RECO,MINIAODSIM,DQMIO --geometry DB:Extended \
     --dump_python --python RecoFull_2017.py --filein file:step2.root  \
     --fileout file:step3.root --nThreads 8

     
     
     
     
     
     
     
     
     
     
     
     
     
    
    
    
    
    