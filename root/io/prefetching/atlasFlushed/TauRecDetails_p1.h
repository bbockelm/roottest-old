//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TauRecDetails_p1_h
#define TauRecDetails_p1_h
class TauRecDetails_p1;

#include "ElementLinkVector_p1_unsigned_int_.h"
#include "HepLorentzVector_p1.h"
#include "TPObjRef.h"
#include "Riostream.h"
#include <vector>

class TauRecDetails_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   ElementLinkVector_p1<unsigned int> m_looseTracks;    //
   float                              m_emRadius;       //
   float                              m_hadRadius;      //
   float                              m_sumEmCellEt;    //
   float                              m_sumHadCellEt;    //
   float                              m_ET12Frac;        //
   float                              m_centralityFraction;    //
   float                              m_stripWidth2;           //
   int                                m_numStripCells;         //
   HepLorentzVector_p1                m_sumEM;                 //
   float                              m_etEMCalib;             //
   float                              m_etHadCalib;            //
   TPObjRef                           m_secVertex;             //
   vector<float>                      m_trackCaloEta;          //
   vector<float>                      m_trackCaloPhi;          //
   float                              m_leadingTrackPT;        //
   float                              m_trFlightPathSig;       //
   float                              m_etaCalo;               //
   float                              m_phiCalo;               //
   float                              m_ipSigLeadTrack;        //
   float                              m_etOverPtLeadTrack;     //
   int                                m_nTracksdrdR;           //
   int                                m_chargeLooseTracks;     //

   TauRecDetails_p1();
   TauRecDetails_p1(const TauRecDetails_p1 & );
   virtual ~TauRecDetails_p1();

};
#endif