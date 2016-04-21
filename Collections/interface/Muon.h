#ifndef OSU_MUON
#define OSU_MUON

#include "OSUT3Analysis/Collections/interface/GenMatchable.h"

#if IS_VALID(muons)

namespace osu
{
  class Muon : public GenMatchable<TYPE(muons), 13>
    {
      public:
        Muon ();
        Muon (const TYPE(muons) &);
        Muon (const TYPE(muons) &, const edm::Handle<vector<osu::Mcparticle> > &);
        Muon (const TYPE(muons) &, const edm::Handle<vector<osu::Mcparticle> > &, const edm::ParameterSet &);
        ~Muon ();

        const double pfdBetaIsoCorr () const;
        const bool isTightMuonWRTVtx() const { return isTightMuonWRTVtx_; }
        void set_isTightMuonWRTVtx(const bool isTightMuon);
        void set_pfdBetaIsoCorr (double value) { pfdBetaIsoCorr_  = value; }  

        const int missingInnerHits () const;
        const int missingMiddleHits () const;
        const int missingOuterHits () const;

      private:
        bool isTightMuonWRTVtx_;
        double pfdBetaIsoCorr_;

    };
}

#else

namespace osu
{
  typedef TYPE(muons) Muon;
}

#endif

#endif
