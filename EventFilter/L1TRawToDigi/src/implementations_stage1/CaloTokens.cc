#include "FWCore/Framework/interface/ConsumesCollector.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"

#include "CaloTokens.h"

namespace l1t {
   namespace stage1 {
      CaloTokens::CaloTokens(const edm::ParameterSet& cfg, edm::ConsumesCollector& cc) : PackerTokens(cfg, cc)
      {
         auto tag = cfg.getParameter<edm::InputTag>("InputLabel");
         auto tautag = cfg.getParameter<edm::InputTag>("TauInputLabel");

         towerToken_ = cc.consumes<CaloTowerBxCollection>(tag);
         egammaToken_ = cc.consumes<EGammaBxCollection>(tag);
         etSumToken_ = cc.consumes<EtSumBxCollection>(tag);
         jetToken_ = cc.consumes<JetBxCollection>(tag);
         tauToken_ = cc.consumes<TauBxCollection>(tautag);
         calospareToken_ = cc.consumes<CaloSpareBxCollection>(tag);
      }
   }
}
