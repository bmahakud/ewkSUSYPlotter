#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
using namespace std;

class ClassReadData {

public :

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   Int_t           fCurrent; //!current Tree number in a TChain



// Fixed size dimensions of array or collections stored in the TTree if any.



   // Declaration of leaf types

   Int_t           passPtMll;

   Int_t           is_3l;

   Int_t           is_4l;

   Int_t           is_5l;

   Int_t           nOSSF_3l;

   Int_t           nOSSFL_3l;

   Int_t           nOSSFT_3l;

   Int_t           nOSLF_3l;

   Int_t           nOSTF_3l;

   Float_t         mll_3l;

   Float_t         mllL_3l;

   Float_t         mllT_3l;

   Float_t         m3L;

   Int_t           nOSSF_4l;

   Int_t           nOSSFL_4l;

   Int_t           nOSSFT_4l;

   Int_t           nOSLF_4l;

   Int_t           nOSTF_4l;

   Float_t         mll_4l;

   Float_t         mllL_4l;

   Float_t         mllT_4l;

   Float_t         m4L;

   Float_t         minDeltaR_3l;

   Float_t         minDeltaR_4l;

   Float_t         minDeltaR_3l_mumu;

   Float_t         minDeltaR_4l_mumu;

   Int_t           nOS;

   Float_t         mll[2];   //[nOS]

   Int_t           mll_fl[2];   //[nOS]

   Int_t           mll_i1[2];   //[nOS]

   Int_t           mll_i2[2];   //[nOS]

   Int_t           nLepSel;

   Float_t         LepSel_pt[4];

   Float_t         LepSel_eta[4];

   Float_t         LepSel_phi[4];

   Float_t         LepSel_mass[4];

   Float_t         LepSel_conePt[4];

   Float_t         LepSel_dxy[4];

   Float_t         LepSel_dz[4];

   Float_t         LepSel_sip3d[4];

   Float_t         LepSel_miniRelIso[4];

   Float_t         LepSel_relIso[4];

   Float_t         LepSel_ptratio[4];

   Float_t         LepSel_ptrel[4];

   Float_t         LepSel_mva[4];

   Float_t         LepSel_pterr[4];

   Int_t           LepSel_pdgId[4];

   Int_t           LepSel_isTight[4];

   Int_t           LepSel_tightCharge[4];

   Int_t           LepSel_mcMatchId[4];

   Int_t           LepSel_mcMatchAny[4];

   Int_t           LepSel_mcPromptGamma[4];

   Int_t           LepSel_mcUCSX[4];

   Int_t           LepSel_trIdx[4];

   Int_t           imT_3l;

   Int_t           imTL_3l;

   Int_t           imTT_3l;

   Float_t         mT_3l;

   Float_t         mTL_3l;

   Float_t         mTT_3l;

   Float_t         mT2L_3l;

   Float_t         mT2T_3l;

   Int_t           imT_4l;

   Int_t           imTL_4l;

   Int_t           imTT_4l;

   Float_t         mT_4l;

   Float_t         mTL_4l;

   Float_t         mTT_4l;

   Float_t         mT2L_4l;

   Float_t         mT2T_4l;

   Int_t           imT_3l_gen;

   Int_t           imTL_3l_gen;

   Int_t           imTT_3l_gen;

   Float_t         mT_3l_gen;

   Float_t         mTL_3l_gen;

   Float_t         mTT_3l_gen;

   Float_t         mT2L_3l_gen;

   Float_t         mT2T_3l_gen;

   Int_t           imT_4l_gen;

   Int_t           imTL_4l_gen;

   Int_t           imTT_4l_gen;

   Float_t         mT_4l_gen;

   Float_t         mTL_4l_gen;

   Float_t         mTT_4l_gen;

   Float_t         mT2L_4l_gen;

   Float_t         mT2T_4l_gen;

   Int_t           imT_3l_jecUp;

   Int_t           imTL_3l_jecUp;

   Int_t           imTT_3l_jecUp;

   Float_t         mT_3l_jecUp;

   Float_t         mTL_3l_jecUp;

   Float_t         mTT_3l_jecUp;

   Float_t         mT2L_3l_jecUp;

   Float_t         mT2T_3l_jecUp;

   Int_t           imT_4l_jecUp;

   Int_t           imTL_4l_jecUp;

   Int_t           imTT_4l_jecUp;

   Float_t         mT_4l_jecUp;

   Float_t         mTL_4l_jecUp;

   Float_t         mTT_4l_jecUp;

   Float_t         mT2L_4l_jecUp;

   Float_t         mT2T_4l_jecUp;

   Int_t           imT_3l_gen_jecUp;

   Int_t           imTL_3l_gen_jecUp;

   Int_t           imTT_3l_gen_jecUp;

   Float_t         mT_3l_gen_jecUp;

   Float_t         mTL_3l_gen_jecUp;

   Float_t         mTT_3l_gen_jecUp;

   Float_t         mT2L_3l_gen_jecUp;

   Float_t         mT2T_3l_gen_jecUp;

   Int_t           imT_4l_gen_jecUp;

   Int_t           imTL_4l_gen_jecUp;

   Int_t           imTT_4l_gen_jecUp;

   Float_t         mT_4l_gen_jecUp;

   Float_t         mTL_4l_gen_jecUp;

   Float_t         mTT_4l_gen_jecUp;

   Float_t         mT2L_4l_gen_jecUp;

   Float_t         mT2T_4l_gen_jecUp;

   Int_t           imT_3l_jecDown;

   Int_t           imTL_3l_jecDown;

   Int_t           imTT_3l_jecDown;

   Float_t         mT_3l_jecDown;

   Float_t         mTL_3l_jecDown;

   Float_t         mTT_3l_jecDown;

   Float_t         mT2L_3l_jecDown;

   Float_t         mT2T_3l_jecDown;

   Int_t           imT_4l_jecDown;

   Int_t           imTL_4l_jecDown;

   Int_t           imTT_4l_jecDown;

   Float_t         mT_4l_jecDown;

   Float_t         mTL_4l_jecDown;

   Float_t         mTT_4l_jecDown;

   Float_t         mT2L_4l_jecDown;

   Float_t         mT2T_4l_jecDown;

   Int_t           imT_3l_gen_jecDown;

   Int_t           imTL_3l_gen_jecDown;

   Int_t           imTT_3l_gen_jecDown;

   Float_t         mT_3l_gen_jecDown;

   Float_t         mTL_3l_gen_jecDown;

   Float_t         mTT_3l_gen_jecDown;

   Float_t         mT2L_3l_gen_jecDown;

   Float_t         mT2T_3l_gen_jecDown;

   Int_t           imT_4l_gen_jecDown;

   Int_t           imTL_4l_gen_jecDown;

   Int_t           imTT_4l_gen_jecDown;

   Float_t         mT_4l_gen_jecDown;

   Float_t         mTL_4l_gen_jecDown;

   Float_t         mTT_4l_gen_jecDown;

   Float_t         mT2L_4l_gen_jecDown;

   Float_t         mT2T_4l_gen_jecDown;



   // List of branches

   TBranch        *b_passPtMll;   //!

   TBranch        *b_is_3l;   //!

   TBranch        *b_is_4l;   //!

   TBranch        *b_is_5l;   //!

   TBranch        *b_nOSSF_3l;   //!

   TBranch        *b_nOSSFL_3l;   //!

   TBranch        *b_nOSSFT_3l;   //!

   TBranch        *b_nOSLF_3l;   //!

   TBranch        *b_nOSTF_3l;   //!

   TBranch        *b_mll_3l;   //!

   TBranch        *b_mllL_3l;   //!

   TBranch        *b_mllT_3l;   //!

   TBranch        *b_m3L;   //!

   TBranch        *b_nOSSF_4l;   //!

   TBranch        *b_nOSSFL_4l;   //!

   TBranch        *b_nOSSFT_4l;   //!

   TBranch        *b_nOSLF_4l;   //!

   TBranch        *b_nOSTF_4l;   //!

   TBranch        *b_mll_4l;   //!

   TBranch        *b_mllL_4l;   //!

   TBranch        *b_mllT_4l;   //!

   TBranch        *b_m4L;   //!

   TBranch        *b_minDeltaR_3l;   //!

   TBranch        *b_minDeltaR_4l;   //!

   TBranch        *b_minDeltaR_3l_mumu;   //!

   TBranch        *b_minDeltaR_4l_mumu;   //!

   TBranch        *b_nOS;   //!

   TBranch        *b_mll;   //!

   TBranch        *b_mll_fl;   //!

   TBranch        *b_mll_i1;   //!

   TBranch        *b_mll_i2;   //!

   TBranch        *b_nLepSel;   //!

   TBranch        *b_LepSel_pt;   //!

   TBranch        *b_LepSel_eta;   //!

   TBranch        *b_LepSel_phi;   //!

   TBranch        *b_LepSel_mass;   //!

   TBranch        *b_LepSel_conePt;   //!

   TBranch        *b_LepSel_dxy;   //!

   TBranch        *b_LepSel_dz;   //!

   TBranch        *b_LepSel_sip3d;   //!

   TBranch        *b_LepSel_miniRelIso;   //!

   TBranch        *b_LepSel_relIso;   //!

   TBranch        *b_LepSel_ptratio;   //!

   TBranch        *b_LepSel_ptrel;   //!

   TBranch        *b_LepSel_mva;   //!

   TBranch        *b_LepSel_pterr;   //!

   TBranch        *b_LepSel_pdgId;   //!

   TBranch        *b_LepSel_isTight;   //!

   TBranch        *b_LepSel_tightCharge;   //!

   TBranch        *b_LepSel_mcMatchId;   //!

   TBranch        *b_LepSel_mcMatchAny;   //!

   TBranch        *b_LepSel_mcPromptGamma;   //!

   TBranch        *b_LepSel_mcUCSX;   //!

   TBranch        *b_LepSel_trIdx;   //!

   TBranch        *b_imT_3l;   //!

   TBranch        *b_imTL_3l;   //!

   TBranch        *b_imTT_3l;   //!

   TBranch        *b_mT_3l;   //!

   TBranch        *b_mTL_3l;   //!

   TBranch        *b_mTT_3l;   //!

   TBranch        *b_mT2L_3l;   //!

   TBranch        *b_mT2T_3l;   //!

   TBranch        *b_imT_4l;   //!

   TBranch        *b_imTL_4l;   //!

   TBranch        *b_imTT_4l;   //!

   TBranch        *b_mT_4l;   //!

   TBranch        *b_mTL_4l;   //!

   TBranch        *b_mTT_4l;   //!

   TBranch        *b_mT2L_4l;   //!

   TBranch        *b_mT2T_4l;   //!

   TBranch        *b_imT_3l_gen;   //!

   TBranch        *b_imTL_3l_gen;   //!

   TBranch        *b_imTT_3l_gen;   //!

   TBranch        *b_mT_3l_gen;   //!

   TBranch        *b_mTL_3l_gen;   //!

   TBranch        *b_mTT_3l_gen;   //!

   TBranch        *b_mT2L_3l_gen;   //!

   TBranch        *b_mT2T_3l_gen;   //!

   TBranch        *b_imT_4l_gen;   //!

   TBranch        *b_imTL_4l_gen;   //!

   TBranch        *b_imTT_4l_gen;   //!

   TBranch        *b_mT_4l_gen;   //!

   TBranch        *b_mTL_4l_gen;   //!

   TBranch        *b_mTT_4l_gen;   //!

   TBranch        *b_mT2L_4l_gen;   //!

   TBranch        *b_mT2T_4l_gen;   //!

   TBranch        *b_imT_3l_jecUp;   //!

   TBranch        *b_imTL_3l_jecUp;   //!

   TBranch        *b_imTT_3l_jecUp;   //!

   TBranch        *b_mT_3l_jecUp;   //!

   TBranch        *b_mTL_3l_jecUp;   //!

   TBranch        *b_mTT_3l_jecUp;   //!

   TBranch        *b_mT2L_3l_jecUp;   //!

   TBranch        *b_mT2T_3l_jecUp;   //!

   TBranch        *b_imT_4l_jecUp;   //!

   TBranch        *b_imTL_4l_jecUp;   //!

   TBranch        *b_imTT_4l_jecUp;   //!

   TBranch        *b_mT_4l_jecUp;   //!

   TBranch        *b_mTL_4l_jecUp;   //!

   TBranch        *b_mTT_4l_jecUp;   //!

   TBranch        *b_mT2L_4l_jecUp;   //!

   TBranch        *b_mT2T_4l_jecUp;   //!

   TBranch        *b_imT_3l_gen_jecUp;   //!

   TBranch        *b_imTL_3l_gen_jecUp;   //!

   TBranch        *b_imTT_3l_gen_jecUp;   //!

   TBranch        *b_mT_3l_gen_jecUp;   //!

   TBranch        *b_mTL_3l_gen_jecUp;   //!

   TBranch        *b_mTT_3l_gen_jecUp;   //!

   TBranch        *b_mT2L_3l_gen_jecUp;   //!

   TBranch        *b_mT2T_3l_gen_jecUp;   //!

   TBranch        *b_imT_4l_gen_jecUp;   //!

   TBranch        *b_imTL_4l_gen_jecUp;   //!

   TBranch        *b_imTT_4l_gen_jecUp;   //!

   TBranch        *b_mT_4l_gen_jecUp;   //!

   TBranch        *b_mTL_4l_gen_jecUp;   //!

   TBranch        *b_mTT_4l_gen_jecUp;   //!

   TBranch        *b_mT2L_4l_gen_jecUp;   //!

   TBranch        *b_mT2T_4l_gen_jecUp;   //!

   TBranch        *b_imT_3l_jecDown;   //!

   TBranch        *b_imTL_3l_jecDown;   //!

   TBranch        *b_imTT_3l_jecDown;   //!

   TBranch        *b_mT_3l_jecDown;   //!

   TBranch        *b_mTL_3l_jecDown;   //!

   TBranch        *b_mTT_3l_jecDown;   //!

   TBranch        *b_mT2L_3l_jecDown;   //!

   TBranch        *b_mT2T_3l_jecDown;   //!

   TBranch        *b_imT_4l_jecDown;   //!

   TBranch        *b_imTL_4l_jecDown;   //!

   TBranch        *b_imTT_4l_jecDown;   //!

   TBranch        *b_mT_4l_jecDown;   //!

   TBranch        *b_mTL_4l_jecDown;   //!

   TBranch        *b_mTT_4l_jecDown;   //!

   TBranch        *b_mT2L_4l_jecDown;   //!

   TBranch        *b_mT2T_4l_jecDown;   //!

   TBranch        *b_imT_3l_gen_jecDown;   //!

   TBranch        *b_imTL_3l_gen_jecDown;   //!

   TBranch        *b_imTT_3l_gen_jecDown;   //!

   TBranch        *b_mT_3l_gen_jecDown;   //!

   TBranch        *b_mTL_3l_gen_jecDown;   //!

   TBranch        *b_mTT_3l_gen_jecDown;   //!

   TBranch        *b_mT2L_3l_gen_jecDown;   //!

   TBranch        *b_mT2T_3l_gen_jecDown;   //!

   TBranch        *b_imT_4l_gen_jecDown;   //!

   TBranch        *b_imTL_4l_gen_jecDown;   //!

   TBranch        *b_imTT_4l_gen_jecDown;   //!

   TBranch        *b_mT_4l_gen_jecDown;   //!

   TBranch        *b_mTL_4l_gen_jecDown;   //!

   TBranch        *b_mTT_4l_gen_jecDown;   //!

   TBranch        *b_mT2L_4l_gen_jecDown;   //!

   TBranch        *b_mT2T_4l_gen_jecDown;   //!



   ClassReadData(TTree *tree);

   virtual ~ClassReadData();

   

   

   

   virtual void     Init(TTree *tree);

   

   

   

};

ClassReadData::~ClassReadData()

{

   if (!fChain) return;

   delete fChain->GetCurrentFile();

}

void ClassReadData::Init(TTree *tree)

{

   // The Init() function is called when the selector needs to initialize

   // a new tree or chain. Typically here the branch addresses and branch

   // pointers of the tree will be set.

   // It is normally not necessary to make changes to the generated

   // code, but the routine can be extended by the user if needed.

   // Init() will be called many times when running on PROOF

   // (once per file to be processed).



   // Set branch addresses and branch pointers

   if (!tree) return;

   fChain = tree;

   fCurrent = -1;

   fChain->SetMakeClass(1);



   fChain->SetBranchAddress("passPtMll", &passPtMll, &b_passPtMll);

   fChain->SetBranchAddress("is_3l", &is_3l, &b_is_3l);

   fChain->SetBranchAddress("is_4l", &is_4l, &b_is_4l);

   fChain->SetBranchAddress("is_5l", &is_5l, &b_is_5l);

   fChain->SetBranchAddress("nOSSF_3l", &nOSSF_3l, &b_nOSSF_3l);

   fChain->SetBranchAddress("nOSSFL_3l", &nOSSFL_3l, &b_nOSSFL_3l);

   fChain->SetBranchAddress("nOSSFT_3l", &nOSSFT_3l, &b_nOSSFT_3l);

   fChain->SetBranchAddress("nOSLF_3l", &nOSLF_3l, &b_nOSLF_3l);

   fChain->SetBranchAddress("nOSTF_3l", &nOSTF_3l, &b_nOSTF_3l);

   fChain->SetBranchAddress("mll_3l", &mll_3l, &b_mll_3l);

   fChain->SetBranchAddress("mllL_3l", &mllL_3l, &b_mllL_3l);

   fChain->SetBranchAddress("mllT_3l", &mllT_3l, &b_mllT_3l);

   fChain->SetBranchAddress("m3L", &m3L, &b_m3L);

   fChain->SetBranchAddress("nOSSF_4l", &nOSSF_4l, &b_nOSSF_4l);

   fChain->SetBranchAddress("nOSSFL_4l", &nOSSFL_4l, &b_nOSSFL_4l);

   fChain->SetBranchAddress("nOSSFT_4l", &nOSSFT_4l, &b_nOSSFT_4l);

   fChain->SetBranchAddress("nOSLF_4l", &nOSLF_4l, &b_nOSLF_4l);

   fChain->SetBranchAddress("nOSTF_4l", &nOSTF_4l, &b_nOSTF_4l);

   fChain->SetBranchAddress("mll_4l", &mll_4l, &b_mll_4l);

   fChain->SetBranchAddress("mllL_4l", &mllL_4l, &b_mllL_4l);

   fChain->SetBranchAddress("mllT_4l", &mllT_4l, &b_mllT_4l);

   fChain->SetBranchAddress("m4L", &m4L, &b_m4L);

   fChain->SetBranchAddress("minDeltaR_3l", &minDeltaR_3l, &b_minDeltaR_3l);

   fChain->SetBranchAddress("minDeltaR_4l", &minDeltaR_4l, &b_minDeltaR_4l);

   fChain->SetBranchAddress("minDeltaR_3l_mumu", &minDeltaR_3l_mumu, &b_minDeltaR_3l_mumu);

   fChain->SetBranchAddress("minDeltaR_4l_mumu", &minDeltaR_4l_mumu, &b_minDeltaR_4l_mumu);

   fChain->SetBranchAddress("nOS", &nOS, &b_nOS);

   fChain->SetBranchAddress("mll", mll, &b_mll);

   fChain->SetBranchAddress("mll_fl", mll_fl, &b_mll_fl);

   fChain->SetBranchAddress("mll_i1", mll_i1, &b_mll_i1);

   fChain->SetBranchAddress("mll_i2", mll_i2, &b_mll_i2);

   fChain->SetBranchAddress("nLepSel", &nLepSel, &b_nLepSel);

   fChain->SetBranchAddress("LepSel_pt", LepSel_pt, &b_LepSel_pt);

   fChain->SetBranchAddress("LepSel_eta", LepSel_eta, &b_LepSel_eta);

   fChain->SetBranchAddress("LepSel_phi", LepSel_phi, &b_LepSel_phi);

   fChain->SetBranchAddress("LepSel_mass", LepSel_mass, &b_LepSel_mass);

   fChain->SetBranchAddress("LepSel_conePt", LepSel_conePt, &b_LepSel_conePt);

   fChain->SetBranchAddress("LepSel_dxy", LepSel_dxy, &b_LepSel_dxy);

   fChain->SetBranchAddress("LepSel_dz", LepSel_dz, &b_LepSel_dz);

   fChain->SetBranchAddress("LepSel_sip3d", LepSel_sip3d, &b_LepSel_sip3d);

   fChain->SetBranchAddress("LepSel_miniRelIso", LepSel_miniRelIso, &b_LepSel_miniRelIso);

   fChain->SetBranchAddress("LepSel_relIso", LepSel_relIso, &b_LepSel_relIso);

   fChain->SetBranchAddress("LepSel_ptratio", LepSel_ptratio, &b_LepSel_ptratio);

   fChain->SetBranchAddress("LepSel_ptrel", LepSel_ptrel, &b_LepSel_ptrel);

   fChain->SetBranchAddress("LepSel_mva", LepSel_mva, &b_LepSel_mva);

   fChain->SetBranchAddress("LepSel_pterr", LepSel_pterr, &b_LepSel_pterr);

   fChain->SetBranchAddress("LepSel_pdgId", LepSel_pdgId, &b_LepSel_pdgId);

   fChain->SetBranchAddress("LepSel_isTight", LepSel_isTight, &b_LepSel_isTight);

   fChain->SetBranchAddress("LepSel_tightCharge", LepSel_tightCharge, &b_LepSel_tightCharge);

   fChain->SetBranchAddress("LepSel_mcMatchId", LepSel_mcMatchId, &b_LepSel_mcMatchId);

   fChain->SetBranchAddress("LepSel_mcMatchAny", LepSel_mcMatchAny, &b_LepSel_mcMatchAny);

   fChain->SetBranchAddress("LepSel_mcPromptGamma", LepSel_mcPromptGamma, &b_LepSel_mcPromptGamma);

   fChain->SetBranchAddress("LepSel_mcUCSX", LepSel_mcUCSX, &b_LepSel_mcUCSX);

   fChain->SetBranchAddress("LepSel_trIdx", LepSel_trIdx, &b_LepSel_trIdx);

   fChain->SetBranchAddress("imT_3l", &imT_3l, &b_imT_3l);

   fChain->SetBranchAddress("imTL_3l", &imTL_3l, &b_imTL_3l);

   fChain->SetBranchAddress("imTT_3l", &imTT_3l, &b_imTT_3l);

   fChain->SetBranchAddress("mT_3l", &mT_3l, &b_mT_3l);

   fChain->SetBranchAddress("mTL_3l", &mTL_3l, &b_mTL_3l);

   fChain->SetBranchAddress("mTT_3l", &mTT_3l, &b_mTT_3l);

   fChain->SetBranchAddress("mT2L_3l", &mT2L_3l, &b_mT2L_3l);

   fChain->SetBranchAddress("mT2T_3l", &mT2T_3l, &b_mT2T_3l);

   fChain->SetBranchAddress("imT_4l", &imT_4l, &b_imT_4l);

   fChain->SetBranchAddress("imTL_4l", &imTL_4l, &b_imTL_4l);

   fChain->SetBranchAddress("imTT_4l", &imTT_4l, &b_imTT_4l);

   fChain->SetBranchAddress("mT_4l", &mT_4l, &b_mT_4l);

   fChain->SetBranchAddress("mTL_4l", &mTL_4l, &b_mTL_4l);

   fChain->SetBranchAddress("mTT_4l", &mTT_4l, &b_mTT_4l);

   fChain->SetBranchAddress("mT2L_4l", &mT2L_4l, &b_mT2L_4l);

   fChain->SetBranchAddress("mT2T_4l", &mT2T_4l, &b_mT2T_4l);

   fChain->SetBranchAddress("imT_3l_gen", &imT_3l_gen, &b_imT_3l_gen);

   fChain->SetBranchAddress("imTL_3l_gen", &imTL_3l_gen, &b_imTL_3l_gen);

   fChain->SetBranchAddress("imTT_3l_gen", &imTT_3l_gen, &b_imTT_3l_gen);

   fChain->SetBranchAddress("mT_3l_gen", &mT_3l_gen, &b_mT_3l_gen);

   fChain->SetBranchAddress("mTL_3l_gen", &mTL_3l_gen, &b_mTL_3l_gen);

   fChain->SetBranchAddress("mTT_3l_gen", &mTT_3l_gen, &b_mTT_3l_gen);

   fChain->SetBranchAddress("mT2L_3l_gen", &mT2L_3l_gen, &b_mT2L_3l_gen);

   fChain->SetBranchAddress("mT2T_3l_gen", &mT2T_3l_gen, &b_mT2T_3l_gen);

   fChain->SetBranchAddress("imT_4l_gen", &imT_4l_gen, &b_imT_4l_gen);

   fChain->SetBranchAddress("imTL_4l_gen", &imTL_4l_gen, &b_imTL_4l_gen);

   fChain->SetBranchAddress("imTT_4l_gen", &imTT_4l_gen, &b_imTT_4l_gen);

   fChain->SetBranchAddress("mT_4l_gen", &mT_4l_gen, &b_mT_4l_gen);

   fChain->SetBranchAddress("mTL_4l_gen", &mTL_4l_gen, &b_mTL_4l_gen);

   fChain->SetBranchAddress("mTT_4l_gen", &mTT_4l_gen, &b_mTT_4l_gen);

   fChain->SetBranchAddress("mT2L_4l_gen", &mT2L_4l_gen, &b_mT2L_4l_gen);

   fChain->SetBranchAddress("mT2T_4l_gen", &mT2T_4l_gen, &b_mT2T_4l_gen);

   fChain->SetBranchAddress("imT_3l_jecUp", &imT_3l_jecUp, &b_imT_3l_jecUp);

   fChain->SetBranchAddress("imTL_3l_jecUp", &imTL_3l_jecUp, &b_imTL_3l_jecUp);

   fChain->SetBranchAddress("imTT_3l_jecUp", &imTT_3l_jecUp, &b_imTT_3l_jecUp);

   fChain->SetBranchAddress("mT_3l_jecUp", &mT_3l_jecUp, &b_mT_3l_jecUp);

   fChain->SetBranchAddress("mTL_3l_jecUp", &mTL_3l_jecUp, &b_mTL_3l_jecUp);

   fChain->SetBranchAddress("mTT_3l_jecUp", &mTT_3l_jecUp, &b_mTT_3l_jecUp);

   fChain->SetBranchAddress("mT2L_3l_jecUp", &mT2L_3l_jecUp, &b_mT2L_3l_jecUp);

   fChain->SetBranchAddress("mT2T_3l_jecUp", &mT2T_3l_jecUp, &b_mT2T_3l_jecUp);

   fChain->SetBranchAddress("imT_4l_jecUp", &imT_4l_jecUp, &b_imT_4l_jecUp);

   fChain->SetBranchAddress("imTL_4l_jecUp", &imTL_4l_jecUp, &b_imTL_4l_jecUp);

   fChain->SetBranchAddress("imTT_4l_jecUp", &imTT_4l_jecUp, &b_imTT_4l_jecUp);

   fChain->SetBranchAddress("mT_4l_jecUp", &mT_4l_jecUp, &b_mT_4l_jecUp);

   fChain->SetBranchAddress("mTL_4l_jecUp", &mTL_4l_jecUp, &b_mTL_4l_jecUp);

   fChain->SetBranchAddress("mTT_4l_jecUp", &mTT_4l_jecUp, &b_mTT_4l_jecUp);

   fChain->SetBranchAddress("mT2L_4l_jecUp", &mT2L_4l_jecUp, &b_mT2L_4l_jecUp);

   fChain->SetBranchAddress("mT2T_4l_jecUp", &mT2T_4l_jecUp, &b_mT2T_4l_jecUp);

   fChain->SetBranchAddress("imT_3l_gen_jecUp", &imT_3l_gen_jecUp, &b_imT_3l_gen_jecUp);

   fChain->SetBranchAddress("imTL_3l_gen_jecUp", &imTL_3l_gen_jecUp, &b_imTL_3l_gen_jecUp);

   fChain->SetBranchAddress("imTT_3l_gen_jecUp", &imTT_3l_gen_jecUp, &b_imTT_3l_gen_jecUp);

   fChain->SetBranchAddress("mT_3l_gen_jecUp", &mT_3l_gen_jecUp, &b_mT_3l_gen_jecUp);

   fChain->SetBranchAddress("mTL_3l_gen_jecUp", &mTL_3l_gen_jecUp, &b_mTL_3l_gen_jecUp);

   fChain->SetBranchAddress("mTT_3l_gen_jecUp", &mTT_3l_gen_jecUp, &b_mTT_3l_gen_jecUp);

   fChain->SetBranchAddress("mT2L_3l_gen_jecUp", &mT2L_3l_gen_jecUp, &b_mT2L_3l_gen_jecUp);

   fChain->SetBranchAddress("mT2T_3l_gen_jecUp", &mT2T_3l_gen_jecUp, &b_mT2T_3l_gen_jecUp);

   fChain->SetBranchAddress("imT_4l_gen_jecUp", &imT_4l_gen_jecUp, &b_imT_4l_gen_jecUp);

   fChain->SetBranchAddress("imTL_4l_gen_jecUp", &imTL_4l_gen_jecUp, &b_imTL_4l_gen_jecUp);

   fChain->SetBranchAddress("imTT_4l_gen_jecUp", &imTT_4l_gen_jecUp, &b_imTT_4l_gen_jecUp);

   fChain->SetBranchAddress("mT_4l_gen_jecUp", &mT_4l_gen_jecUp, &b_mT_4l_gen_jecUp);

   fChain->SetBranchAddress("mTL_4l_gen_jecUp", &mTL_4l_gen_jecUp, &b_mTL_4l_gen_jecUp);

   fChain->SetBranchAddress("mTT_4l_gen_jecUp", &mTT_4l_gen_jecUp, &b_mTT_4l_gen_jecUp);

   fChain->SetBranchAddress("mT2L_4l_gen_jecUp", &mT2L_4l_gen_jecUp, &b_mT2L_4l_gen_jecUp);

   fChain->SetBranchAddress("mT2T_4l_gen_jecUp", &mT2T_4l_gen_jecUp, &b_mT2T_4l_gen_jecUp);

   fChain->SetBranchAddress("imT_3l_jecDown", &imT_3l_jecDown, &b_imT_3l_jecDown);

   fChain->SetBranchAddress("imTL_3l_jecDown", &imTL_3l_jecDown, &b_imTL_3l_jecDown);

   fChain->SetBranchAddress("imTT_3l_jecDown", &imTT_3l_jecDown, &b_imTT_3l_jecDown);

   fChain->SetBranchAddress("mT_3l_jecDown", &mT_3l_jecDown, &b_mT_3l_jecDown);

   fChain->SetBranchAddress("mTL_3l_jecDown", &mTL_3l_jecDown, &b_mTL_3l_jecDown);

   fChain->SetBranchAddress("mTT_3l_jecDown", &mTT_3l_jecDown, &b_mTT_3l_jecDown);

   fChain->SetBranchAddress("mT2L_3l_jecDown", &mT2L_3l_jecDown, &b_mT2L_3l_jecDown);

   fChain->SetBranchAddress("mT2T_3l_jecDown", &mT2T_3l_jecDown, &b_mT2T_3l_jecDown);

   fChain->SetBranchAddress("imT_4l_jecDown", &imT_4l_jecDown, &b_imT_4l_jecDown);

   fChain->SetBranchAddress("imTL_4l_jecDown", &imTL_4l_jecDown, &b_imTL_4l_jecDown);

   fChain->SetBranchAddress("imTT_4l_jecDown", &imTT_4l_jecDown, &b_imTT_4l_jecDown);

   fChain->SetBranchAddress("mT_4l_jecDown", &mT_4l_jecDown, &b_mT_4l_jecDown);

   fChain->SetBranchAddress("mTL_4l_jecDown", &mTL_4l_jecDown, &b_mTL_4l_jecDown);

   fChain->SetBranchAddress("mTT_4l_jecDown", &mTT_4l_jecDown, &b_mTT_4l_jecDown);

   fChain->SetBranchAddress("mT2L_4l_jecDown", &mT2L_4l_jecDown, &b_mT2L_4l_jecDown);

   fChain->SetBranchAddress("mT2T_4l_jecDown", &mT2T_4l_jecDown, &b_mT2T_4l_jecDown);

   fChain->SetBranchAddress("imT_3l_gen_jecDown", &imT_3l_gen_jecDown, &b_imT_3l_gen_jecDown);

   fChain->SetBranchAddress("imTL_3l_gen_jecDown", &imTL_3l_gen_jecDown, &b_imTL_3l_gen_jecDown);

   fChain->SetBranchAddress("imTT_3l_gen_jecDown", &imTT_3l_gen_jecDown, &b_imTT_3l_gen_jecDown);

   fChain->SetBranchAddress("mT_3l_gen_jecDown", &mT_3l_gen_jecDown, &b_mT_3l_gen_jecDown);

   fChain->SetBranchAddress("mTL_3l_gen_jecDown", &mTL_3l_gen_jecDown, &b_mTL_3l_gen_jecDown);

   fChain->SetBranchAddress("mTT_3l_gen_jecDown", &mTT_3l_gen_jecDown, &b_mTT_3l_gen_jecDown);

   fChain->SetBranchAddress("mT2L_3l_gen_jecDown", &mT2L_3l_gen_jecDown, &b_mT2L_3l_gen_jecDown);

   fChain->SetBranchAddress("mT2T_3l_gen_jecDown", &mT2T_3l_gen_jecDown, &b_mT2T_3l_gen_jecDown);

   fChain->SetBranchAddress("imT_4l_gen_jecDown", &imT_4l_gen_jecDown, &b_imT_4l_gen_jecDown);

   fChain->SetBranchAddress("imTL_4l_gen_jecDown", &imTL_4l_gen_jecDown, &b_imTL_4l_gen_jecDown);

   fChain->SetBranchAddress("imTT_4l_gen_jecDown", &imTT_4l_gen_jecDown, &b_imTT_4l_gen_jecDown);

   fChain->SetBranchAddress("mT_4l_gen_jecDown", &mT_4l_gen_jecDown, &b_mT_4l_gen_jecDown);

   fChain->SetBranchAddress("mTL_4l_gen_jecDown", &mTL_4l_gen_jecDown, &b_mTL_4l_gen_jecDown);

   fChain->SetBranchAddress("mTT_4l_gen_jecDown", &mTT_4l_gen_jecDown, &b_mTT_4l_gen_jecDown);

   fChain->SetBranchAddress("mT2L_4l_gen_jecDown", &mT2L_4l_gen_jecDown, &b_mT2L_4l_gen_jecDown);

   fChain->SetBranchAddress("mT2T_4l_gen_jecDown", &mT2T_4l_gen_jecDown, &b_mT2T_4l_gen_jecDown);

   

}

ClassReadData::ClassReadData(TTree *tree)
{
	Init(tree);
}