Test timing
====

Instructions:

    https://twiki.cern.ch/twiki/bin/view/CMS/TimingStudiesRecipes2017

Run:

    hltGetConfiguration /dev/CMSSW_10_0_0/GRun/V9 --globaltag 100X_dataRun2_HLT_v1 --data --process TIMING --full --offline --unprescale --max-events 10 --output none >& hlt_timing.py

