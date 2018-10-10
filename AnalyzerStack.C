
#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
#include "TH1F.h"
#include "TPaveText.h"
#include "ClassReadSig.cc"
#include "ClassReadBkg.cc"
#include "LoaderNTuple.C"
#include "LoaderFriendV1.C"
#include "LoaderFriendV2.C"
#include "SetStyle.C"
#include "Looper_sig.C"
#include "Looper_bkg.C"
//#include "stackPlotter.C"
//#include "HistCreater.C"
//using namespace std;

void AnalyzerStack(){


LoaderNTuple LNT;
LoaderFriendV1 LFV1;
LoaderFriendV2 LFV2;

TChain *tree_TChiWZ_225_135LNT=LNT.Load("TChiWZ_225_135");
ClassReadSig TChiWZ_225_135LNT(tree_TChiWZ_225_135LNT);

TChain *tree_TChiWZ_225_135LFV1=LFV1.Load("TChiWZ_225_135");
ClassReadSig TChiWZ_225_135LFV1(tree_TChiWZ_225_135LFV1);

TChain *tree_TChiWZ_225_135LFV2=LFV2.Load("TChiWZ_225_135");
ClassReadSig TChiWZ_225_135LFV2(tree_TChiWZ_225_135LFV2);


TChain *tree_WZTo3LNuLNT=LNT.Load("WZTo3LNu");
ClassReadBkg WZTo3LNuLNT(tree_WZTo3LNuLNT);

TChain *tree_WZTo3LNuLFV1=LFV1.Load("WZTo3LNu");
ClassReadBkg WZTo3LNuLFV1(tree_WZTo3LNuLFV1);

TChain *tree_WZTo3LNuLFV2=LFV2.Load("WZTo3LNu");
ClassReadBkg WZTo3LNuLFV2(tree_WZTo3LNuLFV2);


TChain *tree_TTJets_DiLeptonLNT=LNT.Load("TTJets_DiLepton");
ClassReadBkg TTJets_DiLeptonLNT(tree_TTJets_DiLeptonLNT);

TChain *tree_DYJetsToLL_M50LNT=LNT.Load("DYJetsToLL_M50");
ClassReadBkg DYJetsToLL_M50LNT(tree_DYJetsToLL_M50LNT);



TH1F *hMETs=new TH1F("hMETs","hMETs",90,0,1500);
TH1F *hMETWZ=new TH1F("hMETWZ","hMETWZ",90,0,1500);

//for(int i=0;i<tree_TChiWZ_225_135LNT->GetEntries();i++){
//tree_TChiWZ_225_135LNT->GetEntry(i);
//tree_TChiWZ_225_135LFV1->GetEntry(i);
//tree_TChiWZ_225_135LFV2->GetEntry(i);

//if(i % 1000==0)std::cout<<"TChiWZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_TChiWZ_225_135LNT->GetEntries()))*100<<" %"<<std::endl;

//if(TChiWZ_225_135LFV2.nOSSFL_3l==1  && TChiWZ_225_135LNT.met_pt >50. && TChiWZ_225_135LFV2.mllL_3l > 20.0 && TChiWZ_225_135LNT.htJet40 >10  ){

//hMETs->Fill(TChiWZ_225_135LNT.met_pt);


//}
//}

//cout<<"Integral signal: "<<hMETs->Integral()<<endl;

for(int i=0;i<tree_WZTo3LNuLNT->GetEntries();i++){
tree_WZTo3LNuLNT->GetEntry(i);
tree_WZTo3LNuLFV1->GetEntry(i);
tree_WZTo3LNuLFV2->GetEntry(i);
if(i % 1000==0)std::cout<<"WZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_WZTo3LNuLNT->GetEntries()))*100<<" %"<<std::endl;


if(
WZTo3LNuLFV2.nLepSel >= 3 && 
WZTo3LNuLFV2.LepSel_isTight[0] ==1 && 
WZTo3LNuLFV2.LepSel_isTight[1] ==1 &&
WZTo3LNuLFV2.LepSel_isTight[2] ==1 &&
(WZTo3LNuLFV1.minMllSFOS_Mini > 12 ||
WZTo3LNuLFV1.minMllSFOS_Mini == -1 ) && 
WZTo3LNuLNT.nBJetMedium25 ==0 && 
WZTo3LNuLNT.met_pt >50.  
//WZTo3LNuLFV2.mllL_3l > 20.0 && 
//WZTo3LNuLNT.htJet40 >10  

){

hMETWZ->Fill(WZTo3LNuLNT.met_pt, 0.31);


}
}

cout<<"Integral Bkg: "<<hMETWZ->Integral()<<endl;

cout<<"Entries Bkg: "<<hMETWZ->GetEntries()<<endl;




for(int i=0;i<tree_WZTo3LNuLNT->GetEntries();i++){
tree_WZTo3LNuLNT->GetEntry(i);
tree_WZTo3LNuLFV1->GetEntry(i);
tree_WZTo3LNuLFV2->GetEntry(i);


}



































}

