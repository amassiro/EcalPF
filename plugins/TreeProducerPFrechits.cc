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

//--- pfcluster
#include "DataFormats/ParticleFlowReco/interface/PFClusterFwd.h"
#include "DataFormats/ParticleFlowReco/interface/PFCluster.h"



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



//---- for SR flags
#include "CalibCalorimetry/EcalTPGTools/interface/EcalReadoutTools.h"




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
  
  edm::EDGetTokenT<EBSrFlagCollection> _token_ebSrFlag;
  edm::EDGetTokenT<EESrFlagCollection> _token_eeSrFlag;
  
  edm::EDGetTokenT<reco::PFClusterCollection> _token_pfcluster;
  
  
  
  TTree *outTree;
  
  UInt_t _run;
  UShort_t _lumi;
  UShort_t _bx;
  UShort_t _event;      
  float _energy[61200+14648];
  float _eta[61200+14648];
  float _phi[61200+14648];
  int _flag[61200+14648];
  int _number[61200+14648];


  float _seed_energy[61200+14648];
  float _seed_eta[61200+14648];
  float _seed_phi[61200+14648];
  int _seed_flag[61200+14648];
  int _seed_number[61200+14648];
  
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
  
  _token_ebSrFlag = consumes<EBSrFlagCollection>(iConfig.getParameter<edm::InputTag>("ebSrFlagLabel"));
  _token_eeSrFlag = consumes<EESrFlagCollection>(iConfig.getParameter<edm::InputTag>("eeSrFlagLabel"));
  
  _token_pfcluster = consumes<reco::PFClusterCollection>(iConfig.getParameter<edm::InputTag>("pfClusterTag"));
  
  
  outTree = fs->make<TTree>("tree","tree");
  
  outTree->Branch("run",               &_run,             "run/i");
  outTree->Branch("lumi",              &_lumi,            "lumi/s");
  outTree->Branch("bx",                &_bx,              "bx/s");
  outTree->Branch("event",             &_event,           "event/i");
  outTree->Branch("energy",       _energy,    "energy[75848]/F");
  outTree->Branch("eta",             _eta,    "eta[75848]/F");
  outTree->Branch("phi",             _phi,    "phi[75848]/F");
  outTree->Branch("flag",           _flag,    "flag[75848]/I");
  outTree->Branch("number",       _number,    "number[75848]/I");
  
  outTree->Branch("seed_energy",   _seed_energy,        "seed_energy[75848]/F");
  outTree->Branch("seed_eta",         _seed_eta,        "seed_eta[75848]/F");
  outTree->Branch("seed_phi",         _seed_phi,        "seed_phi[75848]/F");
  outTree->Branch("seed_flag",       _seed_flag,        "seed_flag[75848]/I");
  outTree->Branch("seed_number",   _seed_number,        "seed_number[75848]/I");
  
  
  
  
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
  
  
  //---- geometry 
  
  edm::ESHandle<CaloGeometry> pGeometry;
  iSetup.get<CaloGeometryRecord>().get(pGeometry);
  const CaloGeometry *geometry = pGeometry.product();
  
  
  
  //---- pfrechits
  
  edm::Handle<reco::PFRecHitCollection> pfrecHithandle;
  iEvent.getByToken(_token_pfrechits, pfrecHithandle);
  const reco::PFRecHitCollection *pfrechits = NULL;
//   assert(pfrecHithandle.isValid());
  pfrechits = pfrecHithandle.product();
  
  
  for (int ixtal=0; ixtal < 61200+14648; ixtal++) {
    _energy[ixtal] = -99;
    _eta[ixtal] = -99;
    _phi[ixtal] = -99;
    _flag[ixtal] = -99;
    _number[ixtal] = ixtal;

    _seed_energy[ixtal] = -99;
    _seed_eta[ixtal] = -99;
    _seed_phi[ixtal] = -99;
    _seed_flag[ixtal] = -99;
    _seed_number[ixtal] = ixtal;
    
  }
  
  
  
  
  // Selective Readout Flags (Thanks Shilpi for the code snippet!)
  edm::Handle<EBSrFlagCollection> ebSrFlags;   
  edm::Handle<EESrFlagCollection> eeSrFlags;  
  iEvent.getByToken(_token_ebSrFlag, ebSrFlags);  
  iEvent.getByToken(_token_eeSrFlag, eeSrFlags);
  
  EcalReadoutTools readoutTool(iEvent, iSetup);
  
  
  
  //---- pf cluster collection
  
  edm::Handle<reco::PFClusterCollection> pfClustersHanlde;
  iEvent.getByToken(_token_pfcluster,pfClustersHanlde);
  
  for (auto&& pfc : *pfClustersHanlde) {
    
    ///ieta, iphi
    //find seed crystal indices
    bool iseb = (pfc.layer()) == (PFLayer::ECAL_BARREL);
    
    int index_number = 0;
    
    if (iseb) {
      EBDetId ebseed(pfc.seed());
      _seed_eta[ebseed.hashedIndex()] = ebseed.ieta();
      _seed_phi[ebseed.hashedIndex()] = ebseed.iphi();
//       _seed_energy[ebseed.hashedIndex()] = pfc.seed().energy();
      index_number = ebseed.hashedIndex();
     } else {
      EEDetId eeseed(pfc.seed());
      _seed_eta[eeseed.hashedIndex()+61200] = eeseed.ix();
      _seed_phi[eeseed.hashedIndex()+61200] = eeseed.iy();
//       _seed_energy[eeseed.hashedIndex()+61200] = pfc.seed().energy();
      index_number = eeseed.hashedIndex()+61200;
     }
    
//     std::cout << "index_number = " << index_number << std::endl;
    
    
    ///http://cmsdoxygen.web.cern.ch/cmsdoxygen/CMSSW_9_3_0_pre1/doc/html/d2/ddd/PFMultiDepthClusterizer_8cc_source.html#l00098
    
    if (iseb){
      EBDetId ebseed(pfc.seed());
      auto ecalUnit = readoutTool.readOutUnitOf(ebseed);
      EBSrFlagCollection::const_iterator srf = ebSrFlags->find(ecalUnit);      
      if (srf != ebSrFlags->end()) {
        _seed_flag[ebseed.hashedIndex()] = srf->value();
        if (srf->value() < 1) std::cout << " srf->value() = " << srf->value() << std::endl;
      }
    } else {
      EEDetId eeseed(pfc.seed());
      auto ecalUnit = readoutTool.readOutUnitOf(eeseed);
      EESrFlagCollection::const_iterator srf = eeSrFlags->find(ecalUnit);      
      if (srf != eeSrFlags->end()) {
        _seed_flag[eeseed.hashedIndex()+61200] = srf->value();
        if (srf->value() < 1) std::cout << " srf->value() = " << srf->value() << std::endl;
      }
    }
    
    
    
   //---- get seed energy 
    
    double tmpMaxE = -999;
    
    const std::vector<reco::PFRecHitFraction> & fraction_v = pfc.recHitFractions();
    
    
    for (std::vector<reco::PFRecHitFraction>::const_iterator it = fraction_v.begin(); it != fraction_v.end(); it++){
      
      double rechitE_fraction = it->fraction();
      if(tmpMaxE < rechitE_fraction){
        tmpMaxE = rechitE_fraction;
      }
      
      
      
      
//       auto const & h = it->recHitRef();
//       
//       if(h.isNull()){
//         continue;
//       }
//       
// //       std::cout << " isNull ... " << h.isNull() << std::endl;
//       
// //       const reco::PFRecHit& rechit = *h;
// //       
// //       double rechitE = rechit.energy();
//       double rechitE = h->energy();
//       
//       if(tmpMaxE < rechitE){
//         tmpMaxE = rechitE;
//       }

      
    }
    
    _seed_energy[index_number] = tmpMaxE * pfc.energy();
    
    
    
  }
  
  
  
  
//   std::cout << " ~~ " << std::endl;
//   std::cout << " > pfrechits->size() = " << pfrechits->size() << std::endl;
    
  for (reco::PFRecHitCollection::const_iterator itrechit = pfrechits->begin(); itrechit != pfrechits->end(); itrechit++ ) {
//     std::cout << "        itrechit->detId() " << itrechit->detId() << " energy = " << itrechit->energy() << std::endl;
//     std::cout << "                   itrechit->hasCaloCell()  " << itrechit->hasCaloCell() << std::endl;
//     if (itrechit->hasCaloCell()) {
//       std::cout << "                   itrechit->caloCell().etaPos()  " << itrechit->caloCell().etaPos() << std::endl;
//       std::cout << "                   itrechit->caloCell().phiPos()  " << itrechit->caloCell().phiPos() << std::endl;
//     }
    
      if ( itrechit->detId() < 872420480 ) {
//         std::cout << " EB " << std::endl;
//         838904321
//         838970216
        _energy[EBDetId(itrechit->detId()).hashedIndex()] =  itrechit->energy(); 
        _eta[EBDetId(itrechit->detId()).hashedIndex()] = (EBDetId(itrechit->detId()).ieta());
        _phi[EBDetId(itrechit->detId()).hashedIndex()] = (EBDetId(itrechit->detId()).iphi());
        
        auto ecalUnit = readoutTool.readOutUnitOf(EBDetId(itrechit->detId()));
        EBSrFlagCollection::const_iterator srf = ebSrFlags->find(ecalUnit);      
        if (srf != ebSrFlags->end()) {
          _flag[EBDetId(itrechit->detId()).hashedIndex()] = (srf->value());
        }
        
        
      }
      else {
//         std::cout << " EE " << std::endl;
        //       872420481
        //       872439396
        _energy[EEDetId(itrechit->detId()).hashedIndex()+61200] =  itrechit->energy(); 

        GlobalPoint mycell = geometry -> getPosition(DetId(itrechit->detId()));
        _eta[EEDetId(itrechit->detId()).hashedIndex()+61200] = mycell.eta();
        _phi[EEDetId(itrechit->detId()).hashedIndex()+61200] = mycell.phi();
       
        auto ecalUnit = readoutTool.readOutUnitOf(EEDetId(itrechit->detId()));
        EESrFlagCollection::const_iterator srf = eeSrFlags->find(ecalUnit);      
        if (srf != eeSrFlags->end()) {
          _flag[EEDetId(itrechit->detId()).hashedIndex()+61200] = (srf->value());
        }
        
      }
    
    
   
   
   
    
    
//     _energy[DetId(itrechit->detId()).hashedIndex()] =  itrechit->energy();    
  }
  
//   std::cout << " ~~ " << std::endl;
  
  
  
  
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
