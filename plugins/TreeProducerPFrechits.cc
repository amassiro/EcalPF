// -*- C++ -*-
//
// Package:    AdvancedMultifitCMSSW/TreeProducerPFrechits
// Class:      TreeProducerPFrechits
// 
/**\class TreeProducerPFrechits TreeProducerPFrechits.cc AdvancedMultifitCMSSW/TreeProducerPFrechits/plugins/TreeProducerPFrechits.cc
 * 
 * Description: [one line class summary]
 * 
 * Implementation:
 *     [Notes on implementation]
 */
//
// Original Author:  Andrea Massironi
//         Created:  Thu, 17 Nov 2016 10:09:05 GMT
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/one/EDAnalyzer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"



// ECAL specific

#include "DataFormats/EcalRecHit/interface/EcalRecHitCollections.h"

#include "CalibCalorimetry/EcalLaserCorrection/interface/EcalLaserDbService.h"
#include "CalibCalorimetry/EcalLaserCorrection/interface/EcalLaserDbRecord.h"
#include "CondFormats/EcalObjects/interface/EcalADCToGeVConstant.h"
#include "CondFormats/DataRecord/interface/EcalADCToGeVConstantRcd.h"
#include "CondFormats/EcalObjects/interface/EcalIntercalibConstants.h"
#include "CondFormats/EcalObjects/interface/EcalIntercalibConstantsMC.h"
#include "CondFormats/DataRecord/interface/EcalIntercalibConstantsRcd.h"
#include "CondFormats/DataRecord/interface/EcalIntercalibConstantsMCRcd.h"


#include "DataFormats/EcalDigi/interface/EcalDigiCollections.h"

#include "DataFormats/EcalRecHit/interface/EcalUncalibratedRecHit.h"
#include "DataFormats/EcalRecHit/interface/EcalRecHit.h"



#include "FWCore/Framework/interface/ESHandle.h"



#include "Geometry/Records/interface/CaloGeometryRecord.h"
#include "Geometry/CaloGeometry/interface/CaloSubdetectorGeometry.h"   //     ----> CLHEP/Geometry/Point3D.h issue
// #include "Geometry/CaloGeometry/interface/CaloCellGeometry.h"    ----> CLHEP/Geometry/Point3D.h issue
#include "Geometry/CaloGeometry/interface/CaloGeometry.h"
// #include "Geometry/EcalAlgo/interface/EcalBarrelGeometry.h"      ----> CLHEP/Geometry/Point3D.h issue
// #include "Geometry/EcalAlgo/interface/EcalEndcapGeometry.h"      ----> CLHEP/Geometry/Point3D.h issue




// #include "DataFormats/EcalDigi/interface/EcalDigiCollections.h"
// #include "DataFormats/EcalRecHit/interface/EcalRecHitCollections.h"
#include "CondFormats/EcalObjects/interface/EcalMGPAGainRatio.h"
#include "CondFormats/EcalObjects/interface/EcalGainRatios.h"
#include "CondFormats/DataRecord/interface/EcalGainRatiosRcd.h"


#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "FWCore/ServiceRegistry/interface/Service.h"




//---- pfrechit
#include "DataFormats/ParticleFlowReco/interface/PFRecHitFwd.h"
#include "DataFormats/ParticleFlowReco/interface/PFRecHit.h"



//---- for TP

#include "CondFormats/EcalObjects/interface/EcalTPGLutIdMap.h"
#include "CondFormats/EcalObjects/interface/EcalTPGLutGroup.h"
#include "CondFormats/EcalObjects/interface/EcalTPGPhysicsConst.h"
#include "CondFormats/DataRecord/interface/EcalTPGLutIdMapRcd.h"
#include "CondFormats/DataRecord/interface/EcalTPGLutGroupRcd.h"
#include "CondFormats/DataRecord/interface/EcalTPGPhysicsConstRcd.h"


#include "Geometry/CaloTopology/interface/EcalTrigTowerConstituentsMap.h"






#include "TTree.h"




//---- for Zee part
#include "DataFormats/PatCandidates/interface/Electron.h"






//
// class declaration
//

// If the analyzer does not use TFileService, please remove
// the template argument to the base class so the class inherits
// from  edm::one::EDAnalyzer<> and also remove the line from
// constructor "usesResource("TFileService");"
// This will improve performance in multithreaded jobs.

class TreeProducerPFrechits : public edm::one::EDAnalyzer<edm::one::SharedResources>  {
public:
  explicit TreeProducerPFrechits(const edm::ParameterSet&);
  ~TreeProducerPFrechits();
  
  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);
  
private:
  virtual void beginJob() override;
  virtual void analyze(const edm::Event&, const edm::EventSetup&) override;
  virtual void endJob() override;
  
  // ----------member data ---------------------------
 
  edm::EDGetTokenT<reco::PFRecHitCollection> _token_pfrechits;
    
  TTree *outTree;
  
  UInt_t _run;
  UShort_t _lumi;
  UShort_t _bx;
  UShort_t _event;      
  float _energy[61200+14648];
  float _eta[61200+14648];
  float _phi[61200+14648];
  int _flag[61200+14648];
  
//   
//   vector<reco::PFRecHit>                "particleFlowRecHitECAL"    "Cleaned"         "RECO"    
//   
  
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
TreeProducerPFrechits::TreeProducerPFrechits(const edm::ParameterSet& iConfig)

{
  //now do what ever initialization is needed
  usesResource("TFileService");
  
  
  //now do what ever initialization is needed
  usesResource("TFileService");
  edm::Service<TFileService> fs;
  
  _token_pfrechits = consumes<reco::PFRecHitCollection>(iConfig.getParameter<edm::InputTag>("ParticleFlowRecHitECALCollectionTag"));
  
  
  outTree = fs->make<TTree>("tree","tree");
  
  outTree->Branch("run",               &_run,             "run/i");
  outTree->Branch("lumi",              &_lumi,            "lumi/s");
  outTree->Branch("bx",                &_bx,              "bx/s");
  outTree->Branch("event",             &_event,           "event/i");
  outTree->Branch("energy",       _energy,    "energy[75848]/F");
  outTree->Branch("eta",       _eta,    "eta[75848]/F");
  outTree->Branch("phi",       _phi,    "phi[75848]/F");
  outTree->Branch("flag",       _flag,    "flag[75848]/I");
  
  
  
  
}


TreeProducerPFrechits::~TreeProducerPFrechits()
{
  
  // do anything here that needs to be done at desctruction time
  // (e.g. close files, deallocate resources etc.)
  
}


//
// member functions
//

// ------------ method called for each event  ------------
void
TreeProducerPFrechits::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup) {
  
  _run = iEvent.eventAuxiliary().run();
  _lumi = iEvent.eventAuxiliary().luminosityBlock();
  _bx = iEvent.eventAuxiliary().bunchCrossing();
  _event = iEvent.eventAuxiliary().event();
  
  
    
  
  //---- pfrechits
  
  edm::Handle<reco::PFRecHitCollection> pfrecHithandle;
  iEvent.getByToken(_token_pfrechits, pfrecHithandle);
  const reco::PFRecHitCollection *pfrechits = NULL;
//   assert(pfrecHithandle.isValid());
  pfrechits = pfrecHithandle.product();
  
  std::cout << " ~~ " << std::endl;
  std::cout << " > pfrechits->size() = " << pfrechits->size() << std::endl;
    
  for (reco::PFRecHitCollection::const_iterator itrechit = pfrechits->begin(); itrechit != pfrechits->end(); itrechit++ ) {
    std::cout << "        itrechit->detId() " << itrechit->detId() << std::endl;
//     _energy[DetId(itrechit->detId()).hashedIndex()] =  itrechit->energy();    
  }
  
  std::cout << " ~~ " << std::endl;
  
  
  
  
  outTree->Fill();
  
  
}




// ------------ method called once each job just before starting event loop  ------------
void 
TreeProducerPFrechits::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
TreeProducerPFrechits::endJob() 
{
}

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
TreeProducerPFrechits::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);
}

//define this as a plug-in
DEFINE_FWK_MODULE(TreeProducerPFrechits);
