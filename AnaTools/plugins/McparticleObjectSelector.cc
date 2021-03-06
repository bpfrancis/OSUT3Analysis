#include "OSUT3Analysis/AnaTools/interface/ObjectSelector.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#if IS_VALID(mcparticles)
typedef ObjectSelector<osu::Mcparticle, TYPE(mcparticles)> McparticleObjectSelector;
  DEFINE_FWK_MODULE(McparticleObjectSelector);
#endif
