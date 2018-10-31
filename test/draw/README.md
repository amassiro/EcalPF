Deta in EE
====

    r00t drawDeta.cxx

Prepare thresholds transofrming iring into ix/iy and ieta/iphi maps
====

    r00t -q prepareThresholds.cxx
    r00t -q prepareThresholds.cxx\(0\)
    r00t -q prepareThresholds.cxx\(1\)
    r00t -q prepareThresholds.cxx\(2\)

    r00t -q prepareThresholds.cxx\(5\)


Create map eta-ring
====

    r00t -q prepareMap.cxx

    
    
    
Draw comparison between two root files
====

    r00t drawComparison.cxx
    r00t  PhoStat_1_numEvent1000.root NoPhoStat_1_numEvent1000.root    draw/drawComparison.cxx\(\"seed_energy\",150,0,300\)
    
    
    
    