#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
using namespace std;

class ClassReadSig {

public :

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   Int_t           fCurrent; //!current Tree number in a TChain



// Fixed size dimensions of array or collections stored in the TTree if any.



   // Declaration of leaf types

   UInt_t          run;

   UInt_t          lumi;

   ULong64_t       evt;

   Int_t           isData;

   Float_t         xsec;

   Float_t         puWeight;

   Float_t         nTrueInt;

   Float_t         genWeight;

   Float_t         rho;

   Float_t         rhoCN;

   Int_t           nVert;

   Int_t           nJet25;

   Int_t           nJet25a;

   Int_t           nBJetLoose25;

   Int_t           nBJetMedium25;

   Int_t           nBJetTight25;

   Int_t           nJet30;

   Int_t           nJet30a;

   Int_t           nBJetLoose30;

   Int_t           nBJetMedium30;

   Int_t           nBJetTight30;

   Int_t           nJet40;

   Int_t           nJet40a;

   Int_t           nBJetLoose40;

   Int_t           nBJetMedium40;

   Int_t           nBJetTight40;

   Int_t           nLepGood20;

   Int_t           nLepGood15;

   Int_t           nLepGood10;

   Int_t           GenSusyMScan1;

   Int_t           GenSusyMScan2;

   Int_t           GenSusyMScan3;

   Int_t           GenSusyMScan4;

   Int_t           GenSusyMGluino;

   Int_t           GenSusyMGravitino;

   Int_t           GenSusyMStop;

   Int_t           GenSusyMSbottom;

   Int_t           GenSusyMStop2;

   Int_t           GenSusyMSbottom2;

   Int_t           GenSusyMSquark;

   Int_t           GenSusyMNeutralino;

   Int_t           GenSusyMNeutralino2;

   Int_t           GenSusyMNeutralino3;

   Int_t           GenSusyMNeutralino4;

   Int_t           GenSusyMChargino;

   Int_t           GenSusyMChargino2;

   Float_t         lheHT;

   Float_t         lheHTIncoming;

   Float_t         htJet25;

   Float_t         mhtJet25;

   Float_t         htJet40j;

   Float_t         htJet40ja;

   Float_t         htJet40;

   Float_t         htJet40a;

   Float_t         mhtJet40;

   Float_t         mhtJet40a;

   Int_t           nJet25NoTau;

   Int_t           nBJetLoose25NoTau;

   Int_t           nBJetMedium25NoTau;

   Int_t           nBJetCMVALoose25;

   Int_t           nBJetCMVAMedium25;

   Int_t           nBJetCMVATight25;

   Int_t           nSoftBLoose25;

   Int_t           nSoftBMedium25;

   Int_t           nSoftBTight25;

   Int_t           nJet30NoTau;

   Int_t           nBJetLoose30NoTau;

   Int_t           nBJetMedium30NoTau;

   Int_t           nJet40NoTau;

   Int_t           nBJetLoose40NoTau;

   Int_t           nBJetMedium40NoTau;

   Int_t           nBJetCMVALoose40;

   Int_t           nBJetCMVAMedium40;

   Int_t           nBJetCMVATight40;

   Float_t         mZ1;

   Float_t         mZ1SFSS;

   Float_t         minMllSFOS;

   Float_t         maxMllSFOS;

   Float_t         minMllAFOS;

   Float_t         maxMllAFOS;

   Float_t         minMllAFSS;

   Float_t         maxMllAFSS;

   Float_t         minMllAFAS;

   Float_t         maxMllAFAS;

   Float_t         m2l;

   Float_t         minDrllAFSS;

   Float_t         maxDrllAFSS;

   Float_t         minDrllAFOS;

   Float_t         maxDrllAFOS;

   Float_t         mZ2;

   Float_t         m3l;

   Float_t         m4l;

   Float_t         pt2l;

   Float_t         pt3l;

   Float_t         pt4l;

   Float_t         ht3l;

   Float_t         ht4l;

   Int_t           q3l;

   Int_t           q4l;

   Int_t           minMWjj;

   Int_t           minMWjjPt;

   Int_t           bestMWjj;

   Int_t           bestMWjjPt;

   Int_t           bestMTopHad;

   Int_t           bestMTopHadPt;

   Int_t           GenHiggsDecayMode;

   Float_t         Flag_badChargedHadronFilter;

   Float_t         Flag_badMuonFilter;

   Int_t           nPFLep5;

   Int_t           nPFHad10;

   Float_t         met_trkPt;

   Float_t         met_trkPhi;

   Int_t           nISR;

   Float_t         met_pt;

   Float_t         met_eta;

   Float_t         met_phi;

   Float_t         met_mass;

   Float_t         met_sumEt;

   Float_t         met_rawPt;

   Float_t         met_rawPhi;

   Float_t         met_rawSumEt;

   Float_t         met_genPt;

   Float_t         met_genPhi;

   Float_t         met_genEta;

   Float_t         met_jecUp_pt;

   Float_t         met_jecUp_eta;

   Float_t         met_jecUp_phi;

   Float_t         met_jecUp_mass;

   Float_t         met_jecUp_sumEt;

   Float_t         met_jecUp_rawPt;

   Float_t         met_jecUp_rawPhi;

   Float_t         met_jecUp_rawSumEt;

   Float_t         met_jecUp_genPt;

   Float_t         met_jecUp_genPhi;

   Float_t         met_jecUp_genEta;

   Float_t         met_jecDown_pt;

   Float_t         met_jecDown_eta;

   Float_t         met_jecDown_phi;

   Float_t         met_jecDown_mass;

   Float_t         met_jecDown_sumEt;

   Float_t         met_jecDown_rawPt;

   Float_t         met_jecDown_rawPhi;

   Float_t         met_jecDown_rawSumEt;

   Float_t         met_jecDown_genPt;

   Float_t         met_jecDown_genPhi;

   Float_t         met_jecDown_genEta;

   Int_t           nSV;

   Float_t         SV_pt[20];   //[nSV]

   Float_t         SV_eta[20];   //[nSV]

   Float_t         SV_phi[20];   //[nSV]

   Float_t         SV_mass[20];   //[nSV]

   Int_t           SV_charge[20];   //[nSV]

   Int_t           SV_ntracks[20];   //[nSV]

   Float_t         SV_chi2[20];   //[nSV]

   Float_t         SV_ndof[20];   //[nSV]

   Float_t         SV_dxy[20];   //[nSV]

   Float_t         SV_edxy[20];   //[nSV]

   Float_t         SV_ip3d[20];   //[nSV]

   Float_t         SV_eip3d[20];   //[nSV]

   Float_t         SV_sip3d[20];   //[nSV]

   Float_t         SV_cosTheta[20];   //[nSV]

   Float_t         SV_mva[20];   //[nSV]

   Float_t         SV_jetPt[20];   //[nSV]

   Float_t         SV_jetEta[20];   //[nSV]

   Float_t         SV_jetDR[20];   //[nSV]

   Float_t         SV_jetBTagCSV[20];   //[nSV]

   Float_t         SV_jetBTagCMVA[20];   //[nSV]

   Int_t           SV_mcMatchNTracks[20];   //[nSV]

   Int_t           SV_mcMatchNTracksHF[20];   //[nSV]

   Float_t         SV_mcMatchFraction[20];   //[nSV]

   Int_t           SV_mcFlavFirst[20];   //[nSV]

   Int_t           SV_mcFlavHeaviest[20];   //[nSV]

   Float_t         SV_maxDxyTracks[20];   //[nSV]

   Float_t         SV_secDxyTracks[20];   //[nSV]

   Float_t         SV_maxD3dTracks[20];   //[nSV]

   Float_t         SV_secD3dTracks[20];   //[nSV]

   Int_t           nLepOther;

   Int_t           LepOther_charge[8];   //[nLepOther]

   Int_t           LepOther_tightId[8];   //[nLepOther]

   Int_t           LepOther_hltId[8];   //[nLepOther]

   Int_t           LepOther_eleCutIdCSA14_25ns_v1[8];   //[nLepOther]

   Int_t           LepOther_eleCutIdCSA14_50ns_v1[8];   //[nLepOther]

   Int_t           LepOther_eleCutIdSpring15_25ns_v1[8];   //[nLepOther]

   Float_t         LepOther_dxy[8];   //[nLepOther]

   Float_t         LepOther_dz[8];   //[nLepOther]

   Float_t         LepOther_edxy[8];   //[nLepOther]

   Float_t         LepOther_edz[8];   //[nLepOther]

   Float_t         LepOther_ip3d[8];   //[nLepOther]

   Float_t         LepOther_sip3d[8];   //[nLepOther]

   Int_t           LepOther_convVeto[8];   //[nLepOther]

   Int_t           LepOther_lostHits[8];   //[nLepOther]

   Float_t         LepOther_relIso03[8];   //[nLepOther]

   Float_t         LepOther_relIso04[8];   //[nLepOther]

   Float_t         LepOther_miniRelIso[8];   //[nLepOther]

   Float_t         LepOther_relIsoAn04[8];   //[nLepOther]

   Int_t           LepOther_tightCharge[8];   //[nLepOther]

   Int_t           LepOther_mcMatchId[8];   //[nLepOther]

   Int_t           LepOther_mcMatchAny[8];   //[nLepOther]

   Int_t           LepOther_mcMatchTau[8];   //[nLepOther]

   Float_t         LepOther_mcPt[8];   //[nLepOther]

   Int_t           LepOther_mediumMuonId[8];   //[nLepOther]

   Int_t           LepOther_ICHEPsoftMuonId[8];   //[nLepOther]

   Int_t           LepOther_ICHEPmediumMuonId[8];   //[nLepOther]

   Int_t           LepOther_pdgId[8];   //[nLepOther]

   Float_t         LepOther_pt[8];   //[nLepOther]

   Float_t         LepOther_eta[8];   //[nLepOther]

   Float_t         LepOther_phi[8];   //[nLepOther]

   Float_t         LepOther_mass[8];   //[nLepOther]

   Float_t         LepOther_mvaIdSpring15[8];   //[nLepOther]

   Float_t         LepOther_mvaTTH[8];   //[nLepOther]

   Float_t         LepOther_mvaSUSY[8];   //[nLepOther]

   Float_t         LepOther_jetPtRatiov1[8];   //[nLepOther]

   Float_t         LepOther_jetPtRelv1[8];   //[nLepOther]

   Float_t         LepOther_jetPtRatiov2[8];   //[nLepOther]

   Float_t         LepOther_jetPtRelv2[8];   //[nLepOther]

   Float_t         LepOther_jetBTagCSV[8];   //[nLepOther]

   Float_t         LepOther_jetBTagCMVA[8];   //[nLepOther]

   Float_t         LepOther_jetDR[8];   //[nLepOther]

   Float_t         LepOther_r9[8];   //[nLepOther]

   Float_t         LepOther_softMuonId2016[8];   //[nLepOther]

   Float_t         LepOther_mediumMuonID2016[8];   //[nLepOther]

   Int_t           LepOther_tightChargeFix[8];   //[nLepOther]

   Int_t           LepOther_muonTrackType[8];   //[nLepOther]

   Int_t           LepOther_chargeConsistency[8];   //[nLepOther]

   Float_t         LepOther_ptErrTk[8];   //[nLepOther]

   Float_t         LepOther_mvaIdSpring16HZZ[8];   //[nLepOther]

   Float_t         LepOther_mvaIdSpring16GP[8];   //[nLepOther]

   Int_t           nDiscLep;

   Int_t           DiscLep_charge[1];   //[nDiscLep]

   Int_t           DiscLep_tightId[1];   //[nDiscLep]

   Int_t           DiscLep_hltId[1];   //[nDiscLep]

   Int_t           DiscLep_eleCutIdCSA14_25ns_v1[1];   //[nDiscLep]

   Int_t           DiscLep_eleCutIdCSA14_50ns_v1[1];   //[nDiscLep]

   Int_t           DiscLep_eleCutIdSpring15_25ns_v1[1];   //[nDiscLep]

   Float_t         DiscLep_dxy[1];   //[nDiscLep]

   Float_t         DiscLep_dz[1];   //[nDiscLep]

   Float_t         DiscLep_edxy[1];   //[nDiscLep]

   Float_t         DiscLep_edz[1];   //[nDiscLep]

   Float_t         DiscLep_ip3d[1];   //[nDiscLep]

   Float_t         DiscLep_sip3d[1];   //[nDiscLep]

   Int_t           DiscLep_convVeto[1];   //[nDiscLep]

   Int_t           DiscLep_lostHits[1];   //[nDiscLep]

   Float_t         DiscLep_relIso03[1];   //[nDiscLep]

   Float_t         DiscLep_relIso04[1];   //[nDiscLep]

   Float_t         DiscLep_miniRelIso[1];   //[nDiscLep]

   Float_t         DiscLep_relIsoAn04[1];   //[nDiscLep]

   Int_t           DiscLep_tightCharge[1];   //[nDiscLep]

   Int_t           DiscLep_mcMatchId[1];   //[nDiscLep]

   Int_t           DiscLep_mcMatchAny[1];   //[nDiscLep]

   Int_t           DiscLep_mcMatchTau[1];   //[nDiscLep]

   Float_t         DiscLep_mcPt[1];   //[nDiscLep]

   Int_t           DiscLep_mediumMuonId[1];   //[nDiscLep]

   Int_t           DiscLep_ICHEPsoftMuonId[1];   //[nDiscLep]

   Int_t           DiscLep_ICHEPmediumMuonId[1];   //[nDiscLep]

   Int_t           DiscLep_pdgId[1];   //[nDiscLep]

   Float_t         DiscLep_pt[1];   //[nDiscLep]

   Float_t         DiscLep_eta[1];   //[nDiscLep]

   Float_t         DiscLep_phi[1];   //[nDiscLep]

   Float_t         DiscLep_mass[1];   //[nDiscLep]

   Float_t         DiscLep_mvaIdSpring15[1];   //[nDiscLep]

   Float_t         DiscLep_mvaTTH[1];   //[nDiscLep]

   Float_t         DiscLep_mvaSUSY[1];   //[nDiscLep]

   Float_t         DiscLep_jetPtRatiov1[1];   //[nDiscLep]

   Float_t         DiscLep_jetPtRelv1[1];   //[nDiscLep]

   Float_t         DiscLep_jetPtRatiov2[1];   //[nDiscLep]

   Float_t         DiscLep_jetPtRelv2[1];   //[nDiscLep]

   Float_t         DiscLep_jetBTagCSV[1];   //[nDiscLep]

   Float_t         DiscLep_jetBTagCMVA[1];   //[nDiscLep]

   Float_t         DiscLep_jetDR[1];   //[nDiscLep]

   Float_t         DiscLep_r9[1];   //[nDiscLep]

   Float_t         DiscLep_softMuonId2016[1];   //[nDiscLep]

   Float_t         DiscLep_mediumMuonID2016[1];   //[nDiscLep]

   Int_t           DiscLep_tightChargeFix[1];   //[nDiscLep]

   Int_t           DiscLep_muonTrackType[1];   //[nDiscLep]

   Int_t           DiscLep_chargeConsistency[1];   //[nDiscLep]

   Float_t         DiscLep_ptErrTk[1];   //[nDiscLep]

   Float_t         DiscLep_mvaIdSpring16HZZ[1];   //[nDiscLep]

   Float_t         DiscLep_mvaIdSpring16GP[1];   //[nDiscLep]

   Int_t           nGenPart;

   Int_t           GenPart_motherId[38];   //[nGenPart]

   Int_t           GenPart_grandmotherId[38];   //[nGenPart]

   Int_t           GenPart_sourceId[38];   //[nGenPart]

   Float_t         GenPart_charge[38];   //[nGenPart]

   Int_t           GenPart_status[38];   //[nGenPart]

   Int_t           GenPart_isPromptHard[38];   //[nGenPart]

   Int_t           GenPart_pdgId[38];   //[nGenPart]

   Float_t         GenPart_pt[38];   //[nGenPart]

   Float_t         GenPart_eta[38];   //[nGenPart]

   Float_t         GenPart_phi[38];   //[nGenPart]

   Float_t         GenPart_mass[38];   //[nGenPart]

   Int_t           GenPart_motherIndex[38];   //[nGenPart]

   Int_t           nDiscJet;

   Float_t         DiscJet_pt[15];   //[nDiscJet]

   Float_t         DiscJet_eta[15];   //[nDiscJet]

   Float_t         DiscJet_phi[15];   //[nDiscJet]

   Float_t         DiscJet_mass[15];   //[nDiscJet]

   Float_t         DiscJet_etaetaMoment[15];   //[nDiscJet]

   Float_t         DiscJet_phiphiMoment[15];   //[nDiscJet]

   Float_t         DiscJet_btagCSV[15];   //[nDiscJet]

   Int_t           DiscJet_mcFlavour[15];   //[nDiscJet]

   Int_t           DiscJet_partonFlavour[15];   //[nDiscJet]

   Int_t           nTauOther;

   Int_t           TauOther_charge[7];   //[nTauOther]

   Int_t           TauOther_decayMode[7];   //[nTauOther]

   Int_t           TauOther_idDecayMode[7];   //[nTauOther]

   Int_t           TauOther_idDecayModeNewDMs[7];   //[nTauOther]

   Float_t         TauOther_dxy[7];   //[nTauOther]

   Float_t         TauOther_dz[7];   //[nTauOther]

   Int_t           TauOther_idMVA[7];   //[nTauOther]

   Int_t           TauOther_idMVANewDM[7];   //[nTauOther]

   Int_t           TauOther_idCI3hit[7];   //[nTauOther]

   Int_t           TauOther_idAntiMu[7];   //[nTauOther]

   Int_t           TauOther_idAntiE[7];   //[nTauOther]

   Float_t         TauOther_isoCI3hit[7];   //[nTauOther]

   Int_t           TauOther_mcMatchId[7];   //[nTauOther]

   Int_t           TauOther_pdgId[7];   //[nTauOther]

   Float_t         TauOther_pt[7];   //[nTauOther]

   Float_t         TauOther_eta[7];   //[nTauOther]

   Float_t         TauOther_phi[7];   //[nTauOther]

   Float_t         TauOther_mass[7];   //[nTauOther]

   Int_t           TauOther_idMVAdR03[7];   //[nTauOther]

   Float_t         TauOther_mcUCSXMatchId[7];   //[nTauOther]

   Int_t           nLepGood;

   Float_t         LepGood_mvaIdSpring15[6];   //[nLepGood]

   Float_t         LepGood_mvaTTH[6];   //[nLepGood]

   Float_t         LepGood_mvaSUSY[6];   //[nLepGood]

   Float_t         LepGood_jetPtRatiov1[6];   //[nLepGood]

   Float_t         LepGood_jetPtRelv1[6];   //[nLepGood]

   Float_t         LepGood_jetPtRatiov2[6];   //[nLepGood]

   Float_t         LepGood_jetPtRelv2[6];   //[nLepGood]

   Float_t         LepGood_jetBTagCSV[6];   //[nLepGood]

   Float_t         LepGood_jetBTagCMVA[6];   //[nLepGood]

   Float_t         LepGood_jetDR[6];   //[nLepGood]

   Float_t         LepGood_r9[6];   //[nLepGood]

   Float_t         LepGood_softMuonId2016[6];   //[nLepGood]

   Float_t         LepGood_mediumMuonID2016[6];   //[nLepGood]

   Int_t           LepGood_tightChargeFix[6];   //[nLepGood]

   Int_t           LepGood_muonTrackType[6];   //[nLepGood]

   Int_t           LepGood_chargeConsistency[6];   //[nLepGood]

   Float_t         LepGood_ptErrTk[6];   //[nLepGood]

   Float_t         LepGood_mvaIdSpring16HZZ[6];   //[nLepGood]

   Float_t         LepGood_mvaIdSpring16GP[6];   //[nLepGood]

   Int_t           LepGood_charge[6];   //[nLepGood]

   Int_t           LepGood_tightId[6];   //[nLepGood]

   Int_t           LepGood_hltId[6];   //[nLepGood]

   Int_t           LepGood_eleCutIdCSA14_25ns_v1[6];   //[nLepGood]

   Int_t           LepGood_eleCutIdCSA14_50ns_v1[6];   //[nLepGood]

   Int_t           LepGood_eleCutIdSpring15_25ns_v1[6];   //[nLepGood]

   Float_t         LepGood_dxy[6];   //[nLepGood]

   Float_t         LepGood_dz[6];   //[nLepGood]

   Float_t         LepGood_edxy[6];   //[nLepGood]

   Float_t         LepGood_edz[6];   //[nLepGood]

   Float_t         LepGood_ip3d[6];   //[nLepGood]

   Float_t         LepGood_sip3d[6];   //[nLepGood]

   Int_t           LepGood_convVeto[6];   //[nLepGood]

   Int_t           LepGood_lostHits[6];   //[nLepGood]

   Float_t         LepGood_relIso03[6];   //[nLepGood]

   Float_t         LepGood_relIso04[6];   //[nLepGood]

   Float_t         LepGood_miniRelIso[6];   //[nLepGood]

   Float_t         LepGood_relIsoAn04[6];   //[nLepGood]

   Int_t           LepGood_tightCharge[6];   //[nLepGood]

   Int_t           LepGood_mcMatchId[6];   //[nLepGood]

   Int_t           LepGood_mcMatchAny[6];   //[nLepGood]

   Int_t           LepGood_mcMatchTau[6];   //[nLepGood]

   Float_t         LepGood_mcPt[6];   //[nLepGood]

   Int_t           LepGood_mediumMuonId[6];   //[nLepGood]

   Int_t           LepGood_ICHEPsoftMuonId[6];   //[nLepGood]

   Int_t           LepGood_ICHEPmediumMuonId[6];   //[nLepGood]

   Int_t           LepGood_pdgId[6];   //[nLepGood]

   Float_t         LepGood_pt[6];   //[nLepGood]

   Float_t         LepGood_eta[6];   //[nLepGood]

   Float_t         LepGood_phi[6];   //[nLepGood]

   Float_t         LepGood_mass[6];   //[nLepGood]

   Int_t           LepGood_looseIdOnly[6];   //[nLepGood]

   Float_t         LepGood_chargedHadRelIso03[6];   //[nLepGood]

   Float_t         LepGood_chargedHadRelIso04[6];   //[nLepGood]

   Int_t           LepGood_softMuonId[6];   //[nLepGood]

   Int_t           LepGood_pfMuonId[6];   //[nLepGood]

   Int_t           LepGood_eleCutId2012[6];   //[nLepGood]

   Int_t           LepGood_trackerLayers[6];   //[nLepGood]

   Int_t           LepGood_pixelLayers[6];   //[nLepGood]

   Int_t           LepGood_trackerHits[6];   //[nLepGood]

   Int_t           LepGood_lostOuterHits[6];   //[nLepGood]

   Float_t         LepGood_innerTrackValidHitFraction[6];   //[nLepGood]

   Float_t         LepGood_innerTrackChi2[6];   //[nLepGood]

   Float_t         LepGood_nStations[6];   //[nLepGood]

   Float_t         LepGood_caloCompatibility[6];   //[nLepGood]

   Float_t         LepGood_globalTrackChi2[6];   //[nLepGood]

   Float_t         LepGood_trkKink[6];   //[nLepGood]

   Float_t         LepGood_segmentCompatibility[6];   //[nLepGood]

   Float_t         LepGood_chi2LocalPosition[6];   //[nLepGood]

   Float_t         LepGood_chi2LocalMomentum[6];   //[nLepGood]

   Float_t         LepGood_glbTrackProbability[6];   //[nLepGood]

   Int_t           LepGood_TMOneStationTightMuonId[6];   //[nLepGood]

   Int_t           LepGood_trackHighPurityMuon[6];   //[nLepGood]

   Int_t           LepGood_isGlobalMuon[6];   //[nLepGood]

   Int_t           LepGood_isTrackerMuon[6];   //[nLepGood]

   Float_t         LepGood_sigmaIEtaIEta[6];   //[nLepGood]

   Float_t         LepGood_dEtaScTrkIn[6];   //[nLepGood]

   Float_t         LepGood_dPhiScTrkIn[6];   //[nLepGood]

   Float_t         LepGood_hadronicOverEm[6];   //[nLepGood]

   Float_t         LepGood_eInvMinusPInv[6];   //[nLepGood]

   Float_t         LepGood_eInvMinusPInv_tkMom[6];   //[nLepGood]

   Float_t         LepGood_etaSc[6];   //[nLepGood]

   Int_t           LepGood_mcMatchPdgId[6];   //[nLepGood]

   Float_t         LepGood_miniRelIsoCharged[6];   //[nLepGood]

   Float_t         LepGood_miniRelIsoNeutral[6];   //[nLepGood]

   Float_t         LepGood_jetNDauChargedMVASel[6];   //[nLepGood]

   Float_t         LepGood_jetCorrFactor_L1[6];   //[nLepGood]

   Float_t         LepGood_jetCorrFactor_L1L2[6];   //[nLepGood]

   Float_t         LepGood_jetCorrFactor_L1L2L3[6];   //[nLepGood]

   Float_t         LepGood_jetCorrFactor_L1L2L3Res[6];   //[nLepGood]

   Float_t         LepGood_ecalPFClusterIso[6];   //[nLepGood]

   Float_t         LepGood_hcalPFClusterIso[6];   //[nLepGood]

   Float_t         LepGood_dr03TkSumPt[6];   //[nLepGood]

   Float_t         LepGood_trackIso[6];   //[nLepGood]

   Float_t         LepGood_idEmuTTH[6];   //[nLepGood]

   Float_t         LepGood_idEmuRA5[6];   //[nLepGood]

   Float_t         LepGood_idIsoEmuRA5[6];   //[nLepGood]

   Int_t           LepGood_mcPrompt[6];   //[nLepGood]

   Int_t           LepGood_mcPromptTau[6];   //[nLepGood]

   Int_t           LepGood_mcPromptGamma[6];   //[nLepGood]

   Int_t           LepGood_mcGamma[6];   //[nLepGood]

   Float_t         LepGood_RelIsoMIV03[6];   //[nLepGood]

   Float_t         LepGood_RelIsoMIVCharged03[6];   //[nLepGood]

   Float_t         LepGood_RelIsoMIVNeutral03[6];   //[nLepGood]

   Float_t         LepGood_RelIsoMIV04[6];   //[nLepGood]

   Float_t         LepGood_RelIsoMIVCharged04[6];   //[nLepGood]

   Float_t         LepGood_RelIsoMIVNeutral04[6];   //[nLepGood]

   Float_t         LepGood_jetPtRelHv2[6];   //[nLepGood]

   Float_t         LepGood_isoRelH04[6];   //[nLepGood]

   Float_t         LepGood_jetBasedRelIsoCharged[6];   //[nLepGood]

   Int_t           LepGood_hasSV[6];   //[nLepGood]

   Float_t         LepGood_svSip3d[6];   //[nLepGood]

   Float_t         LepGood_svRedPt[6];   //[nLepGood]

   Float_t         LepGood_svMass[6];   //[nLepGood]

   Float_t         LepGood_svNTracks[6];   //[nLepGood]

   Float_t         LepGood_energySc[6];   //[nLepGood]

   Float_t         LepGood_mcUCSXMatchId[6];   //[nLepGood]

   Float_t         LepGood_jetLepAwareJEC_pt[6];   //[nLepGood]

   Float_t         LepGood_jetLepAwareJEC_eta[6];   //[nLepGood]

   Float_t         LepGood_jetLepAwareJEC_phi[6];   //[nLepGood]

   Float_t         LepGood_jetLepAwareJEC_energy[6];   //[nLepGood]

   Int_t           nJet;

   Int_t           Jet_mcMatchFlav[15];   //[nJet]

   Float_t         Jet_charge[15];   //[nJet]

   Float_t         Jet_ctagCsvL[15];   //[nJet]

   Float_t         Jet_ctagCsvB[15];   //[nJet]

   Float_t         Jet_area[15];   //[nJet]

   Float_t         Jet_qgl[15];   //[nJet]

   Float_t         Jet_ptd[15];   //[nJet]

   Float_t         Jet_axis2[15];   //[nJet]

   Int_t           Jet_mult[15];   //[nJet]

   Int_t           Jet_partonId[15];   //[nJet]

   Int_t           Jet_partonMotherId[15];   //[nJet]

   Float_t         Jet_nLeptons[15];   //[nJet]

   Int_t           Jet_id[15];   //[nJet]

   Int_t           Jet_puId[15];   //[nJet]

   Float_t         Jet_btagCSV[15];   //[nJet]

   Float_t         Jet_btagCMVA[15];   //[nJet]

   Float_t         Jet_rawPt[15];   //[nJet]

   Float_t         Jet_mcPt[15];   //[nJet]

   Int_t           Jet_mcFlavour[15];   //[nJet]

   Int_t           Jet_partonFlavour[15];   //[nJet]

   Int_t           Jet_hadronFlavour[15];   //[nJet]

   Int_t           Jet_mcMatchId[15];   //[nJet]

   Float_t         Jet_corr_JECUp[15];   //[nJet]

   Float_t         Jet_corr_JECDown[15];   //[nJet]

   Float_t         Jet_corr[15];   //[nJet]

   Float_t         Jet_corr_JERUp[15];   //[nJet]

   Float_t         Jet_corr_JERDown[15];   //[nJet]

   Float_t         Jet_corr_JER[15];   //[nJet]

   Float_t         Jet_pt[15];   //[nJet]

   Float_t         Jet_eta[15];   //[nJet]

   Float_t         Jet_phi[15];   //[nJet]

   Float_t         Jet_mass[15];   //[nJet]

   Float_t         Jet_CorrFactor_L1[15];   //[nJet]

   Float_t         Jet_CorrFactor_L1L2[15];   //[nJet]

   Float_t         Jet_CorrFactor_L1L2L3[15];   //[nJet]

   Float_t         Jet_CorrFactor_L1L2L3Res[15];   //[nJet]

   Float_t         Jet_chHEF[15];   //[nJet]

   Float_t         Jet_neHEF[15];   //[nJet]

   Int_t           ngenLep;

   Int_t           genLep_motherId[10];   //[ngenLep]

   Int_t           genLep_grandmotherId[10];   //[ngenLep]

   Int_t           genLep_sourceId[10];   //[ngenLep]

   Float_t         genLep_charge[10];   //[ngenLep]

   Int_t           genLep_status[10];   //[ngenLep]

   Int_t           genLep_isPromptHard[10];   //[ngenLep]

   Int_t           genLep_pdgId[10];   //[ngenLep]

   Float_t         genLep_pt[10];   //[ngenLep]

   Float_t         genLep_eta[10];   //[ngenLep]

   Float_t         genLep_phi[10];   //[ngenLep]

   Float_t         genLep_mass[10];   //[ngenLep]

   Int_t           genLep_motherIndex[10];   //[ngenLep]

   Int_t           nLHEweight;

   Int_t           LHEweight_id[9];   //[nLHEweight]

   Float_t         LHEweight_wgt[9];   //[nLHEweight]

   Int_t           nTauGood;

   Int_t           TauGood_charge[8];   //[nTauGood]

   Int_t           TauGood_decayMode[8];   //[nTauGood]

   Int_t           TauGood_idDecayMode[8];   //[nTauGood]

   Int_t           TauGood_idDecayModeNewDMs[8];   //[nTauGood]

   Float_t         TauGood_dxy[8];   //[nTauGood]

   Float_t         TauGood_dz[8];   //[nTauGood]

   Int_t           TauGood_idMVA[8];   //[nTauGood]

   Int_t           TauGood_idMVANewDM[8];   //[nTauGood]

   Int_t           TauGood_idCI3hit[8];   //[nTauGood]

   Int_t           TauGood_idAntiMu[8];   //[nTauGood]

   Int_t           TauGood_idAntiE[8];   //[nTauGood]

   Float_t         TauGood_isoCI3hit[8];   //[nTauGood]

   Int_t           TauGood_mcMatchId[8];   //[nTauGood]

   Int_t           TauGood_pdgId[8];   //[nTauGood]

   Float_t         TauGood_pt[8];   //[nTauGood]

   Float_t         TauGood_eta[8];   //[nTauGood]

   Float_t         TauGood_phi[8];   //[nTauGood]

   Float_t         TauGood_mass[8];   //[nTauGood]

   Int_t           TauGood_idMVAdR03[8];   //[nTauGood]

   Float_t         TauGood_mcUCSXMatchId[8];   //[nTauGood]

   Int_t           ngenTau;

   Int_t           genTau_motherId[3];   //[ngenTau]

   Int_t           genTau_grandmotherId[3];   //[ngenTau]

   Int_t           genTau_sourceId[3];   //[ngenTau]

   Float_t         genTau_charge[3];   //[ngenTau]

   Int_t           genTau_status[3];   //[ngenTau]

   Int_t           genTau_isPromptHard[3];   //[ngenTau]

   Int_t           genTau_pdgId[3];   //[ngenTau]

   Float_t         genTau_pt[3];   //[ngenTau]

   Float_t         genTau_eta[3];   //[ngenTau]

   Float_t         genTau_phi[3];   //[ngenTau]

   Float_t         genTau_mass[3];   //[ngenTau]

   Int_t           genTau_motherIndex[3];   //[ngenTau]

   Int_t           nGenTop;

   Int_t           GenTop_pdgId[1];   //[nGenTop]

   Float_t         GenTop_pt[1];   //[nGenTop]

   Float_t         GenTop_eta[1];   //[nGenTop]

   Float_t         GenTop_phi[1];   //[nGenTop]

   Float_t         GenTop_mass[1];   //[nGenTop]

   Float_t         GenTop_charge[1];   //[nGenTop]

   Int_t           GenTop_status[1];   //[nGenTop]

   Int_t           GenTop_isPromptHard[1];   //[nGenTop]

   Int_t           nisoTrack;

   Int_t           isoTrack_pdgId[9];   //[nisoTrack]

   Float_t         isoTrack_pt[9];   //[nisoTrack]

   Float_t         isoTrack_eta[9];   //[nisoTrack]

   Float_t         isoTrack_phi[9];   //[nisoTrack]

   Float_t         isoTrack_mass[9];   //[nisoTrack]

   Int_t           isoTrack_charge[9];   //[nisoTrack]

   Float_t         isoTrack_dz[9];   //[nisoTrack]

   Float_t         isoTrack_absIso[9];   //[nisoTrack]

   Float_t         isoTrack_relIsoAn04[9];   //[nisoTrack]

   Int_t           isoTrack_mcMatchId[9];   //[nisoTrack]

   Int_t           ngenLepFromTau;

   Int_t           genLepFromTau_motherId[7];   //[ngenLepFromTau]

   Int_t           genLepFromTau_grandmotherId[7];   //[ngenLepFromTau]

   Int_t           genLepFromTau_sourceId[7];   //[ngenLepFromTau]

   Float_t         genLepFromTau_charge[7];   //[ngenLepFromTau]

   Int_t           genLepFromTau_status[7];   //[ngenLepFromTau]

   Int_t           genLepFromTau_isPromptHard[7];   //[ngenLepFromTau]

   Int_t           genLepFromTau_pdgId[7];   //[ngenLepFromTau]

   Float_t         genLepFromTau_pt[7];   //[ngenLepFromTau]

   Float_t         genLepFromTau_eta[7];   //[ngenLepFromTau]

   Float_t         genLepFromTau_phi[7];   //[ngenLepFromTau]

   Float_t         genLepFromTau_mass[7];   //[ngenLepFromTau]

   Int_t           genLepFromTau_motherIndex[7];   //[ngenLepFromTau]

   Int_t           nJetFwd;

   Float_t         JetFwd_area[1];   //[nJetFwd]

   Float_t         JetFwd_qgl[1];   //[nJetFwd]

   Float_t         JetFwd_ptd[1];   //[nJetFwd]

   Float_t         JetFwd_axis2[1];   //[nJetFwd]

   Int_t           JetFwd_mult[1];   //[nJetFwd]

   Int_t           JetFwd_partonId[1];   //[nJetFwd]

   Int_t           JetFwd_partonMotherId[1];   //[nJetFwd]

   Float_t         JetFwd_nLeptons[1];   //[nJetFwd]

   Int_t           JetFwd_id[1];   //[nJetFwd]

   Int_t           JetFwd_puId[1];   //[nJetFwd]

   Float_t         JetFwd_btagCSV[1];   //[nJetFwd]

   Float_t         JetFwd_btagCMVA[1];   //[nJetFwd]

   Float_t         JetFwd_rawPt[1];   //[nJetFwd]

   Float_t         JetFwd_mcPt[1];   //[nJetFwd]

   Int_t           JetFwd_mcFlavour[1];   //[nJetFwd]

   Int_t           JetFwd_partonFlavour[1];   //[nJetFwd]

   Int_t           JetFwd_hadronFlavour[1];   //[nJetFwd]

   Int_t           JetFwd_mcMatchId[1];   //[nJetFwd]

   Float_t         JetFwd_corr_JECUp[1];   //[nJetFwd]

   Float_t         JetFwd_corr_JECDown[1];   //[nJetFwd]

   Float_t         JetFwd_corr[1];   //[nJetFwd]

   Float_t         JetFwd_corr_JERUp[1];   //[nJetFwd]

   Float_t         JetFwd_corr_JERDown[1];   //[nJetFwd]

   Float_t         JetFwd_corr_JER[1];   //[nJetFwd]

   Float_t         JetFwd_pt[1];   //[nJetFwd]

   Float_t         JetFwd_eta[1];   //[nJetFwd]

   Float_t         JetFwd_phi[1];   //[nJetFwd]

   Float_t         JetFwd_mass[1];   //[nJetFwd]

   Int_t           JetFwd_mcMatchFlav[1];   //[nJetFwd]

   Float_t         JetFwd_charge[1];   //[nJetFwd]

   Float_t         JetFwd_ctagCsvL[1];   //[nJetFwd]

   Float_t         JetFwd_ctagCsvB[1];   //[nJetFwd]

   Int_t           nPhoGood;

   Float_t         PhoGood_etaSc[4];   //[nPhoGood]

   Int_t           PhoGood_idCutBased[4];   //[nPhoGood]

   Float_t         PhoGood_hOverE[4];   //[nPhoGood]

   Float_t         PhoGood_r9[4];   //[nPhoGood]

   Float_t         PhoGood_sigmaIetaIeta[4];   //[nPhoGood]

   Float_t         PhoGood_chHadIso04[4];   //[nPhoGood]

   Float_t         PhoGood_chHadIso[4];   //[nPhoGood]

   Float_t         PhoGood_phIso[4];   //[nPhoGood]

   Float_t         PhoGood_neuHadIso[4];   //[nPhoGood]

   Float_t         PhoGood_relIso[4];   //[nPhoGood]

   Int_t           PhoGood_mcMatchId[4];   //[nPhoGood]

   Float_t         PhoGood_mcPt[4];   //[nPhoGood]

   Int_t           PhoGood_pdgId[4];   //[nPhoGood]

   Float_t         PhoGood_pt[4];   //[nPhoGood]

   Float_t         PhoGood_eta[4];   //[nPhoGood]

   Float_t         PhoGood_phi[4];   //[nPhoGood]

   Float_t         PhoGood_mass[4];   //[nPhoGood]

   Float_t         PhoGood_genIso04[4];   //[nPhoGood]

   Float_t         PhoGood_genIso03[4];   //[nPhoGood]

   Float_t         PhoGood_chHadIsoRC04[4];   //[nPhoGood]

   Float_t         PhoGood_chHadIsoRC[4];   //[nPhoGood]

   Float_t         PhoGood_drMinParton[4];   //[nPhoGood]

    //Friend Tree Version-1
    //

  // Int_t           nLepGood;
   Float_t         LepGood_conePt[5];   //[nLepGood]
   Int_t           nLepLoose_Mini;
   Int_t           iL_Mini[20];
   Int_t           nLepLooseVeto_Mini;
   Int_t           iLV_Mini[20];
   Int_t           nLepCleaning_Mini;
   Int_t           iC_Mini[20];
   Int_t           nLepCleaningVeto_Mini;
   Int_t           iCV_Mini[20];
   Int_t           nLepFO_Mini;
   Int_t           iF_Mini[20];
   Int_t           nLepFOVeto_Mini;
   Int_t           iFV_Mini[20];
   Int_t           nLepTight_Mini;
   Int_t           iT_Mini[20];
   Int_t           nLepTightVeto_Mini;
   Int_t           iTV_Mini[20];
   Int_t           LepGood_isLoose_Mini[5];   //[nLepGood]
   Int_t           LepGood_isLooseVeto_Mini[5];   //[nLepGood]
   Int_t           LepGood_isCleaning_Mini[5];   //[nLepGood]
   Int_t           LepGood_isCleaningVeto_Mini[5];   //[nLepGood]
   Int_t           LepGood_isFO_Mini[5];   //[nLepGood]
   Int_t           LepGood_isFOVeto_Mini[5];   //[nLepGood]
   Int_t           LepGood_isTight_Mini[5];   //[nLepGood]
   Int_t           LepGood_isTightVeto_Mini[5];   //[nLepGood]
   Float_t         mZ1_Mini;
   Float_t         minMllAFAS_Mini;
   Float_t         minMllAFOS_Mini;
   Float_t         minMllAFSS_Mini;
   Float_t         minMllSFOS_Mini;
   Int_t           nTauSel_Mini;
   Int_t           nTightTauSel_Mini;
   Int_t           iTauSel_Mini[3];   //[nTauSel_Mini]
   Float_t         TauSel_Mini_pt[3];   //[nTauSel_Mini]
   Float_t         TauSel_Mini_eta[3];   //[nTauSel_Mini]
   Float_t         TauSel_Mini_phi[3];   //[nTauSel_Mini]
   Float_t         TauSel_Mini_mass[3];   //[nTauSel_Mini]
   Float_t         TauSel_Mini_reclTauId[3];   //[nTauSel_Mini]
   Float_t         TauSel_Mini_mcMatchId[3];   //[nTauSel_Mini]
   Int_t           TauSel_Mini_pdgId[3];   //[nTauSel_Mini]
   Int_t           nJetSel_Mini;
   Int_t           iJSel_Mini[17];   //[nJetSel_Mini]
   Int_t           nDiscJetSel_Mini;
   Int_t           iDiscJSel_Mini[4];   //[nDiscJetSel_Mini]
   Int_t           nJet30_Mini;
   Float_t         htJet30j_Mini;
   Float_t         mhtJet30_Mini;
   Int_t           nBJetLoose30_Mini;
   Int_t           nBJetMedium30_Mini;
   Int_t           nJet25_Mini;
   Float_t         htJet25j_Mini;
   Float_t         mhtJet25_Mini;
   Int_t           nBJetLoose25_Mini;
   Int_t           nBJetMedium25_Mini;
   Int_t           nJetSel_Mini_jecUp;
   Int_t           iJSel_Mini_jecUp[17];   //[nJetSel_Mini_jecUp]
   Int_t           nDiscJetSel_Mini_jecUp;
   Int_t           iDiscJSel_Mini_jecUp[4];   //[nDiscJetSel_Mini_jecUp]
   Int_t           nJet30_Mini_jecUp;
   Float_t         htJet30j_Mini_jecUp;
   Float_t         mhtJet30_Mini_jecUp;
   Int_t           nBJetLoose30_Mini_jecUp;
   Int_t           nBJetMedium30_Mini_jecUp;
   Int_t           nJet25_Mini_jecUp;
   Float_t         htJet25j_Mini_jecUp;
   Float_t         mhtJet25_Mini_jecUp;
   Int_t           nBJetLoose25_Mini_jecUp;
   Int_t           nBJetMedium25_Mini_jecUp;
   Int_t           nJetSel_Mini_jecDown;
   Int_t           iJSel_Mini_jecDown[17];   //[nJetSel_Mini_jecDown]
   Int_t           nDiscJetSel_Mini_jecDown;
   Int_t           iDiscJSel_Mini_jecDown[4];   //[nDiscJetSel_Mini_jecDown]
   Int_t           nJet30_Mini_jecDown;
   Float_t         htJet30j_Mini_jecDown;
   Float_t         mhtJet30_Mini_jecDown;
   Int_t           nBJetLoose30_Mini_jecDown;
   Int_t           nBJetMedium30_Mini_jecDown;
   Int_t           nJet25_Mini_jecDown;
   Float_t         htJet25j_Mini_jecDown;
   Float_t         mhtJet25_Mini_jecDown;
   Int_t           nBJetLoose25_Mini_jecDown;
   Int_t           nBJetMedium25_Mini_jecDown; 

   //Friend trees version -2
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
   Int_t           LepSel_pdgId[4];
   Int_t           LepSel_isTight[4];
   Int_t           LepSel_tightCharge[4];
   Int_t           LepSel_mcMatchId[4];
   Int_t           LepSel_mcMatchAny[4];
   Int_t           LepSel_mcPromptGamma[4];
   Int_t           LepSel_mcUCSX[4];
   Int_t           LepSel_trIdx[4];
   Float_t         mT_3l;
   Float_t         mTL_3l;
   Float_t         mTT_3l;
   Float_t         mT2L_3l;
   Float_t         mT2T_3l;
   Float_t         mT_4l;
   Float_t         mTL_4l;
   Float_t         mTT_4l;
   Float_t         mT2L_4l;
   Float_t         mT2T_4l;
   Float_t         mT_3l_gen;
   Float_t         mTL_3l_gen;
   Float_t         mTT_3l_gen;
   Float_t         mT2L_3l_gen;
   Float_t         mT2T_3l_gen;
   Float_t         mT_4l_gen;
   Float_t         mTL_4l_gen;
   Float_t         mTT_4l_gen;
   Float_t         mT2L_4l_gen;
   Float_t         mT2T_4l_gen;
   Float_t         mT_3l_jecUp;
   Float_t         mTL_3l_jecUp;
   Float_t         mTT_3l_jecUp;
   Float_t         mT2L_3l_jecUp;
   Float_t         mT2T_3l_jecUp;
   Float_t         mT_4l_jecUp;
   Float_t         mTL_4l_jecUp;
   Float_t         mTT_4l_jecUp;
   Float_t         mT2L_4l_jecUp;
   Float_t         mT2T_4l_jecUp;
   Float_t         mT_3l_gen_jecUp;
   Float_t         mTL_3l_gen_jecUp;
   Float_t         mTT_3l_gen_jecUp;
   Float_t         mT2L_3l_gen_jecUp;
   Float_t         mT2T_3l_gen_jecUp;
   Float_t         mT_4l_gen_jecUp;
   Float_t         mTL_4l_gen_jecUp;
   Float_t         mTT_4l_gen_jecUp;
   Float_t         mT2L_4l_gen_jecUp;
   Float_t         mT2T_4l_gen_jecUp;
   Float_t         mT_3l_jecDown;
   Float_t         mTL_3l_jecDown;
   Float_t         mTT_3l_jecDown;
   Float_t         mT2L_3l_jecDown;
   Float_t         mT2T_3l_jecDown;
   Float_t         mT_4l_jecDown;
   Float_t         mTL_4l_jecDown;
   Float_t         mTT_4l_jecDown;
   Float_t         mT2L_4l_jecDown;
   Float_t         mT2T_4l_jecDown;
   Float_t         mT_3l_gen_jecDown;
   Float_t         mTL_3l_gen_jecDown;
   Float_t         mTT_3l_gen_jecDown;
   Float_t         mT2L_3l_gen_jecDown;
   Float_t         mT2T_3l_gen_jecDown;
   Float_t         mT_4l_gen_jecDown;
   Float_t         mTL_4l_gen_jecDown;
   Float_t         mTT_4l_gen_jecDown;
   Float_t         mT2L_4l_gen_jecDown;
   Float_t         mT2T_4l_gen_jecDown;







   // List of branches

   TBranch        *b_run;   //!

   TBranch        *b_lumi;   //!

   TBranch        *b_evt;   //!

   TBranch        *b_isData;   //!

   TBranch        *b_xsec;   //!

   TBranch        *b_puWeight;   //!

   TBranch        *b_nTrueInt;   //!

   TBranch        *b_genWeight;   //!

   TBranch        *b_rho;   //!

   TBranch        *b_rhoCN;   //!

   TBranch        *b_nVert;   //!

   TBranch        *b_nJet25;   //!

   TBranch        *b_nJet25a;   //!

   TBranch        *b_nBJetLoose25;   //!

   TBranch        *b_nBJetMedium25;   //!

   TBranch        *b_nBJetTight25;   //!

   TBranch        *b_nJet30;   //!

   TBranch        *b_nJet30a;   //!

   TBranch        *b_nBJetLoose30;   //!

   TBranch        *b_nBJetMedium30;   //!

   TBranch        *b_nBJetTight30;   //!

   TBranch        *b_nJet40;   //!

   TBranch        *b_nJet40a;   //!

   TBranch        *b_nBJetLoose40;   //!

   TBranch        *b_nBJetMedium40;   //!

   TBranch        *b_nBJetTight40;   //!

   TBranch        *b_nLepGood20;   //!

   TBranch        *b_nLepGood15;   //!

   TBranch        *b_nLepGood10;   //!

   TBranch        *b_GenSusyMScan1;   //!

   TBranch        *b_GenSusyMScan2;   //!

   TBranch        *b_GenSusyMScan3;   //!

   TBranch        *b_GenSusyMScan4;   //!

   TBranch        *b_GenSusyMGluino;   //!

   TBranch        *b_GenSusyMGravitino;   //!

   TBranch        *b_GenSusyMStop;   //!

   TBranch        *b_GenSusyMSbottom;   //!

   TBranch        *b_GenSusyMStop2;   //!

   TBranch        *b_GenSusyMSbottom2;   //!

   TBranch        *b_GenSusyMSquark;   //!

   TBranch        *b_GenSusyMNeutralino;   //!

   TBranch        *b_GenSusyMNeutralino2;   //!

   TBranch        *b_GenSusyMNeutralino3;   //!

   TBranch        *b_GenSusyMNeutralino4;   //!

   TBranch        *b_GenSusyMChargino;   //!

   TBranch        *b_GenSusyMChargino2;   //!

   TBranch        *b_lheHT;   //!

   TBranch        *b_lheHTIncoming;   //!

   TBranch        *b_htJet25;   //!

   TBranch        *b_mhtJet25;   //!

   TBranch        *b_htJet40j;   //!

   TBranch        *b_htJet40ja;   //!

   TBranch        *b_htJet40;   //!

   TBranch        *b_htJet40a;   //!

   TBranch        *b_mhtJet40;   //!

   TBranch        *b_mhtJet40a;   //!

   TBranch        *b_nJet25NoTau;   //!

   TBranch        *b_nBJetLoose25NoTau;   //!

   TBranch        *b_nBJetMedium25NoTau;   //!

   TBranch        *b_nBJetCMVALoose25;   //!

   TBranch        *b_nBJetCMVAMedium25;   //!

   TBranch        *b_nBJetCMVATight25;   //!

   TBranch        *b_nSoftBLoose25;   //!

   TBranch        *b_nSoftBMedium25;   //!

   TBranch        *b_nSoftBTight25;   //!

   TBranch        *b_nJet30NoTau;   //!

   TBranch        *b_nBJetLoose30NoTau;   //!

   TBranch        *b_nBJetMedium30NoTau;   //!

   TBranch        *b_nJet40NoTau;   //!

   TBranch        *b_nBJetLoose40NoTau;   //!

   TBranch        *b_nBJetMedium40NoTau;   //!

   TBranch        *b_nBJetCMVALoose40;   //!

   TBranch        *b_nBJetCMVAMedium40;   //!

   TBranch        *b_nBJetCMVATight40;   //!

   TBranch        *b_mZ1;   //!

   TBranch        *b_mZ1SFSS;   //!

   TBranch        *b_minMllSFOS;   //!

   TBranch        *b_maxMllSFOS;   //!

   TBranch        *b_minMllAFOS;   //!

   TBranch        *b_maxMllAFOS;   //!

   TBranch        *b_minMllAFSS;   //!

   TBranch        *b_maxMllAFSS;   //!

   TBranch        *b_minMllAFAS;   //!

   TBranch        *b_maxMllAFAS;   //!

   TBranch        *b_m2l;   //!

   TBranch        *b_minDrllAFSS;   //!

   TBranch        *b_maxDrllAFSS;   //!

   TBranch        *b_minDrllAFOS;   //!

   TBranch        *b_maxDrllAFOS;   //!

   TBranch        *b_mZ2;   //!

   TBranch        *b_m3l;   //!

   TBranch        *b_m4l;   //!

   TBranch        *b_pt2l;   //!

   TBranch        *b_pt3l;   //!

   TBranch        *b_pt4l;   //!

   TBranch        *b_ht3l;   //!

   TBranch        *b_ht4l;   //!

   TBranch        *b_q3l;   //!

   TBranch        *b_q4l;   //!

   TBranch        *b_minMWjj;   //!

   TBranch        *b_minMWjjPt;   //!

   TBranch        *b_bestMWjj;   //!

   TBranch        *b_bestMWjjPt;   //!

   TBranch        *b_bestMTopHad;   //!

   TBranch        *b_bestMTopHadPt;   //!

   TBranch        *b_GenHiggsDecayMode;   //!

   TBranch        *b_Flag_badChargedHadronFilter;   //!

   TBranch        *b_Flag_badMuonFilter;   //!

   TBranch        *b_nPFLep5;   //!

   TBranch        *b_nPFHad10;   //!

   TBranch        *b_met_trkPt;   //!

   TBranch        *b_met_trkPhi;   //!

   TBranch        *b_nISR;   //!

   TBranch        *b_met_pt;   //!

   TBranch        *b_met_eta;   //!

   TBranch        *b_met_phi;   //!

   TBranch        *b_met_mass;   //!

   TBranch        *b_met_sumEt;   //!

   TBranch        *b_met_rawPt;   //!

   TBranch        *b_met_rawPhi;   //!

   TBranch        *b_met_rawSumEt;   //!

   TBranch        *b_met_genPt;   //!

   TBranch        *b_met_genPhi;   //!

   TBranch        *b_met_genEta;   //!

   TBranch        *b_met_jecUp_pt;   //!

   TBranch        *b_met_jecUp_eta;   //!

   TBranch        *b_met_jecUp_phi;   //!

   TBranch        *b_met_jecUp_mass;   //!

   TBranch        *b_met_jecUp_sumEt;   //!

   TBranch        *b_met_jecUp_rawPt;   //!

   TBranch        *b_met_jecUp_rawPhi;   //!

   TBranch        *b_met_jecUp_rawSumEt;   //!

   TBranch        *b_met_jecUp_genPt;   //!

   TBranch        *b_met_jecUp_genPhi;   //!

   TBranch        *b_met_jecUp_genEta;   //!

   TBranch        *b_met_jecDown_pt;   //!

   TBranch        *b_met_jecDown_eta;   //!

   TBranch        *b_met_jecDown_phi;   //!

   TBranch        *b_met_jecDown_mass;   //!

   TBranch        *b_met_jecDown_sumEt;   //!

   TBranch        *b_met_jecDown_rawPt;   //!

   TBranch        *b_met_jecDown_rawPhi;   //!

   TBranch        *b_met_jecDown_rawSumEt;   //!

   TBranch        *b_met_jecDown_genPt;   //!

   TBranch        *b_met_jecDown_genPhi;   //!

   TBranch        *b_met_jecDown_genEta;   //!

   TBranch        *b_nSV;   //!

   TBranch        *b_SV_pt;   //!

   TBranch        *b_SV_eta;   //!

   TBranch        *b_SV_phi;   //!

   TBranch        *b_SV_mass;   //!

   TBranch        *b_SV_charge;   //!

   TBranch        *b_SV_ntracks;   //!

   TBranch        *b_SV_chi2;   //!

   TBranch        *b_SV_ndof;   //!

   TBranch        *b_SV_dxy;   //!

   TBranch        *b_SV_edxy;   //!

   TBranch        *b_SV_ip3d;   //!

   TBranch        *b_SV_eip3d;   //!

   TBranch        *b_SV_sip3d;   //!

   TBranch        *b_SV_cosTheta;   //!

   TBranch        *b_SV_mva;   //!

   TBranch        *b_SV_jetPt;   //!

   TBranch        *b_SV_jetEta;   //!

   TBranch        *b_SV_jetDR;   //!

   TBranch        *b_SV_jetBTagCSV;   //!

   TBranch        *b_SV_jetBTagCMVA;   //!

   TBranch        *b_SV_mcMatchNTracks;   //!

   TBranch        *b_SV_mcMatchNTracksHF;   //!

   TBranch        *b_SV_mcMatchFraction;   //!

   TBranch        *b_SV_mcFlavFirst;   //!

   TBranch        *b_SV_mcFlavHeaviest;   //!

   TBranch        *b_SV_maxDxyTracks;   //!

   TBranch        *b_SV_secDxyTracks;   //!

   TBranch        *b_SV_maxD3dTracks;   //!

   TBranch        *b_SV_secD3dTracks;   //!

   TBranch        *b_nLepOther;   //!

   TBranch        *b_LepOther_charge;   //!

   TBranch        *b_LepOther_tightId;   //!

   TBranch        *b_LepOther_hltId;   //!

   TBranch        *b_LepOther_eleCutIdCSA14_25ns_v1;   //!

   TBranch        *b_LepOther_eleCutIdCSA14_50ns_v1;   //!

   TBranch        *b_LepOther_eleCutIdSpring15_25ns_v1;   //!

   TBranch        *b_LepOther_dxy;   //!

   TBranch        *b_LepOther_dz;   //!

   TBranch        *b_LepOther_edxy;   //!

   TBranch        *b_LepOther_edz;   //!

   TBranch        *b_LepOther_ip3d;   //!

   TBranch        *b_LepOther_sip3d;   //!

   TBranch        *b_LepOther_convVeto;   //!

   TBranch        *b_LepOther_lostHits;   //!

   TBranch        *b_LepOther_relIso03;   //!

   TBranch        *b_LepOther_relIso04;   //!

   TBranch        *b_LepOther_miniRelIso;   //!

   TBranch        *b_LepOther_relIsoAn04;   //!

   TBranch        *b_LepOther_tightCharge;   //!

   TBranch        *b_LepOther_mcMatchId;   //!

   TBranch        *b_LepOther_mcMatchAny;   //!

   TBranch        *b_LepOther_mcMatchTau;   //!

   TBranch        *b_LepOther_mcPt;   //!

   TBranch        *b_LepOther_mediumMuonId;   //!

   TBranch        *b_LepOther_ICHEPsoftMuonId;   //!

   TBranch        *b_LepOther_ICHEPmediumMuonId;   //!

   TBranch        *b_LepOther_pdgId;   //!

   TBranch        *b_LepOther_pt;   //!

   TBranch        *b_LepOther_eta;   //!

   TBranch        *b_LepOther_phi;   //!

   TBranch        *b_LepOther_mass;   //!

   TBranch        *b_LepOther_mvaIdSpring15;   //!

   TBranch        *b_LepOther_mvaTTH;   //!

   TBranch        *b_LepOther_mvaSUSY;   //!

   TBranch        *b_LepOther_jetPtRatiov1;   //!

   TBranch        *b_LepOther_jetPtRelv1;   //!

   TBranch        *b_LepOther_jetPtRatiov2;   //!

   TBranch        *b_LepOther_jetPtRelv2;   //!

   TBranch        *b_LepOther_jetBTagCSV;   //!

   TBranch        *b_LepOther_jetBTagCMVA;   //!

   TBranch        *b_LepOther_jetDR;   //!

   TBranch        *b_LepOther_r9;   //!

   TBranch        *b_LepOther_softMuonId2016;   //!

   TBranch        *b_LepOther_mediumMuonID2016;   //!

   TBranch        *b_LepOther_tightChargeFix;   //!

   TBranch        *b_LepOther_muonTrackType;   //!

   TBranch        *b_LepOther_chargeConsistency;   //!

   TBranch        *b_LepOther_ptErrTk;   //!

   TBranch        *b_LepOther_mvaIdSpring16HZZ;   //!

   TBranch        *b_LepOther_mvaIdSpring16GP;   //!

   TBranch        *b_nDiscLep;   //!

   TBranch        *b_DiscLep_charge;   //!

   TBranch        *b_DiscLep_tightId;   //!

   TBranch        *b_DiscLep_hltId;   //!

   TBranch        *b_DiscLep_eleCutIdCSA14_25ns_v1;   //!

   TBranch        *b_DiscLep_eleCutIdCSA14_50ns_v1;   //!

   TBranch        *b_DiscLep_eleCutIdSpring15_25ns_v1;   //!

   TBranch        *b_DiscLep_dxy;   //!

   TBranch        *b_DiscLep_dz;   //!

   TBranch        *b_DiscLep_edxy;   //!

   TBranch        *b_DiscLep_edz;   //!

   TBranch        *b_DiscLep_ip3d;   //!

   TBranch        *b_DiscLep_sip3d;   //!

   TBranch        *b_DiscLep_convVeto;   //!

   TBranch        *b_DiscLep_lostHits;   //!

   TBranch        *b_DiscLep_relIso03;   //!

   TBranch        *b_DiscLep_relIso04;   //!

   TBranch        *b_DiscLep_miniRelIso;   //!

   TBranch        *b_DiscLep_relIsoAn04;   //!

   TBranch        *b_DiscLep_tightCharge;   //!

   TBranch        *b_DiscLep_mcMatchId;   //!

   TBranch        *b_DiscLep_mcMatchAny;   //!

   TBranch        *b_DiscLep_mcMatchTau;   //!

   TBranch        *b_DiscLep_mcPt;   //!

   TBranch        *b_DiscLep_mediumMuonId;   //!

   TBranch        *b_DiscLep_ICHEPsoftMuonId;   //!

   TBranch        *b_DiscLep_ICHEPmediumMuonId;   //!

   TBranch        *b_DiscLep_pdgId;   //!

   TBranch        *b_DiscLep_pt;   //!

   TBranch        *b_DiscLep_eta;   //!

   TBranch        *b_DiscLep_phi;   //!

   TBranch        *b_DiscLep_mass;   //!

   TBranch        *b_DiscLep_mvaIdSpring15;   //!

   TBranch        *b_DiscLep_mvaTTH;   //!

   TBranch        *b_DiscLep_mvaSUSY;   //!

   TBranch        *b_DiscLep_jetPtRatiov1;   //!

   TBranch        *b_DiscLep_jetPtRelv1;   //!

   TBranch        *b_DiscLep_jetPtRatiov2;   //!

   TBranch        *b_DiscLep_jetPtRelv2;   //!

   TBranch        *b_DiscLep_jetBTagCSV;   //!

   TBranch        *b_DiscLep_jetBTagCMVA;   //!

   TBranch        *b_DiscLep_jetDR;   //!

   TBranch        *b_DiscLep_r9;   //!

   TBranch        *b_DiscLep_softMuonId2016;   //!

   TBranch        *b_DiscLep_mediumMuonID2016;   //!

   TBranch        *b_DiscLep_tightChargeFix;   //!

   TBranch        *b_DiscLep_muonTrackType;   //!

   TBranch        *b_DiscLep_chargeConsistency;   //!

   TBranch        *b_DiscLep_ptErrTk;   //!

   TBranch        *b_DiscLep_mvaIdSpring16HZZ;   //!

   TBranch        *b_DiscLep_mvaIdSpring16GP;   //!

   TBranch        *b_nGenPart;   //!

   TBranch        *b_GenPart_motherId;   //!

   TBranch        *b_GenPart_grandmotherId;   //!

   TBranch        *b_GenPart_sourceId;   //!

   TBranch        *b_GenPart_charge;   //!

   TBranch        *b_GenPart_status;   //!

   TBranch        *b_GenPart_isPromptHard;   //!

   TBranch        *b_GenPart_pdgId;   //!

   TBranch        *b_GenPart_pt;   //!

   TBranch        *b_GenPart_eta;   //!

   TBranch        *b_GenPart_phi;   //!

   TBranch        *b_GenPart_mass;   //!

   TBranch        *b_GenPart_motherIndex;   //!

   TBranch        *b_nDiscJet;   //!

   TBranch        *b_DiscJet_pt;   //!

   TBranch        *b_DiscJet_eta;   //!

   TBranch        *b_DiscJet_phi;   //!

   TBranch        *b_DiscJet_mass;   //!

   TBranch        *b_DiscJet_etaetaMoment;   //!

   TBranch        *b_DiscJet_phiphiMoment;   //!

   TBranch        *b_DiscJet_btagCSV;   //!

   TBranch        *b_DiscJet_mcFlavour;   //!

   TBranch        *b_DiscJet_partonFlavour;   //!

   TBranch        *b_nTauOther;   //!

   TBranch        *b_TauOther_charge;   //!

   TBranch        *b_TauOther_decayMode;   //!

   TBranch        *b_TauOther_idDecayMode;   //!

   TBranch        *b_TauOther_idDecayModeNewDMs;   //!

   TBranch        *b_TauOther_dxy;   //!

   TBranch        *b_TauOther_dz;   //!

   TBranch        *b_TauOther_idMVA;   //!

   TBranch        *b_TauOther_idMVANewDM;   //!

   TBranch        *b_TauOther_idCI3hit;   //!

   TBranch        *b_TauOther_idAntiMu;   //!

   TBranch        *b_TauOther_idAntiE;   //!

   TBranch        *b_TauOther_isoCI3hit;   //!

   TBranch        *b_TauOther_mcMatchId;   //!

   TBranch        *b_TauOther_pdgId;   //!

   TBranch        *b_TauOther_pt;   //!

   TBranch        *b_TauOther_eta;   //!

   TBranch        *b_TauOther_phi;   //!

   TBranch        *b_TauOther_mass;   //!

   TBranch        *b_TauOther_idMVAdR03;   //!

   TBranch        *b_TauOther_mcUCSXMatchId;   //!

   TBranch        *b_nLepGood;   //!

   TBranch        *b_LepGood_mvaIdSpring15;   //!

   TBranch        *b_LepGood_mvaTTH;   //!

   TBranch        *b_LepGood_mvaSUSY;   //!

   TBranch        *b_LepGood_jetPtRatiov1;   //!

   TBranch        *b_LepGood_jetPtRelv1;   //!

   TBranch        *b_LepGood_jetPtRatiov2;   //!

   TBranch        *b_LepGood_jetPtRelv2;   //!

   TBranch        *b_LepGood_jetBTagCSV;   //!

   TBranch        *b_LepGood_jetBTagCMVA;   //!

   TBranch        *b_LepGood_jetDR;   //!

   TBranch        *b_LepGood_r9;   //!

   TBranch        *b_LepGood_softMuonId2016;   //!

   TBranch        *b_LepGood_mediumMuonID2016;   //!

   TBranch        *b_LepGood_tightChargeFix;   //!

   TBranch        *b_LepGood_muonTrackType;   //!

   TBranch        *b_LepGood_chargeConsistency;   //!

   TBranch        *b_LepGood_ptErrTk;   //!

   TBranch        *b_LepGood_mvaIdSpring16HZZ;   //!

   TBranch        *b_LepGood_mvaIdSpring16GP;   //!

   TBranch        *b_LepGood_charge;   //!

   TBranch        *b_LepGood_tightId;   //!

   TBranch        *b_LepGood_hltId;   //!

   TBranch        *b_LepGood_eleCutIdCSA14_25ns_v1;   //!

   TBranch        *b_LepGood_eleCutIdCSA14_50ns_v1;   //!

   TBranch        *b_LepGood_eleCutIdSpring15_25ns_v1;   //!

   TBranch        *b_LepGood_dxy;   //!

   TBranch        *b_LepGood_dz;   //!

   TBranch        *b_LepGood_edxy;   //!

   TBranch        *b_LepGood_edz;   //!

   TBranch        *b_LepGood_ip3d;   //!

   TBranch        *b_LepGood_sip3d;   //!

   TBranch        *b_LepGood_convVeto;   //!

   TBranch        *b_LepGood_lostHits;   //!

   TBranch        *b_LepGood_relIso03;   //!

   TBranch        *b_LepGood_relIso04;   //!

   TBranch        *b_LepGood_miniRelIso;   //!

   TBranch        *b_LepGood_relIsoAn04;   //!

   TBranch        *b_LepGood_tightCharge;   //!

   TBranch        *b_LepGood_mcMatchId;   //!

   TBranch        *b_LepGood_mcMatchAny;   //!

   TBranch        *b_LepGood_mcMatchTau;   //!

   TBranch        *b_LepGood_mcPt;   //!

   TBranch        *b_LepGood_mediumMuonId;   //!

   TBranch        *b_LepGood_ICHEPsoftMuonId;   //!

   TBranch        *b_LepGood_ICHEPmediumMuonId;   //!

   TBranch        *b_LepGood_pdgId;   //!

   TBranch        *b_LepGood_pt;   //!

   TBranch        *b_LepGood_eta;   //!

   TBranch        *b_LepGood_phi;   //!

   TBranch        *b_LepGood_mass;   //!

   TBranch        *b_LepGood_looseIdOnly;   //!

   TBranch        *b_LepGood_chargedHadRelIso03;   //!

   TBranch        *b_LepGood_chargedHadRelIso04;   //!

   TBranch        *b_LepGood_softMuonId;   //!

   TBranch        *b_LepGood_pfMuonId;   //!

   TBranch        *b_LepGood_eleCutId2012;   //!

   TBranch        *b_LepGood_trackerLayers;   //!

   TBranch        *b_LepGood_pixelLayers;   //!

   TBranch        *b_LepGood_trackerHits;   //!

   TBranch        *b_LepGood_lostOuterHits;   //!

   TBranch        *b_LepGood_innerTrackValidHitFraction;   //!

   TBranch        *b_LepGood_innerTrackChi2;   //!

   TBranch        *b_LepGood_nStations;   //!

   TBranch        *b_LepGood_caloCompatibility;   //!

   TBranch        *b_LepGood_globalTrackChi2;   //!

   TBranch        *b_LepGood_trkKink;   //!

   TBranch        *b_LepGood_segmentCompatibility;   //!

   TBranch        *b_LepGood_chi2LocalPosition;   //!

   TBranch        *b_LepGood_chi2LocalMomentum;   //!

   TBranch        *b_LepGood_glbTrackProbability;   //!

   TBranch        *b_LepGood_TMOneStationTightMuonId;   //!

   TBranch        *b_LepGood_trackHighPurityMuon;   //!

   TBranch        *b_LepGood_isGlobalMuon;   //!

   TBranch        *b_LepGood_isTrackerMuon;   //!

   TBranch        *b_LepGood_sigmaIEtaIEta;   //!

   TBranch        *b_LepGood_dEtaScTrkIn;   //!

   TBranch        *b_LepGood_dPhiScTrkIn;   //!

   TBranch        *b_LepGood_hadronicOverEm;   //!

   TBranch        *b_LepGood_eInvMinusPInv;   //!

   TBranch        *b_LepGood_eInvMinusPInv_tkMom;   //!

   TBranch        *b_LepGood_etaSc;   //!

   TBranch        *b_LepGood_mcMatchPdgId;   //!

   TBranch        *b_LepGood_miniRelIsoCharged;   //!

   TBranch        *b_LepGood_miniRelIsoNeutral;   //!

   TBranch        *b_LepGood_jetNDauChargedMVASel;   //!

   TBranch        *b_LepGood_jetCorrFactor_L1;   //!

   TBranch        *b_LepGood_jetCorrFactor_L1L2;   //!

   TBranch        *b_LepGood_jetCorrFactor_L1L2L3;   //!

   TBranch        *b_LepGood_jetCorrFactor_L1L2L3Res;   //!

   TBranch        *b_LepGood_ecalPFClusterIso;   //!

   TBranch        *b_LepGood_hcalPFClusterIso;   //!

   TBranch        *b_LepGood_dr03TkSumPt;   //!

   TBranch        *b_LepGood_trackIso;   //!

   TBranch        *b_LepGood_idEmuTTH;   //!

   TBranch        *b_LepGood_idEmuRA5;   //!

   TBranch        *b_LepGood_idIsoEmuRA5;   //!

   TBranch        *b_LepGood_mcPrompt;   //!

   TBranch        *b_LepGood_mcPromptTau;   //!

   TBranch        *b_LepGood_mcPromptGamma;   //!

   TBranch        *b_LepGood_mcGamma;   //!

   TBranch        *b_LepGood_RelIsoMIV03;   //!

   TBranch        *b_LepGood_RelIsoMIVCharged03;   //!

   TBranch        *b_LepGood_RelIsoMIVNeutral03;   //!

   TBranch        *b_LepGood_RelIsoMIV04;   //!

   TBranch        *b_LepGood_RelIsoMIVCharged04;   //!

   TBranch        *b_LepGood_RelIsoMIVNeutral04;   //!

   TBranch        *b_LepGood_jetPtRelHv2;   //!

   TBranch        *b_LepGood_isoRelH04;   //!

   TBranch        *b_LepGood_jetBasedRelIsoCharged;   //!

   TBranch        *b_LepGood_hasSV;   //!

   TBranch        *b_LepGood_svSip3d;   //!

   TBranch        *b_LepGood_svRedPt;   //!

   TBranch        *b_LepGood_svMass;   //!

   TBranch        *b_LepGood_svNTracks;   //!

   TBranch        *b_LepGood_energySc;   //!

   TBranch        *b_LepGood_mcUCSXMatchId;   //!

   TBranch        *b_LepGood_jetLepAwareJEC_pt;   //!

   TBranch        *b_LepGood_jetLepAwareJEC_eta;   //!

   TBranch        *b_LepGood_jetLepAwareJEC_phi;   //!

   TBranch        *b_LepGood_jetLepAwareJEC_energy;   //!

   TBranch        *b_nJet;   //!

   TBranch        *b_Jet_mcMatchFlav;   //!

   TBranch        *b_Jet_charge;   //!

   TBranch        *b_Jet_ctagCsvL;   //!

   TBranch        *b_Jet_ctagCsvB;   //!

   TBranch        *b_Jet_area;   //!

   TBranch        *b_Jet_qgl;   //!

   TBranch        *b_Jet_ptd;   //!

   TBranch        *b_Jet_axis2;   //!

   TBranch        *b_Jet_mult;   //!

   TBranch        *b_Jet_partonId;   //!

   TBranch        *b_Jet_partonMotherId;   //!

   TBranch        *b_Jet_nLeptons;   //!

   TBranch        *b_Jet_id;   //!

   TBranch        *b_Jet_puId;   //!

   TBranch        *b_Jet_btagCSV;   //!

   TBranch        *b_Jet_btagCMVA;   //!

   TBranch        *b_Jet_rawPt;   //!

   TBranch        *b_Jet_mcPt;   //!

   TBranch        *b_Jet_mcFlavour;   //!

   TBranch        *b_Jet_partonFlavour;   //!

   TBranch        *b_Jet_hadronFlavour;   //!

   TBranch        *b_Jet_mcMatchId;   //!

   TBranch        *b_Jet_corr_JECUp;   //!

   TBranch        *b_Jet_corr_JECDown;   //!

   TBranch        *b_Jet_corr;   //!

   TBranch        *b_Jet_corr_JERUp;   //!

   TBranch        *b_Jet_corr_JERDown;   //!

   TBranch        *b_Jet_corr_JER;   //!

   TBranch        *b_Jet_pt;   //!

   TBranch        *b_Jet_eta;   //!

   TBranch        *b_Jet_phi;   //!

   TBranch        *b_Jet_mass;   //!

   TBranch        *b_Jet_CorrFactor_L1;   //!

   TBranch        *b_Jet_CorrFactor_L1L2;   //!

   TBranch        *b_Jet_CorrFactor_L1L2L3;   //!

   TBranch        *b_Jet_CorrFactor_L1L2L3Res;   //!

   TBranch        *b_Jet_chHEF;   //!

   TBranch        *b_Jet_neHEF;   //!

   TBranch        *b_ngenLep;   //!

   TBranch        *b_genLep_motherId;   //!

   TBranch        *b_genLep_grandmotherId;   //!

   TBranch        *b_genLep_sourceId;   //!

   TBranch        *b_genLep_charge;   //!

   TBranch        *b_genLep_status;   //!

   TBranch        *b_genLep_isPromptHard;   //!

   TBranch        *b_genLep_pdgId;   //!

   TBranch        *b_genLep_pt;   //!

   TBranch        *b_genLep_eta;   //!

   TBranch        *b_genLep_phi;   //!

   TBranch        *b_genLep_mass;   //!

   TBranch        *b_genLep_motherIndex;   //!

   TBranch        *b_nLHEweight;   //!

   TBranch        *b_LHEweight_id;   //!

   TBranch        *b_LHEweight_wgt;   //!

   TBranch        *b_nTauGood;   //!

   TBranch        *b_TauGood_charge;   //!

   TBranch        *b_TauGood_decayMode;   //!

   TBranch        *b_TauGood_idDecayMode;   //!

   TBranch        *b_TauGood_idDecayModeNewDMs;   //!

   TBranch        *b_TauGood_dxy;   //!

   TBranch        *b_TauGood_dz;   //!

   TBranch        *b_TauGood_idMVA;   //!

   TBranch        *b_TauGood_idMVANewDM;   //!

   TBranch        *b_TauGood_idCI3hit;   //!

   TBranch        *b_TauGood_idAntiMu;   //!

   TBranch        *b_TauGood_idAntiE;   //!

   TBranch        *b_TauGood_isoCI3hit;   //!

   TBranch        *b_TauGood_mcMatchId;   //!

   TBranch        *b_TauGood_pdgId;   //!

   TBranch        *b_TauGood_pt;   //!

   TBranch        *b_TauGood_eta;   //!

   TBranch        *b_TauGood_phi;   //!

   TBranch        *b_TauGood_mass;   //!

   TBranch        *b_TauGood_idMVAdR03;   //!

   TBranch        *b_TauGood_mcUCSXMatchId;   //!

   TBranch        *b_ngenTau;   //!

   TBranch        *b_genTau_motherId;   //!

   TBranch        *b_genTau_grandmotherId;   //!

   TBranch        *b_genTau_sourceId;   //!

   TBranch        *b_genTau_charge;   //!

   TBranch        *b_genTau_status;   //!

   TBranch        *b_genTau_isPromptHard;   //!

   TBranch        *b_genTau_pdgId;   //!

   TBranch        *b_genTau_pt;   //!

   TBranch        *b_genTau_eta;   //!

   TBranch        *b_genTau_phi;   //!

   TBranch        *b_genTau_mass;   //!

   TBranch        *b_genTau_motherIndex;   //!

   TBranch        *b_nGenTop;   //!

   TBranch        *b_GenTop_pdgId;   //!

   TBranch        *b_GenTop_pt;   //!

   TBranch        *b_GenTop_eta;   //!

   TBranch        *b_GenTop_phi;   //!

   TBranch        *b_GenTop_mass;   //!

   TBranch        *b_GenTop_charge;   //!

   TBranch        *b_GenTop_status;   //!

   TBranch        *b_GenTop_isPromptHard;   //!

   TBranch        *b_nisoTrack;   //!

   TBranch        *b_isoTrack_pdgId;   //!

   TBranch        *b_isoTrack_pt;   //!

   TBranch        *b_isoTrack_eta;   //!

   TBranch        *b_isoTrack_phi;   //!

   TBranch        *b_isoTrack_mass;   //!

   TBranch        *b_isoTrack_charge;   //!

   TBranch        *b_isoTrack_dz;   //!

   TBranch        *b_isoTrack_absIso;   //!

   TBranch        *b_isoTrack_relIsoAn04;   //!

   TBranch        *b_isoTrack_mcMatchId;   //!

   TBranch        *b_ngenLepFromTau;   //!

   TBranch        *b_genLepFromTau_motherId;   //!

   TBranch        *b_genLepFromTau_grandmotherId;   //!

   TBranch        *b_genLepFromTau_sourceId;   //!

   TBranch        *b_genLepFromTau_charge;   //!

   TBranch        *b_genLepFromTau_status;   //!

   TBranch        *b_genLepFromTau_isPromptHard;   //!

   TBranch        *b_genLepFromTau_pdgId;   //!

   TBranch        *b_genLepFromTau_pt;   //!

   TBranch        *b_genLepFromTau_eta;   //!

   TBranch        *b_genLepFromTau_phi;   //!

   TBranch        *b_genLepFromTau_mass;   //!

   TBranch        *b_genLepFromTau_motherIndex;   //!

   TBranch        *b_nJetFwd;   //!

   TBranch        *b_JetFwd_area;   //!

   TBranch        *b_JetFwd_qgl;   //!

   TBranch        *b_JetFwd_ptd;   //!

   TBranch        *b_JetFwd_axis2;   //!

   TBranch        *b_JetFwd_mult;   //!

   TBranch        *b_JetFwd_partonId;   //!

   TBranch        *b_JetFwd_partonMotherId;   //!

   TBranch        *b_JetFwd_nLeptons;   //!

   TBranch        *b_JetFwd_id;   //!

   TBranch        *b_JetFwd_puId;   //!

   TBranch        *b_JetFwd_btagCSV;   //!

   TBranch        *b_JetFwd_btagCMVA;   //!

   TBranch        *b_JetFwd_rawPt;   //!

   TBranch        *b_JetFwd_mcPt;   //!

   TBranch        *b_JetFwd_mcFlavour;   //!

   TBranch        *b_JetFwd_partonFlavour;   //!

   TBranch        *b_JetFwd_hadronFlavour;   //!

   TBranch        *b_JetFwd_mcMatchId;   //!

   TBranch        *b_JetFwd_corr_JECUp;   //!

   TBranch        *b_JetFwd_corr_JECDown;   //!

   TBranch        *b_JetFwd_corr;   //!

   TBranch        *b_JetFwd_corr_JERUp;   //!

   TBranch        *b_JetFwd_corr_JERDown;   //!

   TBranch        *b_JetFwd_corr_JER;   //!

   TBranch        *b_JetFwd_pt;   //!

   TBranch        *b_JetFwd_eta;   //!

   TBranch        *b_JetFwd_phi;   //!

   TBranch        *b_JetFwd_mass;   //!

   TBranch        *b_JetFwd_mcMatchFlav;   //!

   TBranch        *b_JetFwd_charge;   //!

   TBranch        *b_JetFwd_ctagCsvL;   //!

   TBranch        *b_JetFwd_ctagCsvB;   //!

   TBranch        *b_nPhoGood;   //!

   TBranch        *b_PhoGood_etaSc;   //!

   TBranch        *b_PhoGood_idCutBased;   //!

   TBranch        *b_PhoGood_hOverE;   //!

   TBranch        *b_PhoGood_r9;   //!

   TBranch        *b_PhoGood_sigmaIetaIeta;   //!

   TBranch        *b_PhoGood_chHadIso04;   //!

   TBranch        *b_PhoGood_chHadIso;   //!

   TBranch        *b_PhoGood_phIso;   //!

   TBranch        *b_PhoGood_neuHadIso;   //!

   TBranch        *b_PhoGood_relIso;   //!

   TBranch        *b_PhoGood_mcMatchId;   //!

   TBranch        *b_PhoGood_mcPt;   //!

   TBranch        *b_PhoGood_pdgId;   //!

   TBranch        *b_PhoGood_pt;   //!

   TBranch        *b_PhoGood_eta;   //!

   TBranch        *b_PhoGood_phi;   //!

   TBranch        *b_PhoGood_mass;   //!

   TBranch        *b_PhoGood_genIso04;   //!

   TBranch        *b_PhoGood_genIso03;   //!

   TBranch        *b_PhoGood_chHadIsoRC04;   //!

   TBranch        *b_PhoGood_chHadIsoRC;   //!

   TBranch        *b_PhoGood_drMinParton;   //!

   //friend tree version -2
   //TBranch        *b_nLepGood;   //!
   TBranch        *b_LepGood_conePt;   //!
   TBranch        *b_nLepLoose_Mini;   //!
   TBranch        *b_iL_Mini;   //!
   TBranch        *b_nLepLooseVeto_Mini;   //!
   TBranch        *b_iLV_Mini;   //!
   TBranch        *b_nLepCleaning_Mini;   //!
   TBranch        *b_iC_Mini;   //!
   TBranch        *b_nLepCleaningVeto_Mini;   //!
   TBranch        *b_iCV_Mini;   //!
   TBranch        *b_nLepFO_Mini;   //!
   TBranch        *b_iF_Mini;   //!
   TBranch        *b_nLepFOVeto_Mini;   //!
   TBranch        *b_iFV_Mini;   //!
   TBranch        *b_nLepTight_Mini;   //!
   TBranch        *b_iT_Mini;   //!
   TBranch        *b_nLepTightVeto_Mini;   //!
   TBranch        *b_iTV_Mini;   //!
   TBranch        *b_LepGood_isLoose_Mini;   //!
   TBranch        *b_LepGood_isLooseVeto_Mini;   //!
   TBranch        *b_LepGood_isCleaning_Mini;   //!
   TBranch        *b_LepGood_isCleaningVeto_Mini;   //!
   TBranch        *b_LepGood_isFO_Mini;   //!
   TBranch        *b_LepGood_isFOVeto_Mini;   //!
   TBranch        *b_LepGood_isTight_Mini;   //!
   TBranch        *b_LepGood_isTightVeto_Mini;   //!
   TBranch        *b_mZ1_Mini;   //!
   TBranch        *b_minMllAFAS_Mini;   //!
   TBranch        *b_minMllAFOS_Mini;   //!
   TBranch        *b_minMllAFSS_Mini;   //!
   TBranch        *b_minMllSFOS_Mini;   //!
   TBranch        *b_nTauSel_Mini;   //!
   TBranch        *b_nTightTauSel_Mini;   //!
   TBranch        *b_iTauSel_Mini;   //!
   TBranch        *b_TauSel_Mini_pt;   //!
   TBranch        *b_TauSel_Mini_eta;   //!
   TBranch        *b_TauSel_Mini_phi;   //!
   TBranch        *b_TauSel_Mini_mass;   //!
   TBranch        *b_TauSel_Mini_reclTauId;   //!
   TBranch        *b_TauSel_Mini_mcMatchId;   //!
   TBranch        *b_TauSel_Mini_pdgId;   //!
   TBranch        *b_nJetSel_Mini;   //!
   TBranch        *b_iJSel_Mini;   //!
   TBranch        *b_nDiscJetSel_Mini;   //!
   TBranch        *b_iDiscJSel_Mini;   //!
   TBranch        *b_nJet30_Mini;   //!
   TBranch        *b_htJet30j_Mini;   //!
   TBranch        *b_mhtJet30_Mini;   //!
   TBranch        *b_nBJetLoose30_Mini;   //!
   TBranch        *b_nBJetMedium30_Mini;   //!
   TBranch        *b_nJet25_Mini;   //!
   TBranch        *b_htJet25j_Mini;   //!
   TBranch        *b_mhtJet25_Mini;   //!
   TBranch        *b_nBJetLoose25_Mini;   //!
   TBranch        *b_nBJetMedium25_Mini;   //!
   TBranch        *b_nJetSel_Mini_jecUp;   //!
   TBranch        *b_iJSel_Mini_jecUp;   //!
   TBranch        *b_nDiscJetSel_Mini_jecUp;   //!
   TBranch        *b_iDiscJSel_Mini_jecUp;   //!
   TBranch        *b_nJet30_Mini_jecUp;   //!
   TBranch        *b_htJet30j_Mini_jecUp;   //!
   TBranch        *b_mhtJet30_Mini_jecUp;   //!
   TBranch        *b_nBJetLoose30_Mini_jecUp;   //!
   TBranch        *b_nBJetMedium30_Mini_jecUp;   //!
   TBranch        *b_nJet25_Mini_jecUp;   //!
   TBranch        *b_htJet25j_Mini_jecUp;   //!
   TBranch        *b_mhtJet25_Mini_jecUp;   //!
   TBranch        *b_nBJetLoose25_Mini_jecUp;   //!
   TBranch        *b_nBJetMedium25_Mini_jecUp;   //!
   TBranch        *b_nJetSel_Mini_jecDown;   //!
   TBranch        *b_iJSel_Mini_jecDown;   //!
   TBranch        *b_nDiscJetSel_Mini_jecDown;   //!
   TBranch        *b_iDiscJSel_Mini_jecDown;   //!
   TBranch        *b_nJet30_Mini_jecDown;   //!
   TBranch        *b_htJet30j_Mini_jecDown;   //!
   TBranch        *b_mhtJet30_Mini_jecDown;   //!
   TBranch        *b_nBJetLoose30_Mini_jecDown;   //!
   TBranch        *b_nBJetMedium30_Mini_jecDown;   //!
   TBranch        *b_nJet25_Mini_jecDown;   //!
   TBranch        *b_htJet25j_Mini_jecDown;   //!
   TBranch        *b_mhtJet25_Mini_jecDown;   //!
   TBranch        *b_nBJetLoose25_Mini_jecDown;   //!
   TBranch        *b_nBJetMedium25_Mini_jecDown;   //!

   //Friend Trees version-3 
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
   TBranch        *b_LepSel_pdgId;   //!
   TBranch        *b_LepSel_isTight;   //!
   TBranch        *b_LepSel_tightCharge;   //!
   TBranch        *b_LepSel_mcMatchId;   //!
   TBranch        *b_LepSel_mcMatchAny;   //!
   TBranch        *b_LepSel_mcPromptGamma;   //!
   TBranch        *b_LepSel_mcUCSX;   //!
   TBranch        *b_LepSel_trIdx;   //!
   TBranch        *b_mT_3l;   //!
   TBranch        *b_mTL_3l;   //!
   TBranch        *b_mTT_3l;   //!
   TBranch        *b_mT2L_3l;   //!
   TBranch        *b_mT2T_3l;   //!
   TBranch        *b_mT_4l;   //!
   TBranch        *b_mTL_4l;   //!
   TBranch        *b_mTT_4l;   //!
   TBranch        *b_mT2L_4l;   //!
   TBranch        *b_mT2T_4l;   //!
   TBranch        *b_mT_3l_gen;   //!
   TBranch        *b_mTL_3l_gen;   //!
   TBranch        *b_mTT_3l_gen;   //!
   TBranch        *b_mT2L_3l_gen;   //!
   TBranch        *b_mT2T_3l_gen;   //!
   TBranch        *b_mT_4l_gen;   //!
   TBranch        *b_mTL_4l_gen;   //!
   TBranch        *b_mTT_4l_gen;   //!
   TBranch        *b_mT2L_4l_gen;   //!
   TBranch        *b_mT2T_4l_gen;   //!
   TBranch        *b_mT_3l_jecUp;   //!
   TBranch        *b_mTL_3l_jecUp;   //!
   TBranch        *b_mTT_3l_jecUp;   //!
   TBranch        *b_mT2L_3l_jecUp;   //!
   TBranch        *b_mT2T_3l_jecUp;   //!
   TBranch        *b_mT_4l_jecUp;   //!
   TBranch        *b_mTL_4l_jecUp;   //!
   TBranch        *b_mTT_4l_jecUp;   //!
   TBranch        *b_mT2L_4l_jecUp;   //!
   TBranch        *b_mT2T_4l_jecUp;   //!
   TBranch        *b_mT_3l_gen_jecUp;   //!
   TBranch        *b_mTL_3l_gen_jecUp;   //!
   TBranch        *b_mTT_3l_gen_jecUp;   //!
   TBranch        *b_mT2L_3l_gen_jecUp;   //!
   TBranch        *b_mT2T_3l_gen_jecUp;   //!
   TBranch        *b_mT_4l_gen_jecUp;   //!
   TBranch        *b_mTL_4l_gen_jecUp;   //!
   TBranch        *b_mTT_4l_gen_jecUp;   //!
   TBranch        *b_mT2L_4l_gen_jecUp;   //!
   TBranch        *b_mT2T_4l_gen_jecUp;   //!
   TBranch        *b_mT_3l_jecDown;   //!
   TBranch        *b_mTL_3l_jecDown;   //!
   TBranch        *b_mTT_3l_jecDown;   //!
   TBranch        *b_mT2L_3l_jecDown;   //!
   TBranch        *b_mT2T_3l_jecDown;   //!
   TBranch        *b_mT_4l_jecDown;   //!
   TBranch        *b_mTL_4l_jecDown;   //!
   TBranch        *b_mTT_4l_jecDown;   //!
   TBranch        *b_mT2L_4l_jecDown;   //!
   TBranch        *b_mT2T_4l_jecDown;   //!
   TBranch        *b_mT_3l_gen_jecDown;   //!
   TBranch        *b_mTL_3l_gen_jecDown;   //!
   TBranch        *b_mTT_3l_gen_jecDown;   //!
   TBranch        *b_mT2L_3l_gen_jecDown;   //!
   TBranch        *b_mT2T_3l_gen_jecDown;   //!
   TBranch        *b_mT_4l_gen_jecDown;   //!
   TBranch        *b_mTL_4l_gen_jecDown;   //!
   TBranch        *b_mTT_4l_gen_jecDown;   //!
   TBranch        *b_mT2L_4l_gen_jecDown;   //!
   TBranch        *b_mT2T_4l_gen_jecDown;   //!







   ClassReadSig(TTree *tree);

   virtual ~ClassReadSig();

   

   

   

   virtual void     Init(TTree *tree);

   

   

   

};

ClassReadSig::~ClassReadSig()

{

   if (!fChain) return;

   delete fChain->GetCurrentFile();

}

void ClassReadSig::Init(TTree *tree)

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



   fChain->SetBranchAddress("run", &run, &b_run);

   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);

   fChain->SetBranchAddress("evt", &evt, &b_evt);

   fChain->SetBranchAddress("isData", &isData, &b_isData);

   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);

   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);

   fChain->SetBranchAddress("nTrueInt", &nTrueInt, &b_nTrueInt);

   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);

   fChain->SetBranchAddress("rho", &rho, &b_rho);

   fChain->SetBranchAddress("rhoCN", &rhoCN, &b_rhoCN);

   fChain->SetBranchAddress("nVert", &nVert, &b_nVert);

   fChain->SetBranchAddress("nJet25", &nJet25, &b_nJet25);

   fChain->SetBranchAddress("nJet25a", &nJet25a, &b_nJet25a);

   fChain->SetBranchAddress("nBJetLoose25", &nBJetLoose25, &b_nBJetLoose25);

   fChain->SetBranchAddress("nBJetMedium25", &nBJetMedium25, &b_nBJetMedium25);

   fChain->SetBranchAddress("nBJetTight25", &nBJetTight25, &b_nBJetTight25);

   fChain->SetBranchAddress("nJet30", &nJet30, &b_nJet30);

   fChain->SetBranchAddress("nJet30a", &nJet30a, &b_nJet30a);

   fChain->SetBranchAddress("nBJetLoose30", &nBJetLoose30, &b_nBJetLoose30);

   fChain->SetBranchAddress("nBJetMedium30", &nBJetMedium30, &b_nBJetMedium30);

   fChain->SetBranchAddress("nBJetTight30", &nBJetTight30, &b_nBJetTight30);

   fChain->SetBranchAddress("nJet40", &nJet40, &b_nJet40);

   fChain->SetBranchAddress("nJet40a", &nJet40a, &b_nJet40a);

   fChain->SetBranchAddress("nBJetLoose40", &nBJetLoose40, &b_nBJetLoose40);

   fChain->SetBranchAddress("nBJetMedium40", &nBJetMedium40, &b_nBJetMedium40);

   fChain->SetBranchAddress("nBJetTight40", &nBJetTight40, &b_nBJetTight40);

   fChain->SetBranchAddress("nLepGood20", &nLepGood20, &b_nLepGood20);

   fChain->SetBranchAddress("nLepGood15", &nLepGood15, &b_nLepGood15);

   fChain->SetBranchAddress("nLepGood10", &nLepGood10, &b_nLepGood10);

   fChain->SetBranchAddress("GenSusyMScan1", &GenSusyMScan1, &b_GenSusyMScan1);

   fChain->SetBranchAddress("GenSusyMScan2", &GenSusyMScan2, &b_GenSusyMScan2);

   fChain->SetBranchAddress("GenSusyMScan3", &GenSusyMScan3, &b_GenSusyMScan3);

   fChain->SetBranchAddress("GenSusyMScan4", &GenSusyMScan4, &b_GenSusyMScan4);

   fChain->SetBranchAddress("GenSusyMGluino", &GenSusyMGluino, &b_GenSusyMGluino);

   fChain->SetBranchAddress("GenSusyMGravitino", &GenSusyMGravitino, &b_GenSusyMGravitino);

   fChain->SetBranchAddress("GenSusyMStop", &GenSusyMStop, &b_GenSusyMStop);

   fChain->SetBranchAddress("GenSusyMSbottom", &GenSusyMSbottom, &b_GenSusyMSbottom);

   fChain->SetBranchAddress("GenSusyMStop2", &GenSusyMStop2, &b_GenSusyMStop2);

   fChain->SetBranchAddress("GenSusyMSbottom2", &GenSusyMSbottom2, &b_GenSusyMSbottom2);

   fChain->SetBranchAddress("GenSusyMSquark", &GenSusyMSquark, &b_GenSusyMSquark);

   fChain->SetBranchAddress("GenSusyMNeutralino", &GenSusyMNeutralino, &b_GenSusyMNeutralino);

   fChain->SetBranchAddress("GenSusyMNeutralino2", &GenSusyMNeutralino2, &b_GenSusyMNeutralino2);

   fChain->SetBranchAddress("GenSusyMNeutralino3", &GenSusyMNeutralino3, &b_GenSusyMNeutralino3);

   fChain->SetBranchAddress("GenSusyMNeutralino4", &GenSusyMNeutralino4, &b_GenSusyMNeutralino4);

   fChain->SetBranchAddress("GenSusyMChargino", &GenSusyMChargino, &b_GenSusyMChargino);

   fChain->SetBranchAddress("GenSusyMChargino2", &GenSusyMChargino2, &b_GenSusyMChargino2);

   fChain->SetBranchAddress("lheHT", &lheHT, &b_lheHT);

   fChain->SetBranchAddress("lheHTIncoming", &lheHTIncoming, &b_lheHTIncoming);

   fChain->SetBranchAddress("htJet25", &htJet25, &b_htJet25);

   fChain->SetBranchAddress("mhtJet25", &mhtJet25, &b_mhtJet25);

   fChain->SetBranchAddress("htJet40j", &htJet40j, &b_htJet40j);

   fChain->SetBranchAddress("htJet40ja", &htJet40ja, &b_htJet40ja);

   fChain->SetBranchAddress("htJet40", &htJet40, &b_htJet40);

   fChain->SetBranchAddress("htJet40a", &htJet40a, &b_htJet40a);

   fChain->SetBranchAddress("mhtJet40", &mhtJet40, &b_mhtJet40);

   fChain->SetBranchAddress("mhtJet40a", &mhtJet40a, &b_mhtJet40a);

   fChain->SetBranchAddress("nJet25NoTau", &nJet25NoTau, &b_nJet25NoTau);

   fChain->SetBranchAddress("nBJetLoose25NoTau", &nBJetLoose25NoTau, &b_nBJetLoose25NoTau);

   fChain->SetBranchAddress("nBJetMedium25NoTau", &nBJetMedium25NoTau, &b_nBJetMedium25NoTau);

   fChain->SetBranchAddress("nBJetCMVALoose25", &nBJetCMVALoose25, &b_nBJetCMVALoose25);

   fChain->SetBranchAddress("nBJetCMVAMedium25", &nBJetCMVAMedium25, &b_nBJetCMVAMedium25);

   fChain->SetBranchAddress("nBJetCMVATight25", &nBJetCMVATight25, &b_nBJetCMVATight25);

   fChain->SetBranchAddress("nSoftBLoose25", &nSoftBLoose25, &b_nSoftBLoose25);

   fChain->SetBranchAddress("nSoftBMedium25", &nSoftBMedium25, &b_nSoftBMedium25);

   fChain->SetBranchAddress("nSoftBTight25", &nSoftBTight25, &b_nSoftBTight25);

   fChain->SetBranchAddress("nJet30NoTau", &nJet30NoTau, &b_nJet30NoTau);

   fChain->SetBranchAddress("nBJetLoose30NoTau", &nBJetLoose30NoTau, &b_nBJetLoose30NoTau);

   fChain->SetBranchAddress("nBJetMedium30NoTau", &nBJetMedium30NoTau, &b_nBJetMedium30NoTau);

   fChain->SetBranchAddress("nJet40NoTau", &nJet40NoTau, &b_nJet40NoTau);

   fChain->SetBranchAddress("nBJetLoose40NoTau", &nBJetLoose40NoTau, &b_nBJetLoose40NoTau);

   fChain->SetBranchAddress("nBJetMedium40NoTau", &nBJetMedium40NoTau, &b_nBJetMedium40NoTau);

   fChain->SetBranchAddress("nBJetCMVALoose40", &nBJetCMVALoose40, &b_nBJetCMVALoose40);

   fChain->SetBranchAddress("nBJetCMVAMedium40", &nBJetCMVAMedium40, &b_nBJetCMVAMedium40);

   fChain->SetBranchAddress("nBJetCMVATight40", &nBJetCMVATight40, &b_nBJetCMVATight40);

   fChain->SetBranchAddress("mZ1", &mZ1, &b_mZ1);

   fChain->SetBranchAddress("mZ1SFSS", &mZ1SFSS, &b_mZ1SFSS);

   fChain->SetBranchAddress("minMllSFOS", &minMllSFOS, &b_minMllSFOS);

   fChain->SetBranchAddress("maxMllSFOS", &maxMllSFOS, &b_maxMllSFOS);

   fChain->SetBranchAddress("minMllAFOS", &minMllAFOS, &b_minMllAFOS);

   fChain->SetBranchAddress("maxMllAFOS", &maxMllAFOS, &b_maxMllAFOS);

   fChain->SetBranchAddress("minMllAFSS", &minMllAFSS, &b_minMllAFSS);

   fChain->SetBranchAddress("maxMllAFSS", &maxMllAFSS, &b_maxMllAFSS);

   fChain->SetBranchAddress("minMllAFAS", &minMllAFAS, &b_minMllAFAS);

   fChain->SetBranchAddress("maxMllAFAS", &maxMllAFAS, &b_maxMllAFAS);

   fChain->SetBranchAddress("m2l", &m2l, &b_m2l);

   fChain->SetBranchAddress("minDrllAFSS", &minDrllAFSS, &b_minDrllAFSS);

   fChain->SetBranchAddress("maxDrllAFSS", &maxDrllAFSS, &b_maxDrllAFSS);

   fChain->SetBranchAddress("minDrllAFOS", &minDrllAFOS, &b_minDrllAFOS);

   fChain->SetBranchAddress("maxDrllAFOS", &maxDrllAFOS, &b_maxDrllAFOS);

   fChain->SetBranchAddress("mZ2", &mZ2, &b_mZ2);

   fChain->SetBranchAddress("m3l", &m3l, &b_m3l);

   fChain->SetBranchAddress("m4l", &m4l, &b_m4l);

   fChain->SetBranchAddress("pt2l", &pt2l, &b_pt2l);

   fChain->SetBranchAddress("pt3l", &pt3l, &b_pt3l);

   fChain->SetBranchAddress("pt4l", &pt4l, &b_pt4l);

   fChain->SetBranchAddress("ht3l", &ht3l, &b_ht3l);

   fChain->SetBranchAddress("ht4l", &ht4l, &b_ht4l);

   fChain->SetBranchAddress("q3l", &q3l, &b_q3l);

   fChain->SetBranchAddress("q4l", &q4l, &b_q4l);

   fChain->SetBranchAddress("minMWjj", &minMWjj, &b_minMWjj);

   fChain->SetBranchAddress("minMWjjPt", &minMWjjPt, &b_minMWjjPt);

   fChain->SetBranchAddress("bestMWjj", &bestMWjj, &b_bestMWjj);

   fChain->SetBranchAddress("bestMWjjPt", &bestMWjjPt, &b_bestMWjjPt);

   fChain->SetBranchAddress("bestMTopHad", &bestMTopHad, &b_bestMTopHad);

   fChain->SetBranchAddress("bestMTopHadPt", &bestMTopHadPt, &b_bestMTopHadPt);

   fChain->SetBranchAddress("GenHiggsDecayMode", &GenHiggsDecayMode, &b_GenHiggsDecayMode);

   fChain->SetBranchAddress("Flag_badChargedHadronFilter", &Flag_badChargedHadronFilter, &b_Flag_badChargedHadronFilter);

   fChain->SetBranchAddress("Flag_badMuonFilter", &Flag_badMuonFilter, &b_Flag_badMuonFilter);

   fChain->SetBranchAddress("nPFLep5", &nPFLep5, &b_nPFLep5);

   fChain->SetBranchAddress("nPFHad10", &nPFHad10, &b_nPFHad10);

   fChain->SetBranchAddress("met_trkPt", &met_trkPt, &b_met_trkPt);

   fChain->SetBranchAddress("met_trkPhi", &met_trkPhi, &b_met_trkPhi);

   fChain->SetBranchAddress("nISR", &nISR, &b_nISR);

   fChain->SetBranchAddress("met_pt", &met_pt, &b_met_pt);

   fChain->SetBranchAddress("met_eta", &met_eta, &b_met_eta);

   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);

   fChain->SetBranchAddress("met_mass", &met_mass, &b_met_mass);

   fChain->SetBranchAddress("met_sumEt", &met_sumEt, &b_met_sumEt);

   fChain->SetBranchAddress("met_rawPt", &met_rawPt, &b_met_rawPt);

   fChain->SetBranchAddress("met_rawPhi", &met_rawPhi, &b_met_rawPhi);

   fChain->SetBranchAddress("met_rawSumEt", &met_rawSumEt, &b_met_rawSumEt);

   fChain->SetBranchAddress("met_genPt", &met_genPt, &b_met_genPt);

   fChain->SetBranchAddress("met_genPhi", &met_genPhi, &b_met_genPhi);

   fChain->SetBranchAddress("met_genEta", &met_genEta, &b_met_genEta);

   fChain->SetBranchAddress("met_jecUp_pt", &met_jecUp_pt, &b_met_jecUp_pt);

   fChain->SetBranchAddress("met_jecUp_eta", &met_jecUp_eta, &b_met_jecUp_eta);

   fChain->SetBranchAddress("met_jecUp_phi", &met_jecUp_phi, &b_met_jecUp_phi);

   fChain->SetBranchAddress("met_jecUp_mass", &met_jecUp_mass, &b_met_jecUp_mass);

   fChain->SetBranchAddress("met_jecUp_sumEt", &met_jecUp_sumEt, &b_met_jecUp_sumEt);

   fChain->SetBranchAddress("met_jecUp_rawPt", &met_jecUp_rawPt, &b_met_jecUp_rawPt);

   fChain->SetBranchAddress("met_jecUp_rawPhi", &met_jecUp_rawPhi, &b_met_jecUp_rawPhi);

   fChain->SetBranchAddress("met_jecUp_rawSumEt", &met_jecUp_rawSumEt, &b_met_jecUp_rawSumEt);

   fChain->SetBranchAddress("met_jecUp_genPt", &met_jecUp_genPt, &b_met_jecUp_genPt);

   fChain->SetBranchAddress("met_jecUp_genPhi", &met_jecUp_genPhi, &b_met_jecUp_genPhi);

   fChain->SetBranchAddress("met_jecUp_genEta", &met_jecUp_genEta, &b_met_jecUp_genEta);

   fChain->SetBranchAddress("met_jecDown_pt", &met_jecDown_pt, &b_met_jecDown_pt);

   fChain->SetBranchAddress("met_jecDown_eta", &met_jecDown_eta, &b_met_jecDown_eta);

   fChain->SetBranchAddress("met_jecDown_phi", &met_jecDown_phi, &b_met_jecDown_phi);

   fChain->SetBranchAddress("met_jecDown_mass", &met_jecDown_mass, &b_met_jecDown_mass);

   fChain->SetBranchAddress("met_jecDown_sumEt", &met_jecDown_sumEt, &b_met_jecDown_sumEt);

   fChain->SetBranchAddress("met_jecDown_rawPt", &met_jecDown_rawPt, &b_met_jecDown_rawPt);

   fChain->SetBranchAddress("met_jecDown_rawPhi", &met_jecDown_rawPhi, &b_met_jecDown_rawPhi);

   fChain->SetBranchAddress("met_jecDown_rawSumEt", &met_jecDown_rawSumEt, &b_met_jecDown_rawSumEt);

   fChain->SetBranchAddress("met_jecDown_genPt", &met_jecDown_genPt, &b_met_jecDown_genPt);

   fChain->SetBranchAddress("met_jecDown_genPhi", &met_jecDown_genPhi, &b_met_jecDown_genPhi);

   fChain->SetBranchAddress("met_jecDown_genEta", &met_jecDown_genEta, &b_met_jecDown_genEta);

   fChain->SetBranchAddress("nSV", &nSV, &b_nSV);

   fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);

   fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);

   fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);

   fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);

   fChain->SetBranchAddress("SV_charge", SV_charge, &b_SV_charge);

   fChain->SetBranchAddress("SV_ntracks", SV_ntracks, &b_SV_ntracks);

   fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);

   fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);

   fChain->SetBranchAddress("SV_dxy", SV_dxy, &b_SV_dxy);

   fChain->SetBranchAddress("SV_edxy", SV_edxy, &b_SV_edxy);

   fChain->SetBranchAddress("SV_ip3d", SV_ip3d, &b_SV_ip3d);

   fChain->SetBranchAddress("SV_eip3d", SV_eip3d, &b_SV_eip3d);

   fChain->SetBranchAddress("SV_sip3d", SV_sip3d, &b_SV_sip3d);

   fChain->SetBranchAddress("SV_cosTheta", SV_cosTheta, &b_SV_cosTheta);

   fChain->SetBranchAddress("SV_mva", SV_mva, &b_SV_mva);

   fChain->SetBranchAddress("SV_jetPt", SV_jetPt, &b_SV_jetPt);

   fChain->SetBranchAddress("SV_jetEta", SV_jetEta, &b_SV_jetEta);

   fChain->SetBranchAddress("SV_jetDR", SV_jetDR, &b_SV_jetDR);

   fChain->SetBranchAddress("SV_jetBTagCSV", SV_jetBTagCSV, &b_SV_jetBTagCSV);

   fChain->SetBranchAddress("SV_jetBTagCMVA", SV_jetBTagCMVA, &b_SV_jetBTagCMVA);

   fChain->SetBranchAddress("SV_mcMatchNTracks", SV_mcMatchNTracks, &b_SV_mcMatchNTracks);

   fChain->SetBranchAddress("SV_mcMatchNTracksHF", SV_mcMatchNTracksHF, &b_SV_mcMatchNTracksHF);

   fChain->SetBranchAddress("SV_mcMatchFraction", SV_mcMatchFraction, &b_SV_mcMatchFraction);

   fChain->SetBranchAddress("SV_mcFlavFirst", SV_mcFlavFirst, &b_SV_mcFlavFirst);

   fChain->SetBranchAddress("SV_mcFlavHeaviest", SV_mcFlavHeaviest, &b_SV_mcFlavHeaviest);

   fChain->SetBranchAddress("SV_maxDxyTracks", SV_maxDxyTracks, &b_SV_maxDxyTracks);

   fChain->SetBranchAddress("SV_secDxyTracks", SV_secDxyTracks, &b_SV_secDxyTracks);

   fChain->SetBranchAddress("SV_maxD3dTracks", SV_maxD3dTracks, &b_SV_maxD3dTracks);

   fChain->SetBranchAddress("SV_secD3dTracks", SV_secD3dTracks, &b_SV_secD3dTracks);

   fChain->SetBranchAddress("nLepOther", &nLepOther, &b_nLepOther);

   fChain->SetBranchAddress("LepOther_charge", LepOther_charge, &b_LepOther_charge);

   fChain->SetBranchAddress("LepOther_tightId", LepOther_tightId, &b_LepOther_tightId);

   fChain->SetBranchAddress("LepOther_hltId", LepOther_hltId, &b_LepOther_hltId);

   fChain->SetBranchAddress("LepOther_eleCutIdCSA14_25ns_v1", LepOther_eleCutIdCSA14_25ns_v1, &b_LepOther_eleCutIdCSA14_25ns_v1);

   fChain->SetBranchAddress("LepOther_eleCutIdCSA14_50ns_v1", LepOther_eleCutIdCSA14_50ns_v1, &b_LepOther_eleCutIdCSA14_50ns_v1);

   fChain->SetBranchAddress("LepOther_eleCutIdSpring15_25ns_v1", LepOther_eleCutIdSpring15_25ns_v1, &b_LepOther_eleCutIdSpring15_25ns_v1);

   fChain->SetBranchAddress("LepOther_dxy", LepOther_dxy, &b_LepOther_dxy);

   fChain->SetBranchAddress("LepOther_dz", LepOther_dz, &b_LepOther_dz);

   fChain->SetBranchAddress("LepOther_edxy", LepOther_edxy, &b_LepOther_edxy);

   fChain->SetBranchAddress("LepOther_edz", LepOther_edz, &b_LepOther_edz);

   fChain->SetBranchAddress("LepOther_ip3d", LepOther_ip3d, &b_LepOther_ip3d);

   fChain->SetBranchAddress("LepOther_sip3d", LepOther_sip3d, &b_LepOther_sip3d);

   fChain->SetBranchAddress("LepOther_convVeto", LepOther_convVeto, &b_LepOther_convVeto);

   fChain->SetBranchAddress("LepOther_lostHits", LepOther_lostHits, &b_LepOther_lostHits);

   fChain->SetBranchAddress("LepOther_relIso03", LepOther_relIso03, &b_LepOther_relIso03);

   fChain->SetBranchAddress("LepOther_relIso04", LepOther_relIso04, &b_LepOther_relIso04);

   fChain->SetBranchAddress("LepOther_miniRelIso", LepOther_miniRelIso, &b_LepOther_miniRelIso);

   fChain->SetBranchAddress("LepOther_relIsoAn04", LepOther_relIsoAn04, &b_LepOther_relIsoAn04);

   fChain->SetBranchAddress("LepOther_tightCharge", LepOther_tightCharge, &b_LepOther_tightCharge);

   fChain->SetBranchAddress("LepOther_mcMatchId", LepOther_mcMatchId, &b_LepOther_mcMatchId);

   fChain->SetBranchAddress("LepOther_mcMatchAny", LepOther_mcMatchAny, &b_LepOther_mcMatchAny);

   fChain->SetBranchAddress("LepOther_mcMatchTau", LepOther_mcMatchTau, &b_LepOther_mcMatchTau);

   fChain->SetBranchAddress("LepOther_mcPt", LepOther_mcPt, &b_LepOther_mcPt);

   fChain->SetBranchAddress("LepOther_mediumMuonId", LepOther_mediumMuonId, &b_LepOther_mediumMuonId);

   fChain->SetBranchAddress("LepOther_ICHEPsoftMuonId", LepOther_ICHEPsoftMuonId, &b_LepOther_ICHEPsoftMuonId);

   fChain->SetBranchAddress("LepOther_ICHEPmediumMuonId", LepOther_ICHEPmediumMuonId, &b_LepOther_ICHEPmediumMuonId);

   fChain->SetBranchAddress("LepOther_pdgId", LepOther_pdgId, &b_LepOther_pdgId);

   fChain->SetBranchAddress("LepOther_pt", LepOther_pt, &b_LepOther_pt);

   fChain->SetBranchAddress("LepOther_eta", LepOther_eta, &b_LepOther_eta);

   fChain->SetBranchAddress("LepOther_phi", LepOther_phi, &b_LepOther_phi);

   fChain->SetBranchAddress("LepOther_mass", LepOther_mass, &b_LepOther_mass);

   fChain->SetBranchAddress("LepOther_mvaIdSpring15", LepOther_mvaIdSpring15, &b_LepOther_mvaIdSpring15);

   fChain->SetBranchAddress("LepOther_mvaTTH", LepOther_mvaTTH, &b_LepOther_mvaTTH);

   fChain->SetBranchAddress("LepOther_mvaSUSY", LepOther_mvaSUSY, &b_LepOther_mvaSUSY);

   fChain->SetBranchAddress("LepOther_jetPtRatiov1", LepOther_jetPtRatiov1, &b_LepOther_jetPtRatiov1);

   fChain->SetBranchAddress("LepOther_jetPtRelv1", LepOther_jetPtRelv1, &b_LepOther_jetPtRelv1);

   fChain->SetBranchAddress("LepOther_jetPtRatiov2", LepOther_jetPtRatiov2, &b_LepOther_jetPtRatiov2);

   fChain->SetBranchAddress("LepOther_jetPtRelv2", LepOther_jetPtRelv2, &b_LepOther_jetPtRelv2);

   fChain->SetBranchAddress("LepOther_jetBTagCSV", LepOther_jetBTagCSV, &b_LepOther_jetBTagCSV);

   fChain->SetBranchAddress("LepOther_jetBTagCMVA", LepOther_jetBTagCMVA, &b_LepOther_jetBTagCMVA);

   fChain->SetBranchAddress("LepOther_jetDR", LepOther_jetDR, &b_LepOther_jetDR);

   fChain->SetBranchAddress("LepOther_r9", LepOther_r9, &b_LepOther_r9);

   fChain->SetBranchAddress("LepOther_softMuonId2016", LepOther_softMuonId2016, &b_LepOther_softMuonId2016);

   fChain->SetBranchAddress("LepOther_mediumMuonID2016", LepOther_mediumMuonID2016, &b_LepOther_mediumMuonID2016);

   fChain->SetBranchAddress("LepOther_tightChargeFix", LepOther_tightChargeFix, &b_LepOther_tightChargeFix);

   fChain->SetBranchAddress("LepOther_muonTrackType", LepOther_muonTrackType, &b_LepOther_muonTrackType);

   fChain->SetBranchAddress("LepOther_chargeConsistency", LepOther_chargeConsistency, &b_LepOther_chargeConsistency);

   fChain->SetBranchAddress("LepOther_ptErrTk", LepOther_ptErrTk, &b_LepOther_ptErrTk);

   fChain->SetBranchAddress("LepOther_mvaIdSpring16HZZ", LepOther_mvaIdSpring16HZZ, &b_LepOther_mvaIdSpring16HZZ);

   fChain->SetBranchAddress("LepOther_mvaIdSpring16GP", LepOther_mvaIdSpring16GP, &b_LepOther_mvaIdSpring16GP);

   fChain->SetBranchAddress("nDiscLep", &nDiscLep, &b_nDiscLep);

   fChain->SetBranchAddress("DiscLep_charge", &DiscLep_charge, &b_DiscLep_charge);

   fChain->SetBranchAddress("DiscLep_tightId", &DiscLep_tightId, &b_DiscLep_tightId);

   fChain->SetBranchAddress("DiscLep_hltId", &DiscLep_hltId, &b_DiscLep_hltId);

   fChain->SetBranchAddress("DiscLep_eleCutIdCSA14_25ns_v1", &DiscLep_eleCutIdCSA14_25ns_v1, &b_DiscLep_eleCutIdCSA14_25ns_v1);

   fChain->SetBranchAddress("DiscLep_eleCutIdCSA14_50ns_v1", &DiscLep_eleCutIdCSA14_50ns_v1, &b_DiscLep_eleCutIdCSA14_50ns_v1);

   fChain->SetBranchAddress("DiscLep_eleCutIdSpring15_25ns_v1", &DiscLep_eleCutIdSpring15_25ns_v1, &b_DiscLep_eleCutIdSpring15_25ns_v1);

   fChain->SetBranchAddress("DiscLep_dxy", &DiscLep_dxy, &b_DiscLep_dxy);

   fChain->SetBranchAddress("DiscLep_dz", &DiscLep_dz, &b_DiscLep_dz);

   fChain->SetBranchAddress("DiscLep_edxy", &DiscLep_edxy, &b_DiscLep_edxy);

   fChain->SetBranchAddress("DiscLep_edz", &DiscLep_edz, &b_DiscLep_edz);

   fChain->SetBranchAddress("DiscLep_ip3d", &DiscLep_ip3d, &b_DiscLep_ip3d);

   fChain->SetBranchAddress("DiscLep_sip3d", &DiscLep_sip3d, &b_DiscLep_sip3d);

   fChain->SetBranchAddress("DiscLep_convVeto", &DiscLep_convVeto, &b_DiscLep_convVeto);

   fChain->SetBranchAddress("DiscLep_lostHits", &DiscLep_lostHits, &b_DiscLep_lostHits);

   fChain->SetBranchAddress("DiscLep_relIso03", &DiscLep_relIso03, &b_DiscLep_relIso03);

   fChain->SetBranchAddress("DiscLep_relIso04", &DiscLep_relIso04, &b_DiscLep_relIso04);

   fChain->SetBranchAddress("DiscLep_miniRelIso", &DiscLep_miniRelIso, &b_DiscLep_miniRelIso);

   fChain->SetBranchAddress("DiscLep_relIsoAn04", &DiscLep_relIsoAn04, &b_DiscLep_relIsoAn04);

   fChain->SetBranchAddress("DiscLep_tightCharge", &DiscLep_tightCharge, &b_DiscLep_tightCharge);

   fChain->SetBranchAddress("DiscLep_mcMatchId", &DiscLep_mcMatchId, &b_DiscLep_mcMatchId);

   fChain->SetBranchAddress("DiscLep_mcMatchAny", &DiscLep_mcMatchAny, &b_DiscLep_mcMatchAny);

   fChain->SetBranchAddress("DiscLep_mcMatchTau", &DiscLep_mcMatchTau, &b_DiscLep_mcMatchTau);

   fChain->SetBranchAddress("DiscLep_mcPt", &DiscLep_mcPt, &b_DiscLep_mcPt);

   fChain->SetBranchAddress("DiscLep_mediumMuonId", &DiscLep_mediumMuonId, &b_DiscLep_mediumMuonId);

   fChain->SetBranchAddress("DiscLep_ICHEPsoftMuonId", &DiscLep_ICHEPsoftMuonId, &b_DiscLep_ICHEPsoftMuonId);

   fChain->SetBranchAddress("DiscLep_ICHEPmediumMuonId", &DiscLep_ICHEPmediumMuonId, &b_DiscLep_ICHEPmediumMuonId);

   fChain->SetBranchAddress("DiscLep_pdgId", &DiscLep_pdgId, &b_DiscLep_pdgId);

   fChain->SetBranchAddress("DiscLep_pt", &DiscLep_pt, &b_DiscLep_pt);

   fChain->SetBranchAddress("DiscLep_eta", &DiscLep_eta, &b_DiscLep_eta);

   fChain->SetBranchAddress("DiscLep_phi", &DiscLep_phi, &b_DiscLep_phi);

   fChain->SetBranchAddress("DiscLep_mass", &DiscLep_mass, &b_DiscLep_mass);

   fChain->SetBranchAddress("DiscLep_mvaIdSpring15", &DiscLep_mvaIdSpring15, &b_DiscLep_mvaIdSpring15);

   fChain->SetBranchAddress("DiscLep_mvaTTH", &DiscLep_mvaTTH, &b_DiscLep_mvaTTH);

   fChain->SetBranchAddress("DiscLep_mvaSUSY", &DiscLep_mvaSUSY, &b_DiscLep_mvaSUSY);

   fChain->SetBranchAddress("DiscLep_jetPtRatiov1", &DiscLep_jetPtRatiov1, &b_DiscLep_jetPtRatiov1);

   fChain->SetBranchAddress("DiscLep_jetPtRelv1", &DiscLep_jetPtRelv1, &b_DiscLep_jetPtRelv1);

   fChain->SetBranchAddress("DiscLep_jetPtRatiov2", &DiscLep_jetPtRatiov2, &b_DiscLep_jetPtRatiov2);

   fChain->SetBranchAddress("DiscLep_jetPtRelv2", &DiscLep_jetPtRelv2, &b_DiscLep_jetPtRelv2);

   fChain->SetBranchAddress("DiscLep_jetBTagCSV", &DiscLep_jetBTagCSV, &b_DiscLep_jetBTagCSV);

   fChain->SetBranchAddress("DiscLep_jetBTagCMVA", &DiscLep_jetBTagCMVA, &b_DiscLep_jetBTagCMVA);

   fChain->SetBranchAddress("DiscLep_jetDR", &DiscLep_jetDR, &b_DiscLep_jetDR);

   fChain->SetBranchAddress("DiscLep_r9", &DiscLep_r9, &b_DiscLep_r9);

   fChain->SetBranchAddress("DiscLep_softMuonId2016", &DiscLep_softMuonId2016, &b_DiscLep_softMuonId2016);

   fChain->SetBranchAddress("DiscLep_mediumMuonID2016", &DiscLep_mediumMuonID2016, &b_DiscLep_mediumMuonID2016);

   fChain->SetBranchAddress("DiscLep_tightChargeFix", &DiscLep_tightChargeFix, &b_DiscLep_tightChargeFix);

   fChain->SetBranchAddress("DiscLep_muonTrackType", &DiscLep_muonTrackType, &b_DiscLep_muonTrackType);

   fChain->SetBranchAddress("DiscLep_chargeConsistency", &DiscLep_chargeConsistency, &b_DiscLep_chargeConsistency);

   fChain->SetBranchAddress("DiscLep_ptErrTk", &DiscLep_ptErrTk, &b_DiscLep_ptErrTk);

   fChain->SetBranchAddress("DiscLep_mvaIdSpring16HZZ", &DiscLep_mvaIdSpring16HZZ, &b_DiscLep_mvaIdSpring16HZZ);

   fChain->SetBranchAddress("DiscLep_mvaIdSpring16GP", &DiscLep_mvaIdSpring16GP, &b_DiscLep_mvaIdSpring16GP);

   fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);

   fChain->SetBranchAddress("GenPart_motherId", GenPart_motherId, &b_GenPart_motherId);

   fChain->SetBranchAddress("GenPart_grandmotherId", GenPart_grandmotherId, &b_GenPart_grandmotherId);

   fChain->SetBranchAddress("GenPart_sourceId", GenPart_sourceId, &b_GenPart_sourceId);

   fChain->SetBranchAddress("GenPart_charge", GenPart_charge, &b_GenPart_charge);

   fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);

   fChain->SetBranchAddress("GenPart_isPromptHard", GenPart_isPromptHard, &b_GenPart_isPromptHard);

   fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);

   fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);

   fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);

   fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);

   fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);

   fChain->SetBranchAddress("GenPart_motherIndex", GenPart_motherIndex, &b_GenPart_motherIndex);

   fChain->SetBranchAddress("nDiscJet", &nDiscJet, &b_nDiscJet);

   fChain->SetBranchAddress("DiscJet_pt", DiscJet_pt, &b_DiscJet_pt);

   fChain->SetBranchAddress("DiscJet_eta", DiscJet_eta, &b_DiscJet_eta);

   fChain->SetBranchAddress("DiscJet_phi", DiscJet_phi, &b_DiscJet_phi);

   fChain->SetBranchAddress("DiscJet_mass", DiscJet_mass, &b_DiscJet_mass);

   fChain->SetBranchAddress("DiscJet_etaetaMoment", DiscJet_etaetaMoment, &b_DiscJet_etaetaMoment);

   fChain->SetBranchAddress("DiscJet_phiphiMoment", DiscJet_phiphiMoment, &b_DiscJet_phiphiMoment);

   fChain->SetBranchAddress("DiscJet_btagCSV", DiscJet_btagCSV, &b_DiscJet_btagCSV);

   fChain->SetBranchAddress("DiscJet_mcFlavour", DiscJet_mcFlavour, &b_DiscJet_mcFlavour);

   fChain->SetBranchAddress("DiscJet_partonFlavour", DiscJet_partonFlavour, &b_DiscJet_partonFlavour);

   fChain->SetBranchAddress("nTauOther", &nTauOther, &b_nTauOther);

   fChain->SetBranchAddress("TauOther_charge", TauOther_charge, &b_TauOther_charge);

   fChain->SetBranchAddress("TauOther_decayMode", TauOther_decayMode, &b_TauOther_decayMode);

   fChain->SetBranchAddress("TauOther_idDecayMode", TauOther_idDecayMode, &b_TauOther_idDecayMode);

   fChain->SetBranchAddress("TauOther_idDecayModeNewDMs", TauOther_idDecayModeNewDMs, &b_TauOther_idDecayModeNewDMs);

   fChain->SetBranchAddress("TauOther_dxy", TauOther_dxy, &b_TauOther_dxy);

   fChain->SetBranchAddress("TauOther_dz", TauOther_dz, &b_TauOther_dz);

   fChain->SetBranchAddress("TauOther_idMVA", TauOther_idMVA, &b_TauOther_idMVA);

   fChain->SetBranchAddress("TauOther_idMVANewDM", TauOther_idMVANewDM, &b_TauOther_idMVANewDM);

   fChain->SetBranchAddress("TauOther_idCI3hit", TauOther_idCI3hit, &b_TauOther_idCI3hit);

   fChain->SetBranchAddress("TauOther_idAntiMu", TauOther_idAntiMu, &b_TauOther_idAntiMu);

   fChain->SetBranchAddress("TauOther_idAntiE", TauOther_idAntiE, &b_TauOther_idAntiE);

   fChain->SetBranchAddress("TauOther_isoCI3hit", TauOther_isoCI3hit, &b_TauOther_isoCI3hit);

   fChain->SetBranchAddress("TauOther_mcMatchId", TauOther_mcMatchId, &b_TauOther_mcMatchId);

   fChain->SetBranchAddress("TauOther_pdgId", TauOther_pdgId, &b_TauOther_pdgId);

   fChain->SetBranchAddress("TauOther_pt", TauOther_pt, &b_TauOther_pt);

   fChain->SetBranchAddress("TauOther_eta", TauOther_eta, &b_TauOther_eta);

   fChain->SetBranchAddress("TauOther_phi", TauOther_phi, &b_TauOther_phi);

   fChain->SetBranchAddress("TauOther_mass", TauOther_mass, &b_TauOther_mass);

   fChain->SetBranchAddress("TauOther_idMVAdR03", TauOther_idMVAdR03, &b_TauOther_idMVAdR03);

   fChain->SetBranchAddress("TauOther_mcUCSXMatchId", TauOther_mcUCSXMatchId, &b_TauOther_mcUCSXMatchId);

   fChain->SetBranchAddress("nLepGood", &nLepGood, &b_nLepGood);

   fChain->SetBranchAddress("LepGood_mvaIdSpring15", LepGood_mvaIdSpring15, &b_LepGood_mvaIdSpring15);

   fChain->SetBranchAddress("LepGood_mvaTTH", LepGood_mvaTTH, &b_LepGood_mvaTTH);

   fChain->SetBranchAddress("LepGood_mvaSUSY", LepGood_mvaSUSY, &b_LepGood_mvaSUSY);

   fChain->SetBranchAddress("LepGood_jetPtRatiov1", LepGood_jetPtRatiov1, &b_LepGood_jetPtRatiov1);

   fChain->SetBranchAddress("LepGood_jetPtRelv1", LepGood_jetPtRelv1, &b_LepGood_jetPtRelv1);

   fChain->SetBranchAddress("LepGood_jetPtRatiov2", LepGood_jetPtRatiov2, &b_LepGood_jetPtRatiov2);

   fChain->SetBranchAddress("LepGood_jetPtRelv2", LepGood_jetPtRelv2, &b_LepGood_jetPtRelv2);

   fChain->SetBranchAddress("LepGood_jetBTagCSV", LepGood_jetBTagCSV, &b_LepGood_jetBTagCSV);

   fChain->SetBranchAddress("LepGood_jetBTagCMVA", LepGood_jetBTagCMVA, &b_LepGood_jetBTagCMVA);

   fChain->SetBranchAddress("LepGood_jetDR", LepGood_jetDR, &b_LepGood_jetDR);

   fChain->SetBranchAddress("LepGood_r9", LepGood_r9, &b_LepGood_r9);

   fChain->SetBranchAddress("LepGood_softMuonId2016", LepGood_softMuonId2016, &b_LepGood_softMuonId2016);

   fChain->SetBranchAddress("LepGood_mediumMuonID2016", LepGood_mediumMuonID2016, &b_LepGood_mediumMuonID2016);

   fChain->SetBranchAddress("LepGood_tightChargeFix", LepGood_tightChargeFix, &b_LepGood_tightChargeFix);

   fChain->SetBranchAddress("LepGood_muonTrackType", LepGood_muonTrackType, &b_LepGood_muonTrackType);

   fChain->SetBranchAddress("LepGood_chargeConsistency", LepGood_chargeConsistency, &b_LepGood_chargeConsistency);

   fChain->SetBranchAddress("LepGood_ptErrTk", LepGood_ptErrTk, &b_LepGood_ptErrTk);

   fChain->SetBranchAddress("LepGood_mvaIdSpring16HZZ", LepGood_mvaIdSpring16HZZ, &b_LepGood_mvaIdSpring16HZZ);

   fChain->SetBranchAddress("LepGood_mvaIdSpring16GP", LepGood_mvaIdSpring16GP, &b_LepGood_mvaIdSpring16GP);

   fChain->SetBranchAddress("LepGood_charge", LepGood_charge, &b_LepGood_charge);

   fChain->SetBranchAddress("LepGood_tightId", LepGood_tightId, &b_LepGood_tightId);

   fChain->SetBranchAddress("LepGood_hltId", LepGood_hltId, &b_LepGood_hltId);

   fChain->SetBranchAddress("LepGood_eleCutIdCSA14_25ns_v1", LepGood_eleCutIdCSA14_25ns_v1, &b_LepGood_eleCutIdCSA14_25ns_v1);

   fChain->SetBranchAddress("LepGood_eleCutIdCSA14_50ns_v1", LepGood_eleCutIdCSA14_50ns_v1, &b_LepGood_eleCutIdCSA14_50ns_v1);

   fChain->SetBranchAddress("LepGood_eleCutIdSpring15_25ns_v1", LepGood_eleCutIdSpring15_25ns_v1, &b_LepGood_eleCutIdSpring15_25ns_v1);

   fChain->SetBranchAddress("LepGood_dxy", LepGood_dxy, &b_LepGood_dxy);

   fChain->SetBranchAddress("LepGood_dz", LepGood_dz, &b_LepGood_dz);

   fChain->SetBranchAddress("LepGood_edxy", LepGood_edxy, &b_LepGood_edxy);

   fChain->SetBranchAddress("LepGood_edz", LepGood_edz, &b_LepGood_edz);

   fChain->SetBranchAddress("LepGood_ip3d", LepGood_ip3d, &b_LepGood_ip3d);

   fChain->SetBranchAddress("LepGood_sip3d", LepGood_sip3d, &b_LepGood_sip3d);

   fChain->SetBranchAddress("LepGood_convVeto", LepGood_convVeto, &b_LepGood_convVeto);

   fChain->SetBranchAddress("LepGood_lostHits", LepGood_lostHits, &b_LepGood_lostHits);

   fChain->SetBranchAddress("LepGood_relIso03", LepGood_relIso03, &b_LepGood_relIso03);

   fChain->SetBranchAddress("LepGood_relIso04", LepGood_relIso04, &b_LepGood_relIso04);

   fChain->SetBranchAddress("LepGood_miniRelIso", LepGood_miniRelIso, &b_LepGood_miniRelIso);

   fChain->SetBranchAddress("LepGood_relIsoAn04", LepGood_relIsoAn04, &b_LepGood_relIsoAn04);

   fChain->SetBranchAddress("LepGood_tightCharge", LepGood_tightCharge, &b_LepGood_tightCharge);

   fChain->SetBranchAddress("LepGood_mcMatchId", LepGood_mcMatchId, &b_LepGood_mcMatchId);

   fChain->SetBranchAddress("LepGood_mcMatchAny", LepGood_mcMatchAny, &b_LepGood_mcMatchAny);

   fChain->SetBranchAddress("LepGood_mcMatchTau", LepGood_mcMatchTau, &b_LepGood_mcMatchTau);

   fChain->SetBranchAddress("LepGood_mcPt", LepGood_mcPt, &b_LepGood_mcPt);

   fChain->SetBranchAddress("LepGood_mediumMuonId", LepGood_mediumMuonId, &b_LepGood_mediumMuonId);

   fChain->SetBranchAddress("LepGood_ICHEPsoftMuonId", LepGood_ICHEPsoftMuonId, &b_LepGood_ICHEPsoftMuonId);

   fChain->SetBranchAddress("LepGood_ICHEPmediumMuonId", LepGood_ICHEPmediumMuonId, &b_LepGood_ICHEPmediumMuonId);

   fChain->SetBranchAddress("LepGood_pdgId", LepGood_pdgId, &b_LepGood_pdgId);

   fChain->SetBranchAddress("LepGood_pt", LepGood_pt, &b_LepGood_pt);

   fChain->SetBranchAddress("LepGood_eta", LepGood_eta, &b_LepGood_eta);

   fChain->SetBranchAddress("LepGood_phi", LepGood_phi, &b_LepGood_phi);

   fChain->SetBranchAddress("LepGood_mass", LepGood_mass, &b_LepGood_mass);

   fChain->SetBranchAddress("LepGood_looseIdOnly", LepGood_looseIdOnly, &b_LepGood_looseIdOnly);

   fChain->SetBranchAddress("LepGood_chargedHadRelIso03", LepGood_chargedHadRelIso03, &b_LepGood_chargedHadRelIso03);

   fChain->SetBranchAddress("LepGood_chargedHadRelIso04", LepGood_chargedHadRelIso04, &b_LepGood_chargedHadRelIso04);

   fChain->SetBranchAddress("LepGood_softMuonId", LepGood_softMuonId, &b_LepGood_softMuonId);

   fChain->SetBranchAddress("LepGood_pfMuonId", LepGood_pfMuonId, &b_LepGood_pfMuonId);

   fChain->SetBranchAddress("LepGood_eleCutId2012", LepGood_eleCutId2012, &b_LepGood_eleCutId2012);

   fChain->SetBranchAddress("LepGood_trackerLayers", LepGood_trackerLayers, &b_LepGood_trackerLayers);

   fChain->SetBranchAddress("LepGood_pixelLayers", LepGood_pixelLayers, &b_LepGood_pixelLayers);

   fChain->SetBranchAddress("LepGood_trackerHits", LepGood_trackerHits, &b_LepGood_trackerHits);

   fChain->SetBranchAddress("LepGood_lostOuterHits", LepGood_lostOuterHits, &b_LepGood_lostOuterHits);

   fChain->SetBranchAddress("LepGood_innerTrackValidHitFraction", LepGood_innerTrackValidHitFraction, &b_LepGood_innerTrackValidHitFraction);

   fChain->SetBranchAddress("LepGood_innerTrackChi2", LepGood_innerTrackChi2, &b_LepGood_innerTrackChi2);

   fChain->SetBranchAddress("LepGood_nStations", LepGood_nStations, &b_LepGood_nStations);

   fChain->SetBranchAddress("LepGood_caloCompatibility", LepGood_caloCompatibility, &b_LepGood_caloCompatibility);

   fChain->SetBranchAddress("LepGood_globalTrackChi2", LepGood_globalTrackChi2, &b_LepGood_globalTrackChi2);

   fChain->SetBranchAddress("LepGood_trkKink", LepGood_trkKink, &b_LepGood_trkKink);

   fChain->SetBranchAddress("LepGood_segmentCompatibility", LepGood_segmentCompatibility, &b_LepGood_segmentCompatibility);

   fChain->SetBranchAddress("LepGood_chi2LocalPosition", LepGood_chi2LocalPosition, &b_LepGood_chi2LocalPosition);

   fChain->SetBranchAddress("LepGood_chi2LocalMomentum", LepGood_chi2LocalMomentum, &b_LepGood_chi2LocalMomentum);

   fChain->SetBranchAddress("LepGood_glbTrackProbability", LepGood_glbTrackProbability, &b_LepGood_glbTrackProbability);

   fChain->SetBranchAddress("LepGood_TMOneStationTightMuonId", LepGood_TMOneStationTightMuonId, &b_LepGood_TMOneStationTightMuonId);

   fChain->SetBranchAddress("LepGood_trackHighPurityMuon", LepGood_trackHighPurityMuon, &b_LepGood_trackHighPurityMuon);

   fChain->SetBranchAddress("LepGood_isGlobalMuon", LepGood_isGlobalMuon, &b_LepGood_isGlobalMuon);

   fChain->SetBranchAddress("LepGood_isTrackerMuon", LepGood_isTrackerMuon, &b_LepGood_isTrackerMuon);

   fChain->SetBranchAddress("LepGood_sigmaIEtaIEta", LepGood_sigmaIEtaIEta, &b_LepGood_sigmaIEtaIEta);

   fChain->SetBranchAddress("LepGood_dEtaScTrkIn", LepGood_dEtaScTrkIn, &b_LepGood_dEtaScTrkIn);

   fChain->SetBranchAddress("LepGood_dPhiScTrkIn", LepGood_dPhiScTrkIn, &b_LepGood_dPhiScTrkIn);

   fChain->SetBranchAddress("LepGood_hadronicOverEm", LepGood_hadronicOverEm, &b_LepGood_hadronicOverEm);

   fChain->SetBranchAddress("LepGood_eInvMinusPInv", LepGood_eInvMinusPInv, &b_LepGood_eInvMinusPInv);

   fChain->SetBranchAddress("LepGood_eInvMinusPInv_tkMom", LepGood_eInvMinusPInv_tkMom, &b_LepGood_eInvMinusPInv_tkMom);

   fChain->SetBranchAddress("LepGood_etaSc", LepGood_etaSc, &b_LepGood_etaSc);

   fChain->SetBranchAddress("LepGood_mcMatchPdgId", LepGood_mcMatchPdgId, &b_LepGood_mcMatchPdgId);

   fChain->SetBranchAddress("LepGood_miniRelIsoCharged", LepGood_miniRelIsoCharged, &b_LepGood_miniRelIsoCharged);

   fChain->SetBranchAddress("LepGood_miniRelIsoNeutral", LepGood_miniRelIsoNeutral, &b_LepGood_miniRelIsoNeutral);

   fChain->SetBranchAddress("LepGood_jetNDauChargedMVASel", LepGood_jetNDauChargedMVASel, &b_LepGood_jetNDauChargedMVASel);

   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1", LepGood_jetCorrFactor_L1, &b_LepGood_jetCorrFactor_L1);

   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1L2", LepGood_jetCorrFactor_L1L2, &b_LepGood_jetCorrFactor_L1L2);

   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1L2L3", LepGood_jetCorrFactor_L1L2L3, &b_LepGood_jetCorrFactor_L1L2L3);

   fChain->SetBranchAddress("LepGood_jetCorrFactor_L1L2L3Res", LepGood_jetCorrFactor_L1L2L3Res, &b_LepGood_jetCorrFactor_L1L2L3Res);

   fChain->SetBranchAddress("LepGood_ecalPFClusterIso", LepGood_ecalPFClusterIso, &b_LepGood_ecalPFClusterIso);

   fChain->SetBranchAddress("LepGood_hcalPFClusterIso", LepGood_hcalPFClusterIso, &b_LepGood_hcalPFClusterIso);

   fChain->SetBranchAddress("LepGood_dr03TkSumPt", LepGood_dr03TkSumPt, &b_LepGood_dr03TkSumPt);

   fChain->SetBranchAddress("LepGood_trackIso", LepGood_trackIso, &b_LepGood_trackIso);

   fChain->SetBranchAddress("LepGood_idEmuTTH", LepGood_idEmuTTH, &b_LepGood_idEmuTTH);

   fChain->SetBranchAddress("LepGood_idEmuRA5", LepGood_idEmuRA5, &b_LepGood_idEmuRA5);

   fChain->SetBranchAddress("LepGood_idIsoEmuRA5", LepGood_idIsoEmuRA5, &b_LepGood_idIsoEmuRA5);

   fChain->SetBranchAddress("LepGood_mcPrompt", LepGood_mcPrompt, &b_LepGood_mcPrompt);

   fChain->SetBranchAddress("LepGood_mcPromptTau", LepGood_mcPromptTau, &b_LepGood_mcPromptTau);

   fChain->SetBranchAddress("LepGood_mcPromptGamma", LepGood_mcPromptGamma, &b_LepGood_mcPromptGamma);

   fChain->SetBranchAddress("LepGood_mcGamma", LepGood_mcGamma, &b_LepGood_mcGamma);

   fChain->SetBranchAddress("LepGood_RelIsoMIV03", LepGood_RelIsoMIV03, &b_LepGood_RelIsoMIV03);

   fChain->SetBranchAddress("LepGood_RelIsoMIVCharged03", LepGood_RelIsoMIVCharged03, &b_LepGood_RelIsoMIVCharged03);

   fChain->SetBranchAddress("LepGood_RelIsoMIVNeutral03", LepGood_RelIsoMIVNeutral03, &b_LepGood_RelIsoMIVNeutral03);

   fChain->SetBranchAddress("LepGood_RelIsoMIV04", LepGood_RelIsoMIV04, &b_LepGood_RelIsoMIV04);

   fChain->SetBranchAddress("LepGood_RelIsoMIVCharged04", LepGood_RelIsoMIVCharged04, &b_LepGood_RelIsoMIVCharged04);

   fChain->SetBranchAddress("LepGood_RelIsoMIVNeutral04", LepGood_RelIsoMIVNeutral04, &b_LepGood_RelIsoMIVNeutral04);

   fChain->SetBranchAddress("LepGood_jetPtRelHv2", LepGood_jetPtRelHv2, &b_LepGood_jetPtRelHv2);

   fChain->SetBranchAddress("LepGood_isoRelH04", LepGood_isoRelH04, &b_LepGood_isoRelH04);

   fChain->SetBranchAddress("LepGood_jetBasedRelIsoCharged", LepGood_jetBasedRelIsoCharged, &b_LepGood_jetBasedRelIsoCharged);

   fChain->SetBranchAddress("LepGood_hasSV", LepGood_hasSV, &b_LepGood_hasSV);

   fChain->SetBranchAddress("LepGood_svSip3d", LepGood_svSip3d, &b_LepGood_svSip3d);

   fChain->SetBranchAddress("LepGood_svRedPt", LepGood_svRedPt, &b_LepGood_svRedPt);

   fChain->SetBranchAddress("LepGood_svMass", LepGood_svMass, &b_LepGood_svMass);

   fChain->SetBranchAddress("LepGood_svNTracks", LepGood_svNTracks, &b_LepGood_svNTracks);

   fChain->SetBranchAddress("LepGood_energySc", LepGood_energySc, &b_LepGood_energySc);

   fChain->SetBranchAddress("LepGood_mcUCSXMatchId", LepGood_mcUCSXMatchId, &b_LepGood_mcUCSXMatchId);

   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_pt", LepGood_jetLepAwareJEC_pt, &b_LepGood_jetLepAwareJEC_pt);

   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_eta", LepGood_jetLepAwareJEC_eta, &b_LepGood_jetLepAwareJEC_eta);

   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_phi", LepGood_jetLepAwareJEC_phi, &b_LepGood_jetLepAwareJEC_phi);

   fChain->SetBranchAddress("LepGood_jetLepAwareJEC_energy", LepGood_jetLepAwareJEC_energy, &b_LepGood_jetLepAwareJEC_energy);

   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);

   fChain->SetBranchAddress("Jet_mcMatchFlav", Jet_mcMatchFlav, &b_Jet_mcMatchFlav);

   fChain->SetBranchAddress("Jet_charge", Jet_charge, &b_Jet_charge);

   fChain->SetBranchAddress("Jet_ctagCsvL", Jet_ctagCsvL, &b_Jet_ctagCsvL);

   fChain->SetBranchAddress("Jet_ctagCsvB", Jet_ctagCsvB, &b_Jet_ctagCsvB);

   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);

   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);

   fChain->SetBranchAddress("Jet_ptd", Jet_ptd, &b_Jet_ptd);

   fChain->SetBranchAddress("Jet_axis2", Jet_axis2, &b_Jet_axis2);

   fChain->SetBranchAddress("Jet_mult", Jet_mult, &b_Jet_mult);

   fChain->SetBranchAddress("Jet_partonId", Jet_partonId, &b_Jet_partonId);

   fChain->SetBranchAddress("Jet_partonMotherId", Jet_partonMotherId, &b_Jet_partonMotherId);

   fChain->SetBranchAddress("Jet_nLeptons", Jet_nLeptons, &b_Jet_nLeptons);

   fChain->SetBranchAddress("Jet_id", Jet_id, &b_Jet_id);

   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);

   fChain->SetBranchAddress("Jet_btagCSV", Jet_btagCSV, &b_Jet_btagCSV);

   fChain->SetBranchAddress("Jet_btagCMVA", Jet_btagCMVA, &b_Jet_btagCMVA);

   fChain->SetBranchAddress("Jet_rawPt", Jet_rawPt, &b_Jet_rawPt);

   fChain->SetBranchAddress("Jet_mcPt", Jet_mcPt, &b_Jet_mcPt);

   fChain->SetBranchAddress("Jet_mcFlavour", Jet_mcFlavour, &b_Jet_mcFlavour);

   fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);

   fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);

   fChain->SetBranchAddress("Jet_mcMatchId", Jet_mcMatchId, &b_Jet_mcMatchId);

   fChain->SetBranchAddress("Jet_corr_JECUp", Jet_corr_JECUp, &b_Jet_corr_JECUp);

   fChain->SetBranchAddress("Jet_corr_JECDown", Jet_corr_JECDown, &b_Jet_corr_JECDown);

   fChain->SetBranchAddress("Jet_corr", Jet_corr, &b_Jet_corr);

   fChain->SetBranchAddress("Jet_corr_JERUp", Jet_corr_JERUp, &b_Jet_corr_JERUp);

   fChain->SetBranchAddress("Jet_corr_JERDown", Jet_corr_JERDown, &b_Jet_corr_JERDown);

   fChain->SetBranchAddress("Jet_corr_JER", Jet_corr_JER, &b_Jet_corr_JER);

   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);

   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);

   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);

   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);

   fChain->SetBranchAddress("Jet_CorrFactor_L1", Jet_CorrFactor_L1, &b_Jet_CorrFactor_L1);

   fChain->SetBranchAddress("Jet_CorrFactor_L1L2", Jet_CorrFactor_L1L2, &b_Jet_CorrFactor_L1L2);

   fChain->SetBranchAddress("Jet_CorrFactor_L1L2L3", Jet_CorrFactor_L1L2L3, &b_Jet_CorrFactor_L1L2L3);

   fChain->SetBranchAddress("Jet_CorrFactor_L1L2L3Res", Jet_CorrFactor_L1L2L3Res, &b_Jet_CorrFactor_L1L2L3Res);

   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);

   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);

   fChain->SetBranchAddress("ngenLep", &ngenLep, &b_ngenLep);

   fChain->SetBranchAddress("genLep_motherId", genLep_motherId, &b_genLep_motherId);

   fChain->SetBranchAddress("genLep_grandmotherId", genLep_grandmotherId, &b_genLep_grandmotherId);

   fChain->SetBranchAddress("genLep_sourceId", genLep_sourceId, &b_genLep_sourceId);

   fChain->SetBranchAddress("genLep_charge", genLep_charge, &b_genLep_charge);

   fChain->SetBranchAddress("genLep_status", genLep_status, &b_genLep_status);

   fChain->SetBranchAddress("genLep_isPromptHard", genLep_isPromptHard, &b_genLep_isPromptHard);

   fChain->SetBranchAddress("genLep_pdgId", genLep_pdgId, &b_genLep_pdgId);

   fChain->SetBranchAddress("genLep_pt", genLep_pt, &b_genLep_pt);

   fChain->SetBranchAddress("genLep_eta", genLep_eta, &b_genLep_eta);

   fChain->SetBranchAddress("genLep_phi", genLep_phi, &b_genLep_phi);

   fChain->SetBranchAddress("genLep_mass", genLep_mass, &b_genLep_mass);

   fChain->SetBranchAddress("genLep_motherIndex", genLep_motherIndex, &b_genLep_motherIndex);

   fChain->SetBranchAddress("nLHEweight", &nLHEweight, &b_nLHEweight);

   fChain->SetBranchAddress("LHEweight_id", LHEweight_id, &b_LHEweight_id);

   fChain->SetBranchAddress("LHEweight_wgt", LHEweight_wgt, &b_LHEweight_wgt);

   fChain->SetBranchAddress("nTauGood", &nTauGood, &b_nTauGood);

   fChain->SetBranchAddress("TauGood_charge", TauGood_charge, &b_TauGood_charge);

   fChain->SetBranchAddress("TauGood_decayMode", TauGood_decayMode, &b_TauGood_decayMode);

   fChain->SetBranchAddress("TauGood_idDecayMode", TauGood_idDecayMode, &b_TauGood_idDecayMode);

   fChain->SetBranchAddress("TauGood_idDecayModeNewDMs", TauGood_idDecayModeNewDMs, &b_TauGood_idDecayModeNewDMs);

   fChain->SetBranchAddress("TauGood_dxy", TauGood_dxy, &b_TauGood_dxy);

   fChain->SetBranchAddress("TauGood_dz", TauGood_dz, &b_TauGood_dz);

   fChain->SetBranchAddress("TauGood_idMVA", TauGood_idMVA, &b_TauGood_idMVA);

   fChain->SetBranchAddress("TauGood_idMVANewDM", TauGood_idMVANewDM, &b_TauGood_idMVANewDM);

   fChain->SetBranchAddress("TauGood_idCI3hit", TauGood_idCI3hit, &b_TauGood_idCI3hit);

   fChain->SetBranchAddress("TauGood_idAntiMu", TauGood_idAntiMu, &b_TauGood_idAntiMu);

   fChain->SetBranchAddress("TauGood_idAntiE", TauGood_idAntiE, &b_TauGood_idAntiE);

   fChain->SetBranchAddress("TauGood_isoCI3hit", TauGood_isoCI3hit, &b_TauGood_isoCI3hit);

   fChain->SetBranchAddress("TauGood_mcMatchId", TauGood_mcMatchId, &b_TauGood_mcMatchId);

   fChain->SetBranchAddress("TauGood_pdgId", TauGood_pdgId, &b_TauGood_pdgId);

   fChain->SetBranchAddress("TauGood_pt", TauGood_pt, &b_TauGood_pt);

   fChain->SetBranchAddress("TauGood_eta", TauGood_eta, &b_TauGood_eta);

   fChain->SetBranchAddress("TauGood_phi", TauGood_phi, &b_TauGood_phi);

   fChain->SetBranchAddress("TauGood_mass", TauGood_mass, &b_TauGood_mass);

   fChain->SetBranchAddress("TauGood_idMVAdR03", TauGood_idMVAdR03, &b_TauGood_idMVAdR03);

   fChain->SetBranchAddress("TauGood_mcUCSXMatchId", TauGood_mcUCSXMatchId, &b_TauGood_mcUCSXMatchId);

   fChain->SetBranchAddress("ngenTau", &ngenTau, &b_ngenTau);

   fChain->SetBranchAddress("genTau_motherId", genTau_motherId, &b_genTau_motherId);

   fChain->SetBranchAddress("genTau_grandmotherId", genTau_grandmotherId, &b_genTau_grandmotherId);

   fChain->SetBranchAddress("genTau_sourceId", genTau_sourceId, &b_genTau_sourceId);

   fChain->SetBranchAddress("genTau_charge", genTau_charge, &b_genTau_charge);

   fChain->SetBranchAddress("genTau_status", genTau_status, &b_genTau_status);

   fChain->SetBranchAddress("genTau_isPromptHard", genTau_isPromptHard, &b_genTau_isPromptHard);

   fChain->SetBranchAddress("genTau_pdgId", genTau_pdgId, &b_genTau_pdgId);

   fChain->SetBranchAddress("genTau_pt", genTau_pt, &b_genTau_pt);

   fChain->SetBranchAddress("genTau_eta", genTau_eta, &b_genTau_eta);

   fChain->SetBranchAddress("genTau_phi", genTau_phi, &b_genTau_phi);

   fChain->SetBranchAddress("genTau_mass", genTau_mass, &b_genTau_mass);

   fChain->SetBranchAddress("genTau_motherIndex", genTau_motherIndex, &b_genTau_motherIndex);

   fChain->SetBranchAddress("nGenTop", &nGenTop, &b_nGenTop);

   fChain->SetBranchAddress("GenTop_pdgId", &GenTop_pdgId, &b_GenTop_pdgId);

   fChain->SetBranchAddress("GenTop_pt", &GenTop_pt, &b_GenTop_pt);

   fChain->SetBranchAddress("GenTop_eta", &GenTop_eta, &b_GenTop_eta);

   fChain->SetBranchAddress("GenTop_phi", &GenTop_phi, &b_GenTop_phi);

   fChain->SetBranchAddress("GenTop_mass", &GenTop_mass, &b_GenTop_mass);

   fChain->SetBranchAddress("GenTop_charge", &GenTop_charge, &b_GenTop_charge);

   fChain->SetBranchAddress("GenTop_status", &GenTop_status, &b_GenTop_status);

   fChain->SetBranchAddress("GenTop_isPromptHard", &GenTop_isPromptHard, &b_GenTop_isPromptHard);

   fChain->SetBranchAddress("nisoTrack", &nisoTrack, &b_nisoTrack);

   fChain->SetBranchAddress("isoTrack_pdgId", isoTrack_pdgId, &b_isoTrack_pdgId);

   fChain->SetBranchAddress("isoTrack_pt", isoTrack_pt, &b_isoTrack_pt);

   fChain->SetBranchAddress("isoTrack_eta", isoTrack_eta, &b_isoTrack_eta);

   fChain->SetBranchAddress("isoTrack_phi", isoTrack_phi, &b_isoTrack_phi);

   fChain->SetBranchAddress("isoTrack_mass", isoTrack_mass, &b_isoTrack_mass);

   fChain->SetBranchAddress("isoTrack_charge", isoTrack_charge, &b_isoTrack_charge);

   fChain->SetBranchAddress("isoTrack_dz", isoTrack_dz, &b_isoTrack_dz);

   fChain->SetBranchAddress("isoTrack_absIso", isoTrack_absIso, &b_isoTrack_absIso);

   fChain->SetBranchAddress("isoTrack_relIsoAn04", isoTrack_relIsoAn04, &b_isoTrack_relIsoAn04);

   fChain->SetBranchAddress("isoTrack_mcMatchId", isoTrack_mcMatchId, &b_isoTrack_mcMatchId);

   fChain->SetBranchAddress("ngenLepFromTau", &ngenLepFromTau, &b_ngenLepFromTau);

   fChain->SetBranchAddress("genLepFromTau_motherId", genLepFromTau_motherId, &b_genLepFromTau_motherId);

   fChain->SetBranchAddress("genLepFromTau_grandmotherId", genLepFromTau_grandmotherId, &b_genLepFromTau_grandmotherId);

   fChain->SetBranchAddress("genLepFromTau_sourceId", genLepFromTau_sourceId, &b_genLepFromTau_sourceId);

   fChain->SetBranchAddress("genLepFromTau_charge", genLepFromTau_charge, &b_genLepFromTau_charge);

   fChain->SetBranchAddress("genLepFromTau_status", genLepFromTau_status, &b_genLepFromTau_status);

   fChain->SetBranchAddress("genLepFromTau_isPromptHard", genLepFromTau_isPromptHard, &b_genLepFromTau_isPromptHard);

   fChain->SetBranchAddress("genLepFromTau_pdgId", genLepFromTau_pdgId, &b_genLepFromTau_pdgId);

   fChain->SetBranchAddress("genLepFromTau_pt", genLepFromTau_pt, &b_genLepFromTau_pt);

   fChain->SetBranchAddress("genLepFromTau_eta", genLepFromTau_eta, &b_genLepFromTau_eta);

   fChain->SetBranchAddress("genLepFromTau_phi", genLepFromTau_phi, &b_genLepFromTau_phi);

   fChain->SetBranchAddress("genLepFromTau_mass", genLepFromTau_mass, &b_genLepFromTau_mass);

   fChain->SetBranchAddress("genLepFromTau_motherIndex", genLepFromTau_motherIndex, &b_genLepFromTau_motherIndex);

   fChain->SetBranchAddress("nJetFwd", &nJetFwd, &b_nJetFwd);

   fChain->SetBranchAddress("JetFwd_area", &JetFwd_area, &b_JetFwd_area);

   fChain->SetBranchAddress("JetFwd_qgl", &JetFwd_qgl, &b_JetFwd_qgl);

   fChain->SetBranchAddress("JetFwd_ptd", &JetFwd_ptd, &b_JetFwd_ptd);

   fChain->SetBranchAddress("JetFwd_axis2", &JetFwd_axis2, &b_JetFwd_axis2);

   fChain->SetBranchAddress("JetFwd_mult", &JetFwd_mult, &b_JetFwd_mult);

   fChain->SetBranchAddress("JetFwd_partonId", &JetFwd_partonId, &b_JetFwd_partonId);

   fChain->SetBranchAddress("JetFwd_partonMotherId", &JetFwd_partonMotherId, &b_JetFwd_partonMotherId);

   fChain->SetBranchAddress("JetFwd_nLeptons", &JetFwd_nLeptons, &b_JetFwd_nLeptons);

   fChain->SetBranchAddress("JetFwd_id", &JetFwd_id, &b_JetFwd_id);

   fChain->SetBranchAddress("JetFwd_puId", &JetFwd_puId, &b_JetFwd_puId);

   fChain->SetBranchAddress("JetFwd_btagCSV", &JetFwd_btagCSV, &b_JetFwd_btagCSV);

   fChain->SetBranchAddress("JetFwd_btagCMVA", &JetFwd_btagCMVA, &b_JetFwd_btagCMVA);

   fChain->SetBranchAddress("JetFwd_rawPt", &JetFwd_rawPt, &b_JetFwd_rawPt);

   fChain->SetBranchAddress("JetFwd_mcPt", &JetFwd_mcPt, &b_JetFwd_mcPt);

   fChain->SetBranchAddress("JetFwd_mcFlavour", &JetFwd_mcFlavour, &b_JetFwd_mcFlavour);

   fChain->SetBranchAddress("JetFwd_partonFlavour", &JetFwd_partonFlavour, &b_JetFwd_partonFlavour);

   fChain->SetBranchAddress("JetFwd_hadronFlavour", &JetFwd_hadronFlavour, &b_JetFwd_hadronFlavour);

   fChain->SetBranchAddress("JetFwd_mcMatchId", &JetFwd_mcMatchId, &b_JetFwd_mcMatchId);

   fChain->SetBranchAddress("JetFwd_corr_JECUp", &JetFwd_corr_JECUp, &b_JetFwd_corr_JECUp);

   fChain->SetBranchAddress("JetFwd_corr_JECDown", &JetFwd_corr_JECDown, &b_JetFwd_corr_JECDown);

   fChain->SetBranchAddress("JetFwd_corr", &JetFwd_corr, &b_JetFwd_corr);

   fChain->SetBranchAddress("JetFwd_corr_JERUp", &JetFwd_corr_JERUp, &b_JetFwd_corr_JERUp);

   fChain->SetBranchAddress("JetFwd_corr_JERDown", &JetFwd_corr_JERDown, &b_JetFwd_corr_JERDown);

   fChain->SetBranchAddress("JetFwd_corr_JER", &JetFwd_corr_JER, &b_JetFwd_corr_JER);

   fChain->SetBranchAddress("JetFwd_pt", &JetFwd_pt, &b_JetFwd_pt);

   fChain->SetBranchAddress("JetFwd_eta", &JetFwd_eta, &b_JetFwd_eta);

   fChain->SetBranchAddress("JetFwd_phi", &JetFwd_phi, &b_JetFwd_phi);

   fChain->SetBranchAddress("JetFwd_mass", &JetFwd_mass, &b_JetFwd_mass);

   fChain->SetBranchAddress("JetFwd_mcMatchFlav", &JetFwd_mcMatchFlav, &b_JetFwd_mcMatchFlav);

   fChain->SetBranchAddress("JetFwd_charge", &JetFwd_charge, &b_JetFwd_charge);

   fChain->SetBranchAddress("JetFwd_ctagCsvL", &JetFwd_ctagCsvL, &b_JetFwd_ctagCsvL);

   fChain->SetBranchAddress("JetFwd_ctagCsvB", &JetFwd_ctagCsvB, &b_JetFwd_ctagCsvB);

   fChain->SetBranchAddress("nPhoGood", &nPhoGood, &b_nPhoGood);

   fChain->SetBranchAddress("PhoGood_etaSc", PhoGood_etaSc, &b_PhoGood_etaSc);

   fChain->SetBranchAddress("PhoGood_idCutBased", PhoGood_idCutBased, &b_PhoGood_idCutBased);

   fChain->SetBranchAddress("PhoGood_hOverE", PhoGood_hOverE, &b_PhoGood_hOverE);

   fChain->SetBranchAddress("PhoGood_r9", PhoGood_r9, &b_PhoGood_r9);

   fChain->SetBranchAddress("PhoGood_sigmaIetaIeta", PhoGood_sigmaIetaIeta, &b_PhoGood_sigmaIetaIeta);

   fChain->SetBranchAddress("PhoGood_chHadIso04", PhoGood_chHadIso04, &b_PhoGood_chHadIso04);

   fChain->SetBranchAddress("PhoGood_chHadIso", PhoGood_chHadIso, &b_PhoGood_chHadIso);

   fChain->SetBranchAddress("PhoGood_phIso", PhoGood_phIso, &b_PhoGood_phIso);

   fChain->SetBranchAddress("PhoGood_neuHadIso", PhoGood_neuHadIso, &b_PhoGood_neuHadIso);

   fChain->SetBranchAddress("PhoGood_relIso", PhoGood_relIso, &b_PhoGood_relIso);

   fChain->SetBranchAddress("PhoGood_mcMatchId", PhoGood_mcMatchId, &b_PhoGood_mcMatchId);

   fChain->SetBranchAddress("PhoGood_mcPt", PhoGood_mcPt, &b_PhoGood_mcPt);

   fChain->SetBranchAddress("PhoGood_pdgId", PhoGood_pdgId, &b_PhoGood_pdgId);

   fChain->SetBranchAddress("PhoGood_pt", PhoGood_pt, &b_PhoGood_pt);

   fChain->SetBranchAddress("PhoGood_eta", PhoGood_eta, &b_PhoGood_eta);

   fChain->SetBranchAddress("PhoGood_phi", PhoGood_phi, &b_PhoGood_phi);

   fChain->SetBranchAddress("PhoGood_mass", PhoGood_mass, &b_PhoGood_mass);

   fChain->SetBranchAddress("PhoGood_genIso04", PhoGood_genIso04, &b_PhoGood_genIso04);

   fChain->SetBranchAddress("PhoGood_genIso03", PhoGood_genIso03, &b_PhoGood_genIso03);

   fChain->SetBranchAddress("PhoGood_chHadIsoRC04", PhoGood_chHadIsoRC04, &b_PhoGood_chHadIsoRC04);

   fChain->SetBranchAddress("PhoGood_chHadIsoRC", PhoGood_chHadIsoRC, &b_PhoGood_chHadIsoRC);

   fChain->SetBranchAddress("PhoGood_drMinParton", PhoGood_drMinParton, &b_PhoGood_drMinParton);

   //friend tree version-1
   //fChain->SetBranchAddress("nLepGood", &nLepGood, &b_nLepGood);
   fChain->SetBranchAddress("LepGood_conePt", LepGood_conePt, &b_LepGood_conePt);
   fChain->SetBranchAddress("nLepLoose_Mini", &nLepLoose_Mini, &b_nLepLoose_Mini);
   fChain->SetBranchAddress("iL_Mini", iL_Mini, &b_iL_Mini);
   fChain->SetBranchAddress("nLepLooseVeto_Mini", &nLepLooseVeto_Mini, &b_nLepLooseVeto_Mini);
   fChain->SetBranchAddress("iLV_Mini", iLV_Mini, &b_iLV_Mini);
   fChain->SetBranchAddress("nLepCleaning_Mini", &nLepCleaning_Mini, &b_nLepCleaning_Mini);
   fChain->SetBranchAddress("iC_Mini", iC_Mini, &b_iC_Mini);
   fChain->SetBranchAddress("nLepCleaningVeto_Mini", &nLepCleaningVeto_Mini, &b_nLepCleaningVeto_Mini);
   fChain->SetBranchAddress("iCV_Mini", iCV_Mini, &b_iCV_Mini);
   fChain->SetBranchAddress("nLepFO_Mini", &nLepFO_Mini, &b_nLepFO_Mini);
   fChain->SetBranchAddress("iF_Mini", iF_Mini, &b_iF_Mini);
   fChain->SetBranchAddress("nLepFOVeto_Mini", &nLepFOVeto_Mini, &b_nLepFOVeto_Mini);
   fChain->SetBranchAddress("iFV_Mini", iFV_Mini, &b_iFV_Mini);
   fChain->SetBranchAddress("nLepTight_Mini", &nLepTight_Mini, &b_nLepTight_Mini);
   fChain->SetBranchAddress("iT_Mini", iT_Mini, &b_iT_Mini);
   fChain->SetBranchAddress("nLepTightVeto_Mini", &nLepTightVeto_Mini, &b_nLepTightVeto_Mini);
   fChain->SetBranchAddress("iTV_Mini", iTV_Mini, &b_iTV_Mini);
   fChain->SetBranchAddress("LepGood_isLoose_Mini", LepGood_isLoose_Mini, &b_LepGood_isLoose_Mini);
   fChain->SetBranchAddress("LepGood_isLooseVeto_Mini", LepGood_isLooseVeto_Mini, &b_LepGood_isLooseVeto_Mini);
   fChain->SetBranchAddress("LepGood_isCleaning_Mini", LepGood_isCleaning_Mini, &b_LepGood_isCleaning_Mini);
   fChain->SetBranchAddress("LepGood_isCleaningVeto_Mini", LepGood_isCleaningVeto_Mini, &b_LepGood_isCleaningVeto_Mini);
   fChain->SetBranchAddress("LepGood_isFO_Mini", LepGood_isFO_Mini, &b_LepGood_isFO_Mini);
   fChain->SetBranchAddress("LepGood_isFOVeto_Mini", LepGood_isFOVeto_Mini, &b_LepGood_isFOVeto_Mini);
   fChain->SetBranchAddress("LepGood_isTight_Mini", LepGood_isTight_Mini, &b_LepGood_isTight_Mini);
   fChain->SetBranchAddress("LepGood_isTightVeto_Mini", LepGood_isTightVeto_Mini, &b_LepGood_isTightVeto_Mini);
   fChain->SetBranchAddress("mZ1_Mini", &mZ1_Mini, &b_mZ1_Mini);
   fChain->SetBranchAddress("minMllAFAS_Mini", &minMllAFAS_Mini, &b_minMllAFAS_Mini);
   fChain->SetBranchAddress("minMllAFOS_Mini", &minMllAFOS_Mini, &b_minMllAFOS_Mini);
   fChain->SetBranchAddress("minMllAFSS_Mini", &minMllAFSS_Mini, &b_minMllAFSS_Mini);
   fChain->SetBranchAddress("minMllSFOS_Mini", &minMllSFOS_Mini, &b_minMllSFOS_Mini);
   fChain->SetBranchAddress("nTauSel_Mini", &nTauSel_Mini, &b_nTauSel_Mini);
   fChain->SetBranchAddress("nTightTauSel_Mini", &nTightTauSel_Mini, &b_nTightTauSel_Mini);
   fChain->SetBranchAddress("iTauSel_Mini", iTauSel_Mini, &b_iTauSel_Mini);
   fChain->SetBranchAddress("TauSel_Mini_pt", TauSel_Mini_pt, &b_TauSel_Mini_pt);
   fChain->SetBranchAddress("TauSel_Mini_eta", TauSel_Mini_eta, &b_TauSel_Mini_eta);
   fChain->SetBranchAddress("TauSel_Mini_phi", TauSel_Mini_phi, &b_TauSel_Mini_phi);
   fChain->SetBranchAddress("TauSel_Mini_mass", TauSel_Mini_mass, &b_TauSel_Mini_mass);
   fChain->SetBranchAddress("TauSel_Mini_reclTauId", TauSel_Mini_reclTauId, &b_TauSel_Mini_reclTauId);
   fChain->SetBranchAddress("TauSel_Mini_mcMatchId", TauSel_Mini_mcMatchId, &b_TauSel_Mini_mcMatchId);
   fChain->SetBranchAddress("TauSel_Mini_pdgId", TauSel_Mini_pdgId, &b_TauSel_Mini_pdgId);
   fChain->SetBranchAddress("nJetSel_Mini", &nJetSel_Mini, &b_nJetSel_Mini);
   fChain->SetBranchAddress("iJSel_Mini", iJSel_Mini, &b_iJSel_Mini);
   fChain->SetBranchAddress("nDiscJetSel_Mini", &nDiscJetSel_Mini, &b_nDiscJetSel_Mini);
   fChain->SetBranchAddress("iDiscJSel_Mini", iDiscJSel_Mini, &b_iDiscJSel_Mini);
   fChain->SetBranchAddress("nJet30_Mini", &nJet30_Mini, &b_nJet30_Mini);
   fChain->SetBranchAddress("htJet30j_Mini", &htJet30j_Mini, &b_htJet30j_Mini);
   fChain->SetBranchAddress("mhtJet30_Mini", &mhtJet30_Mini, &b_mhtJet30_Mini);
   fChain->SetBranchAddress("nBJetLoose30_Mini", &nBJetLoose30_Mini, &b_nBJetLoose30_Mini);
   fChain->SetBranchAddress("nBJetMedium30_Mini", &nBJetMedium30_Mini, &b_nBJetMedium30_Mini);
   fChain->SetBranchAddress("nJet25_Mini", &nJet25_Mini, &b_nJet25_Mini);
   fChain->SetBranchAddress("htJet25j_Mini", &htJet25j_Mini, &b_htJet25j_Mini);
   fChain->SetBranchAddress("mhtJet25_Mini", &mhtJet25_Mini, &b_mhtJet25_Mini);
   fChain->SetBranchAddress("nBJetLoose25_Mini", &nBJetLoose25_Mini, &b_nBJetLoose25_Mini);
   fChain->SetBranchAddress("nBJetMedium25_Mini", &nBJetMedium25_Mini, &b_nBJetMedium25_Mini);
   fChain->SetBranchAddress("nJetSel_Mini_jecUp", &nJetSel_Mini_jecUp, &b_nJetSel_Mini_jecUp);
   fChain->SetBranchAddress("iJSel_Mini_jecUp", iJSel_Mini_jecUp, &b_iJSel_Mini_jecUp);
   fChain->SetBranchAddress("nDiscJetSel_Mini_jecUp", &nDiscJetSel_Mini_jecUp, &b_nDiscJetSel_Mini_jecUp);
   fChain->SetBranchAddress("iDiscJSel_Mini_jecUp", iDiscJSel_Mini_jecUp, &b_iDiscJSel_Mini_jecUp);
   fChain->SetBranchAddress("nJet30_Mini_jecUp", &nJet30_Mini_jecUp, &b_nJet30_Mini_jecUp);
   fChain->SetBranchAddress("htJet30j_Mini_jecUp", &htJet30j_Mini_jecUp, &b_htJet30j_Mini_jecUp);
   fChain->SetBranchAddress("mhtJet30_Mini_jecUp", &mhtJet30_Mini_jecUp, &b_mhtJet30_Mini_jecUp);
   fChain->SetBranchAddress("nBJetLoose30_Mini_jecUp", &nBJetLoose30_Mini_jecUp, &b_nBJetLoose30_Mini_jecUp);
   fChain->SetBranchAddress("nBJetMedium30_Mini_jecUp", &nBJetMedium30_Mini_jecUp, &b_nBJetMedium30_Mini_jecUp);
   fChain->SetBranchAddress("nJet25_Mini_jecUp", &nJet25_Mini_jecUp, &b_nJet25_Mini_jecUp);
   fChain->SetBranchAddress("htJet25j_Mini_jecUp", &htJet25j_Mini_jecUp, &b_htJet25j_Mini_jecUp);
   fChain->SetBranchAddress("mhtJet25_Mini_jecUp", &mhtJet25_Mini_jecUp, &b_mhtJet25_Mini_jecUp);
   fChain->SetBranchAddress("nBJetLoose25_Mini_jecUp", &nBJetLoose25_Mini_jecUp, &b_nBJetLoose25_Mini_jecUp);
   fChain->SetBranchAddress("nBJetMedium25_Mini_jecUp", &nBJetMedium25_Mini_jecUp, &b_nBJetMedium25_Mini_jecUp);
   fChain->SetBranchAddress("nJetSel_Mini_jecDown", &nJetSel_Mini_jecDown, &b_nJetSel_Mini_jecDown);
   fChain->SetBranchAddress("iJSel_Mini_jecDown", iJSel_Mini_jecDown, &b_iJSel_Mini_jecDown);
   fChain->SetBranchAddress("nDiscJetSel_Mini_jecDown", &nDiscJetSel_Mini_jecDown, &b_nDiscJetSel_Mini_jecDown);
   fChain->SetBranchAddress("iDiscJSel_Mini_jecDown", iDiscJSel_Mini_jecDown, &b_iDiscJSel_Mini_jecDown);
   fChain->SetBranchAddress("nJet30_Mini_jecDown", &nJet30_Mini_jecDown, &b_nJet30_Mini_jecDown);
   fChain->SetBranchAddress("htJet30j_Mini_jecDown", &htJet30j_Mini_jecDown, &b_htJet30j_Mini_jecDown);
   fChain->SetBranchAddress("mhtJet30_Mini_jecDown", &mhtJet30_Mini_jecDown, &b_mhtJet30_Mini_jecDown);
   fChain->SetBranchAddress("nBJetLoose30_Mini_jecDown", &nBJetLoose30_Mini_jecDown, &b_nBJetLoose30_Mini_jecDown);
   fChain->SetBranchAddress("nBJetMedium30_Mini_jecDown", &nBJetMedium30_Mini_jecDown, &b_nBJetMedium30_Mini_jecDown);
   fChain->SetBranchAddress("nJet25_Mini_jecDown", &nJet25_Mini_jecDown, &b_nJet25_Mini_jecDown);
   fChain->SetBranchAddress("htJet25j_Mini_jecDown", &htJet25j_Mini_jecDown, &b_htJet25j_Mini_jecDown);
   fChain->SetBranchAddress("mhtJet25_Mini_jecDown", &mhtJet25_Mini_jecDown, &b_mhtJet25_Mini_jecDown);
   fChain->SetBranchAddress("nBJetLoose25_Mini_jecDown", &nBJetLoose25_Mini_jecDown, &b_nBJetLoose25_Mini_jecDown);
   fChain->SetBranchAddress("nBJetMedium25_Mini_jecDown", &nBJetMedium25_Mini_jecDown, &b_nBJetMedium25_Mini_jecDown); 

   //friend trees version -3
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
   fChain->SetBranchAddress("LepSel_pdgId", LepSel_pdgId, &b_LepSel_pdgId);
   fChain->SetBranchAddress("LepSel_isTight", LepSel_isTight, &b_LepSel_isTight);
   fChain->SetBranchAddress("LepSel_tightCharge", LepSel_tightCharge, &b_LepSel_tightCharge);
   fChain->SetBranchAddress("LepSel_mcMatchId", LepSel_mcMatchId, &b_LepSel_mcMatchId);
   fChain->SetBranchAddress("LepSel_mcMatchAny", LepSel_mcMatchAny, &b_LepSel_mcMatchAny);
   fChain->SetBranchAddress("LepSel_mcPromptGamma", LepSel_mcPromptGamma, &b_LepSel_mcPromptGamma);
   fChain->SetBranchAddress("LepSel_mcUCSX", LepSel_mcUCSX, &b_LepSel_mcUCSX);
   fChain->SetBranchAddress("LepSel_trIdx", LepSel_trIdx, &b_LepSel_trIdx);
   fChain->SetBranchAddress("mT_3l", &mT_3l, &b_mT_3l);
   fChain->SetBranchAddress("mTL_3l", &mTL_3l, &b_mTL_3l);
   fChain->SetBranchAddress("mTT_3l", &mTT_3l, &b_mTT_3l);
   fChain->SetBranchAddress("mT2L_3l", &mT2L_3l, &b_mT2L_3l);
   fChain->SetBranchAddress("mT2T_3l", &mT2T_3l, &b_mT2T_3l);
   fChain->SetBranchAddress("mT_4l", &mT_4l, &b_mT_4l);
   fChain->SetBranchAddress("mTL_4l", &mTL_4l, &b_mTL_4l);
   fChain->SetBranchAddress("mTT_4l", &mTT_4l, &b_mTT_4l);
   fChain->SetBranchAddress("mT2L_4l", &mT2L_4l, &b_mT2L_4l);
   fChain->SetBranchAddress("mT2T_4l", &mT2T_4l, &b_mT2T_4l);
   fChain->SetBranchAddress("mT_3l_gen", &mT_3l_gen, &b_mT_3l_gen);
   fChain->SetBranchAddress("mTL_3l_gen", &mTL_3l_gen, &b_mTL_3l_gen);
   fChain->SetBranchAddress("mTT_3l_gen", &mTT_3l_gen, &b_mTT_3l_gen);
   fChain->SetBranchAddress("mT2L_3l_gen", &mT2L_3l_gen, &b_mT2L_3l_gen);
   fChain->SetBranchAddress("mT2T_3l_gen", &mT2T_3l_gen, &b_mT2T_3l_gen);
   fChain->SetBranchAddress("mT_4l_gen", &mT_4l_gen, &b_mT_4l_gen);
   fChain->SetBranchAddress("mTL_4l_gen", &mTL_4l_gen, &b_mTL_4l_gen);
   fChain->SetBranchAddress("mTT_4l_gen", &mTT_4l_gen, &b_mTT_4l_gen);
   fChain->SetBranchAddress("mT2L_4l_gen", &mT2L_4l_gen, &b_mT2L_4l_gen);
   fChain->SetBranchAddress("mT2T_4l_gen", &mT2T_4l_gen, &b_mT2T_4l_gen);
   fChain->SetBranchAddress("mT_3l_jecUp", &mT_3l_jecUp, &b_mT_3l_jecUp);
   fChain->SetBranchAddress("mTL_3l_jecUp", &mTL_3l_jecUp, &b_mTL_3l_jecUp);
   fChain->SetBranchAddress("mTT_3l_jecUp", &mTT_3l_jecUp, &b_mTT_3l_jecUp);
   fChain->SetBranchAddress("mT2L_3l_jecUp", &mT2L_3l_jecUp, &b_mT2L_3l_jecUp);
   fChain->SetBranchAddress("mT2T_3l_jecUp", &mT2T_3l_jecUp, &b_mT2T_3l_jecUp);
   fChain->SetBranchAddress("mT_4l_jecUp", &mT_4l_jecUp, &b_mT_4l_jecUp);
   fChain->SetBranchAddress("mTL_4l_jecUp", &mTL_4l_jecUp, &b_mTL_4l_jecUp);
   fChain->SetBranchAddress("mTT_4l_jecUp", &mTT_4l_jecUp, &b_mTT_4l_jecUp);
   fChain->SetBranchAddress("mT2L_4l_jecUp", &mT2L_4l_jecUp, &b_mT2L_4l_jecUp);
   fChain->SetBranchAddress("mT2T_4l_jecUp", &mT2T_4l_jecUp, &b_mT2T_4l_jecUp);
   fChain->SetBranchAddress("mT_3l_gen_jecUp", &mT_3l_gen_jecUp, &b_mT_3l_gen_jecUp);
   fChain->SetBranchAddress("mTL_3l_gen_jecUp", &mTL_3l_gen_jecUp, &b_mTL_3l_gen_jecUp);
   fChain->SetBranchAddress("mTT_3l_gen_jecUp", &mTT_3l_gen_jecUp, &b_mTT_3l_gen_jecUp);
   fChain->SetBranchAddress("mT2L_3l_gen_jecUp", &mT2L_3l_gen_jecUp, &b_mT2L_3l_gen_jecUp);
   fChain->SetBranchAddress("mT2T_3l_gen_jecUp", &mT2T_3l_gen_jecUp, &b_mT2T_3l_gen_jecUp);
   fChain->SetBranchAddress("mT_4l_gen_jecUp", &mT_4l_gen_jecUp, &b_mT_4l_gen_jecUp);
   fChain->SetBranchAddress("mTL_4l_gen_jecUp", &mTL_4l_gen_jecUp, &b_mTL_4l_gen_jecUp);
   fChain->SetBranchAddress("mTT_4l_gen_jecUp", &mTT_4l_gen_jecUp, &b_mTT_4l_gen_jecUp);
   fChain->SetBranchAddress("mT2L_4l_gen_jecUp", &mT2L_4l_gen_jecUp, &b_mT2L_4l_gen_jecUp);
   fChain->SetBranchAddress("mT2T_4l_gen_jecUp", &mT2T_4l_gen_jecUp, &b_mT2T_4l_gen_jecUp);
   fChain->SetBranchAddress("mT_3l_jecDown", &mT_3l_jecDown, &b_mT_3l_jecDown);
   fChain->SetBranchAddress("mTL_3l_jecDown", &mTL_3l_jecDown, &b_mTL_3l_jecDown);
   fChain->SetBranchAddress("mTT_3l_jecDown", &mTT_3l_jecDown, &b_mTT_3l_jecDown);
   fChain->SetBranchAddress("mT2L_3l_jecDown", &mT2L_3l_jecDown, &b_mT2L_3l_jecDown);
   fChain->SetBranchAddress("mT2T_3l_jecDown", &mT2T_3l_jecDown, &b_mT2T_3l_jecDown);
   fChain->SetBranchAddress("mT_4l_jecDown", &mT_4l_jecDown, &b_mT_4l_jecDown);
   fChain->SetBranchAddress("mTL_4l_jecDown", &mTL_4l_jecDown, &b_mTL_4l_jecDown);
   fChain->SetBranchAddress("mTT_4l_jecDown", &mTT_4l_jecDown, &b_mTT_4l_jecDown);
   fChain->SetBranchAddress("mT2L_4l_jecDown", &mT2L_4l_jecDown, &b_mT2L_4l_jecDown);
   fChain->SetBranchAddress("mT2T_4l_jecDown", &mT2T_4l_jecDown, &b_mT2T_4l_jecDown);
   fChain->SetBranchAddress("mT_3l_gen_jecDown", &mT_3l_gen_jecDown, &b_mT_3l_gen_jecDown);
   fChain->SetBranchAddress("mTL_3l_gen_jecDown", &mTL_3l_gen_jecDown, &b_mTL_3l_gen_jecDown);
   fChain->SetBranchAddress("mTT_3l_gen_jecDown", &mTT_3l_gen_jecDown, &b_mTT_3l_gen_jecDown);
   fChain->SetBranchAddress("mT2L_3l_gen_jecDown", &mT2L_3l_gen_jecDown, &b_mT2L_3l_gen_jecDown);
   fChain->SetBranchAddress("mT2T_3l_gen_jecDown", &mT2T_3l_gen_jecDown, &b_mT2T_3l_gen_jecDown);
   fChain->SetBranchAddress("mT_4l_gen_jecDown", &mT_4l_gen_jecDown, &b_mT_4l_gen_jecDown);
   fChain->SetBranchAddress("mTL_4l_gen_jecDown", &mTL_4l_gen_jecDown, &b_mTL_4l_gen_jecDown);
   fChain->SetBranchAddress("mTT_4l_gen_jecDown", &mTT_4l_gen_jecDown, &b_mTT_4l_gen_jecDown);
   fChain->SetBranchAddress("mT2L_4l_gen_jecDown", &mT2L_4l_gen_jecDown, &b_mT2L_4l_gen_jecDown);
   fChain->SetBranchAddress("mT2T_4l_gen_jecDown", &mT2T_4l_gen_jecDown, &b_mT2T_4l_gen_jecDown);





  

}

ClassReadSig::ClassReadSig(TTree *tree)
{
	Init(tree);
}
