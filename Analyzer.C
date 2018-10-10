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

#include "HelperClass.C"
#include "Looper_sig.C"
#include "Looper_bkg.C"
/*#include "stackPlotter.C"*/
#include "HistCreater.C"
#include "LoaderNTuple.C"

#include "LoaderFriendV1.C"

#include "LoaderFriendV2.C"


using namespace std;


void Analyzer(std::string fileName="TChiWZ_100_20.root"){
 
//run cards scaled to x fb-1
double lumi=35.9;//fb-1
LoaderNTuple LNT;
LoaderFriendV1 LFV1;
LoaderFriendV2 LFV2;



TFile *f=new TFile("Histograms.root","RECREATE");
HistCreater hs;
std::string PathStup="root://eoscms.cern.ch//store/user/cheidegg/samples/signals/";
std::string PathSFR1="root://eoscms.cern.ch//store/user/cheidegg/samples/signals/leptonJetReCleanerSusyEWK3L/";
std::string PathSFR2="root://eoscms.cern.ch//store/user/cheidegg/samples/signals/leptonBuilderEWK/";
PathStup=PathStup+fileName;
PathSFR1=PathSFR1+"evVarFriend_"+fileName;
PathSFR2=PathSFR2+"evVarFriend_"+fileName;
const char *pathNtup;
const char *pathSFR1;
const char *pathSFR2;
pathNtup = PathStup.c_str();
pathSFR1 = PathSFR1.c_str();
pathSFR2 = PathSFR2.c_str();
char NtupName[1000];
char LFV1Name[1000];
char LFV2Name[1000];
sprintf(NtupName,"%s",pathNtup);
sprintf(LFV1Name,"%s",pathSFR1);
sprintf(LFV2Name,"%s",pathSFR2);
Looper_sig<ClassReadSig,HistCreater> loop_s;



TChain *tree_TChiWZ_Var_LNT=LNT.Load("TChiWZ_Var");
tree_TChiWZ_Var_LNT->Add(NtupName);
TChain *tree_TChiWZ_Var_LFV1=LFV1.Load("TChiWZ_Var");
tree_TChiWZ_Var_LFV1->Add(LFV1Name);
TChain *tree_TChiWZ_Var_LFV2=LFV2.Load("TChiWZ_Var");
tree_TChiWZ_Var_LFV2->Add(LFV2Name);
ClassReadSig TChiWZ_Var_LNT(tree_TChiWZ_Var_LNT);
ClassReadSig TChiWZ_Var_LFV1(tree_TChiWZ_Var_LFV1);
ClassReadSig TChiWZ_Var_LFV2(tree_TChiWZ_Var_LFV2);
loop_s.Loop(tree_TChiWZ_Var_LNT, tree_TChiWZ_Var_LFV1 ,tree_TChiWZ_Var_LFV2 ,TChiWZ_Var_LNT, TChiWZ_Var_LFV1, TChiWZ_Var_LFV2,hs,"TChiWZ_Var", lumi);



TChain *tree_TChiWZ_225_135_LNT=LNT.Load("TChiWZ_225_135");
TChain *tree_TChiWZ_225_135_LFV1=LFV1.Load("TChiWZ_225_135");
TChain *tree_TChiWZ_225_135_LFV2=LFV2.Load("TChiWZ_225_135");
ClassReadSig TChiWZ_225_135_LNT(tree_TChiWZ_225_135_LNT);
ClassReadSig TChiWZ_225_135_LFV1(tree_TChiWZ_225_135_LFV1);
ClassReadSig TChiWZ_225_135_LFV2(tree_TChiWZ_225_135_LFV2);
loop_s.Loop(tree_TChiWZ_225_135_LNT, tree_TChiWZ_225_135_LFV1 ,tree_TChiWZ_225_135_LFV2 ,TChiWZ_225_135_LNT, TChiWZ_225_135_LFV1, TChiWZ_225_135_LFV2,hs,"TChiWZ_225_135", lumi);



TChain *tree_TChiWZ_200_150_LNT=LNT.Load("TChiWZ_200_150");
TChain *tree_TChiWZ_200_150_LFV1=LFV1.Load("TChiWZ_200_150");
TChain *tree_TChiWZ_200_150_LFV2=LFV2.Load("TChiWZ_200_150");
ClassReadSig TChiWZ_200_150_LNT(tree_TChiWZ_200_150_LNT);
ClassReadSig TChiWZ_200_150_LFV1(tree_TChiWZ_200_150_LFV1);
ClassReadSig TChiWZ_200_150_LFV2(tree_TChiWZ_200_150_LFV2);
loop_s.Loop(tree_TChiWZ_200_150_LNT, tree_TChiWZ_200_150_LFV1 ,tree_TChiWZ_200_150_LFV2 ,TChiWZ_200_150_LNT, TChiWZ_200_150_LFV1, TChiWZ_200_150_LFV2,hs,"TChiWZ_200_150", lumi);



TChain *tree_TChiWZ_600_300_LNT=LNT.Load("TChiWZ_600_300");
TChain *tree_TChiWZ_600_300_LFV1=LFV1.Load("TChiWZ_600_300");
TChain *tree_TChiWZ_600_300_LFV2=LFV2.Load("TChiWZ_600_300");
ClassReadSig TChiWZ_600_300_LNT(tree_TChiWZ_600_300_LNT);
ClassReadSig TChiWZ_600_300_LFV1(tree_TChiWZ_600_300_LFV1);
ClassReadSig TChiWZ_600_300_LFV2(tree_TChiWZ_600_300_LFV2);
loop_s.Loop(tree_TChiWZ_600_300_LNT, tree_TChiWZ_600_300_LFV1 ,tree_TChiWZ_600_300_LFV2 ,TChiWZ_600_300_LNT, TChiWZ_600_300_LFV1, TChiWZ_600_300_LFV2,hs,"TChiWZ_600_300", lumi);







Looper_bkg<ClassReadBkg,HistCreater> loop_b;
TChain *tree_WZTo3LNu_LNT=LNT.Load("WZTo3LNu");
TChain *tree_WZTo3LNu_LFV1=LFV1.Load("WZTo3LNu");
TChain *tree_WZTo3LNu_LFV2=LFV2.Load("WZTo3LNu");
ClassReadBkg WZTo3LNu_LNT(tree_WZTo3LNu_LNT);
ClassReadBkg WZTo3LNu_LFV1(tree_WZTo3LNu_LFV1);
ClassReadBkg WZTo3LNu_LFV2(tree_WZTo3LNu_LFV2);
loop_b.Loop(tree_WZTo3LNu_LNT, tree_WZTo3LNu_LFV1 ,tree_WZTo3LNu_LFV2 ,WZTo3LNu_LNT, WZTo3LNu_LFV1, WZTo3LNu_LFV2,hs,"WZTo3LNu", lumi);



TChain *tree_DYJetsToLL_M50_LNT=LNT.Load("DYJetsToLL_M50");
TChain *tree_DYJetsToLL_M50_LFV1=LFV1.Load("DYJetsToLL_M50");
TChain *tree_DYJetsToLL_M50_LFV2=LFV2.Load("DYJetsToLL_M50");
ClassReadBkg DYJetsToLL_M50_LNT(tree_DYJetsToLL_M50_LNT);
ClassReadBkg DYJetsToLL_M50_LFV1(tree_DYJetsToLL_M50_LFV1);
ClassReadBkg DYJetsToLL_M50_LFV2(tree_DYJetsToLL_M50_LFV2);
loop_b.Loop(tree_DYJetsToLL_M50_LNT, tree_DYJetsToLL_M50_LFV1 ,tree_DYJetsToLL_M50_LFV2 ,DYJetsToLL_M50_LNT, DYJetsToLL_M50_LFV1, DYJetsToLL_M50_LFV2,hs,"DYJetsToLL_M50", lumi);



TChain *tree_DYJetsToLL_M10to50_LNT=LNT.Load("DYJetsToLL_M10to50");
TChain *tree_DYJetsToLL_M10to50_LFV1=LFV1.Load("DYJetsToLL_M10to50");
TChain *tree_DYJetsToLL_M10to50_LFV2=LFV2.Load("DYJetsToLL_M10to50");
ClassReadBkg DYJetsToLL_M10to50_LNT(tree_DYJetsToLL_M10to50_LNT);
ClassReadBkg DYJetsToLL_M10to50_LFV1(tree_DYJetsToLL_M10to50_LFV1);
ClassReadBkg DYJetsToLL_M10to50_LFV2(tree_DYJetsToLL_M10to50_LFV2);
loop_b.Loop(tree_DYJetsToLL_M10to50_LNT, tree_DYJetsToLL_M10to50_LFV1 ,tree_DYJetsToLL_M10to50_LFV2 ,DYJetsToLL_M10to50_LNT, DYJetsToLL_M10to50_LFV1, DYJetsToLL_M10to50_LFV2,hs,"DYJetsToLL_M10to50", lumi);



TChain *tree_TTJets_DiLepton_LNT=LNT.Load("TTJets_DiLepton");
TChain *tree_TTJets_DiLepton_LFV1=LFV1.Load("TTJets_DiLepton");
TChain *tree_TTJets_DiLepton_LFV2=LFV2.Load("TTJets_DiLepton");
ClassReadBkg TTJets_DiLepton_LNT(tree_TTJets_DiLepton_LNT);
ClassReadBkg TTJets_DiLepton_LFV1(tree_TTJets_DiLepton_LFV1);
ClassReadBkg TTJets_DiLepton_LFV2(tree_TTJets_DiLepton_LFV2);
loop_b.Loop(tree_TTJets_DiLepton_LNT, tree_TTJets_DiLepton_LFV1 ,tree_TTJets_DiLepton_LFV2 ,TTJets_DiLepton_LNT, TTJets_DiLepton_LFV1, TTJets_DiLepton_LFV2,hs,"TTJets_DiLepton", lumi);



TChain *tree_TTJets_SingleLeptonFromT_LNT=LNT.Load("TTJets_SingleLeptonFromT");
TChain *tree_TTJets_SingleLeptonFromT_LFV1=LFV1.Load("TTJets_SingleLeptonFromT");
TChain *tree_TTJets_SingleLeptonFromT_LFV2=LFV2.Load("TTJets_SingleLeptonFromT");
ClassReadBkg TTJets_SingleLeptonFromT_LNT(tree_TTJets_SingleLeptonFromT_LNT);
ClassReadBkg TTJets_SingleLeptonFromT_LFV1(tree_TTJets_SingleLeptonFromT_LFV1);
ClassReadBkg TTJets_SingleLeptonFromT_LFV2(tree_TTJets_SingleLeptonFromT_LFV2);
loop_b.Loop(tree_TTJets_SingleLeptonFromT_LNT, tree_TTJets_SingleLeptonFromT_LFV1 ,tree_TTJets_SingleLeptonFromT_LFV2 ,TTJets_SingleLeptonFromT_LNT, TTJets_SingleLeptonFromT_LFV1, TTJets_SingleLeptonFromT_LFV2,hs,"TTJets_SingleLeptonFromT", lumi);



TChain *tree_TTJets_SingleLeptonFromTbar_LNT=LNT.Load("TTJets_SingleLeptonFromTbar");
TChain *tree_TTJets_SingleLeptonFromTbar_LFV1=LFV1.Load("TTJets_SingleLeptonFromTbar");
TChain *tree_TTJets_SingleLeptonFromTbar_LFV2=LFV2.Load("TTJets_SingleLeptonFromTbar");
ClassReadBkg TTJets_SingleLeptonFromTbar_LNT(tree_TTJets_SingleLeptonFromTbar_LNT);
ClassReadBkg TTJets_SingleLeptonFromTbar_LFV1(tree_TTJets_SingleLeptonFromTbar_LFV1);
ClassReadBkg TTJets_SingleLeptonFromTbar_LFV2(tree_TTJets_SingleLeptonFromTbar_LFV2);
loop_b.Loop(tree_TTJets_SingleLeptonFromTbar_LNT, tree_TTJets_SingleLeptonFromTbar_LFV1 ,tree_TTJets_SingleLeptonFromTbar_LFV2 ,TTJets_SingleLeptonFromTbar_LNT, TTJets_SingleLeptonFromTbar_LFV1, TTJets_SingleLeptonFromTbar_LFV2,hs,"TTJets_SingleLeptonFromTbar", lumi);



TChain *tree_TTJets_DiLepton_ext_LNT=LNT.Load("TTJets_DiLepton_ext");
TChain *tree_TTJets_DiLepton_ext_LFV1=LFV1.Load("TTJets_DiLepton_ext");
TChain *tree_TTJets_DiLepton_ext_LFV2=LFV2.Load("TTJets_DiLepton_ext");
ClassReadBkg TTJets_DiLepton_ext_LNT(tree_TTJets_DiLepton_ext_LNT);
ClassReadBkg TTJets_DiLepton_ext_LFV1(tree_TTJets_DiLepton_ext_LFV1);
ClassReadBkg TTJets_DiLepton_ext_LFV2(tree_TTJets_DiLepton_ext_LFV2);
loop_b.Loop(tree_TTJets_DiLepton_ext_LNT, tree_TTJets_DiLepton_ext_LFV1 ,tree_TTJets_DiLepton_ext_LFV2 ,TTJets_DiLepton_ext_LNT, TTJets_DiLepton_ext_LFV1, TTJets_DiLepton_ext_LFV2,hs,"TTJets_DiLepton_ext", lumi);



TChain *tree_WJetsToLNu_LNT=LNT.Load("WJetsToLNu");
TChain *tree_WJetsToLNu_LFV1=LFV1.Load("WJetsToLNu");
TChain *tree_WJetsToLNu_LFV2=LFV2.Load("WJetsToLNu");
ClassReadBkg WJetsToLNu_LNT(tree_WJetsToLNu_LNT);
ClassReadBkg WJetsToLNu_LFV1(tree_WJetsToLNu_LFV1);
ClassReadBkg WJetsToLNu_LFV2(tree_WJetsToLNu_LFV2);
loop_b.Loop(tree_WJetsToLNu_LNT, tree_WJetsToLNu_LFV1 ,tree_WJetsToLNu_LFV2 ,WJetsToLNu_LNT, WJetsToLNu_LFV1, WJetsToLNu_LFV2,hs,"WJetsToLNu", lumi);



TChain *tree_ZZTo4L_LNT=LNT.Load("ZZTo4L");
TChain *tree_ZZTo4L_LFV1=LFV1.Load("ZZTo4L");
TChain *tree_ZZTo4L_LFV2=LFV2.Load("ZZTo4L");
ClassReadBkg ZZTo4L_LNT(tree_ZZTo4L_LNT);
ClassReadBkg ZZTo4L_LFV1(tree_ZZTo4L_LFV1);
ClassReadBkg ZZTo4L_LFV2(tree_ZZTo4L_LFV2);
loop_b.Loop(tree_ZZTo4L_LNT, tree_ZZTo4L_LFV1 ,tree_ZZTo4L_LFV2 ,ZZTo4L_LNT, ZZTo4L_LFV1, ZZTo4L_LFV2,hs,"ZZTo4L", lumi);



TChain *tree_GGHZZ4L_LNT=LNT.Load("GGHZZ4L");
TChain *tree_GGHZZ4L_LFV1=LFV1.Load("GGHZZ4L");
TChain *tree_GGHZZ4L_LFV2=LFV2.Load("GGHZZ4L");
ClassReadBkg GGHZZ4L_LNT(tree_GGHZZ4L_LNT);
ClassReadBkg GGHZZ4L_LFV1(tree_GGHZZ4L_LFV1);
ClassReadBkg GGHZZ4L_LFV2(tree_GGHZZ4L_LFV2);
loop_b.Loop(tree_GGHZZ4L_LNT, tree_GGHZZ4L_LFV1 ,tree_GGHZZ4L_LFV2 ,GGHZZ4L_LNT, GGHZZ4L_LFV1, GGHZZ4L_LFV2,hs,"GGHZZ4L", lumi);



TChain *tree_ZZZ_LNT=LNT.Load("ZZZ");
TChain *tree_ZZZ_LFV1=LFV1.Load("ZZZ");
TChain *tree_ZZZ_LFV2=LFV2.Load("ZZZ");
ClassReadBkg ZZZ_LNT(tree_ZZZ_LNT);
ClassReadBkg ZZZ_LFV1(tree_ZZZ_LFV1);
ClassReadBkg ZZZ_LFV2(tree_ZZZ_LFV2);
loop_b.Loop(tree_ZZZ_LNT, tree_ZZZ_LFV1 ,tree_ZZZ_LFV2 ,ZZZ_LNT, ZZZ_LFV1, ZZZ_LFV2,hs,"ZZZ", lumi);



TChain *tree_WZZ_LNT=LNT.Load("WZZ");
TChain *tree_WZZ_LFV1=LFV1.Load("WZZ");
TChain *tree_WZZ_LFV2=LFV2.Load("WZZ");
ClassReadBkg WZZ_LNT(tree_WZZ_LNT);
ClassReadBkg WZZ_LFV1(tree_WZZ_LFV1);
ClassReadBkg WZZ_LFV2(tree_WZZ_LFV2);
loop_b.Loop(tree_WZZ_LNT, tree_WZZ_LFV1 ,tree_WZZ_LFV2 ,WZZ_LNT, WZZ_LFV1, WZZ_LFV2,hs,"WZZ", lumi);



TChain *tree_WWW_LNT=LNT.Load("WWW");
TChain *tree_WWW_LFV1=LFV1.Load("WWW");
TChain *tree_WWW_LFV2=LFV2.Load("WWW");
ClassReadBkg WWW_LNT(tree_WWW_LNT);
ClassReadBkg WWW_LFV1(tree_WWW_LFV1);
ClassReadBkg WWW_LFV2(tree_WWW_LFV2);
loop_b.Loop(tree_WWW_LNT, tree_WWW_LFV1 ,tree_WWW_LFV2 ,WWW_LNT, WWW_LFV1, WWW_LFV2,hs,"WWW", lumi);



TChain *tree_tZW_ll_LNT=LNT.Load("tZW_ll");
TChain *tree_tZW_ll_LFV1=LFV1.Load("tZW_ll");
TChain *tree_tZW_ll_LFV2=LFV2.Load("tZW_ll");
ClassReadBkg tZW_ll_LNT(tree_tZW_ll_LNT);
ClassReadBkg tZW_ll_LFV1(tree_tZW_ll_LFV1);
ClassReadBkg tZW_ll_LFV2(tree_tZW_ll_LFV2);
loop_b.Loop(tree_tZW_ll_LNT, tree_tZW_ll_LFV1 ,tree_tZW_ll_LFV2 ,tZW_ll_LNT, tZW_ll_LFV1, tZW_ll_LFV2,hs,"tZW_ll", lumi);



TChain *tree_TTZToLLNuNu_LNT=LNT.Load("TTZToLLNuNu");
TChain *tree_TTZToLLNuNu_LFV1=LFV1.Load("TTZToLLNuNu");
TChain *tree_TTZToLLNuNu_LFV2=LFV2.Load("TTZToLLNuNu");
ClassReadBkg TTZToLLNuNu_LNT(tree_TTZToLLNuNu_LNT);
ClassReadBkg TTZToLLNuNu_LFV1(tree_TTZToLLNuNu_LFV1);
ClassReadBkg TTZToLLNuNu_LFV2(tree_TTZToLLNuNu_LFV2);
loop_b.Loop(tree_TTZToLLNuNu_LNT, tree_TTZToLLNuNu_LFV1 ,tree_TTZToLLNuNu_LFV2 ,TTZToLLNuNu_LNT, TTZToLLNuNu_LFV1, TTZToLLNuNu_LFV2,hs,"TTZToLLNuNu", lumi);



TChain *tree_WGToLNuG_LNT=LNT.Load("WGToLNuG");
TChain *tree_WGToLNuG_LFV1=LFV1.Load("WGToLNuG");
TChain *tree_WGToLNuG_LFV2=LFV2.Load("WGToLNuG");
ClassReadBkg WGToLNuG_LNT(tree_WGToLNuG_LNT);
ClassReadBkg WGToLNuG_LFV1(tree_WGToLNuG_LFV1);
ClassReadBkg WGToLNuG_LFV2(tree_WGToLNuG_LFV2);
loop_b.Loop(tree_WGToLNuG_LNT, tree_WGToLNuG_LFV1 ,tree_WGToLNuG_LFV2 ,WGToLNuG_LNT, WGToLNuG_LFV1, WGToLNuG_LFV2,hs,"WGToLNuG", lumi);



TChain *tree_ZGTo2LG_LNT=LNT.Load("ZGTo2LG");
TChain *tree_ZGTo2LG_LFV1=LFV1.Load("ZGTo2LG");
TChain *tree_ZGTo2LG_LFV2=LFV2.Load("ZGTo2LG");
ClassReadBkg ZGTo2LG_LNT(tree_ZGTo2LG_LNT);
ClassReadBkg ZGTo2LG_LFV1(tree_ZGTo2LG_LFV1);
ClassReadBkg ZGTo2LG_LFV2(tree_ZGTo2LG_LFV2);
loop_b.Loop(tree_ZGTo2LG_LNT, tree_ZGTo2LG_LFV1 ,tree_ZGTo2LG_LFV2 ,ZGTo2LG_LNT, ZGTo2LG_LFV1, ZGTo2LG_LFV2,hs,"ZGTo2LG", lumi);



TChain *tree_WWG_LNT=LNT.Load("WWG");
TChain *tree_WWG_LFV1=LFV1.Load("WWG");
TChain *tree_WWG_LFV2=LFV2.Load("WWG");
ClassReadBkg WWG_LNT(tree_WWG_LNT);
ClassReadBkg WWG_LFV1(tree_WWG_LFV1);
ClassReadBkg WWG_LFV2(tree_WWG_LFV2);
loop_b.Loop(tree_WWG_LNT, tree_WWG_LFV1 ,tree_WWG_LFV2 ,WWG_LNT, WWG_LFV1, WWG_LFV2,hs,"WWG", lumi);



TChain *tree_TTGJets_LNT=LNT.Load("TTGJets");
TChain *tree_TTGJets_LFV1=LFV1.Load("TTGJets");
TChain *tree_TTGJets_LFV2=LFV2.Load("TTGJets");
ClassReadBkg TTGJets_LNT(tree_TTGJets_LNT);
ClassReadBkg TTGJets_LFV1(tree_TTGJets_LFV1);
ClassReadBkg TTGJets_LFV2(tree_TTGJets_LFV2);
loop_b.Loop(tree_TTGJets_LNT, tree_TTGJets_LFV1 ,tree_TTGJets_LFV2 ,TTGJets_LNT, TTGJets_LFV1, TTGJets_LFV2,hs,"TTGJets", lumi);



TChain *tree_WZG_LNT=LNT.Load("WZG");
TChain *tree_WZG_LFV1=LFV1.Load("WZG");
TChain *tree_WZG_LFV2=LFV2.Load("WZG");
ClassReadBkg WZG_LNT(tree_WZG_LNT);
ClassReadBkg WZG_LFV1(tree_WZG_LFV1);
ClassReadBkg WZG_LFV2(tree_WZG_LFV2);
loop_b.Loop(tree_WZG_LNT, tree_WZG_LFV1 ,tree_WZG_LFV2 ,WZG_LNT, WZG_LFV1, WZG_LFV2,hs,"WZG", lumi);



TChain *tree_TGJets_LNT=LNT.Load("TGJets");
TChain *tree_TGJets_LFV1=LFV1.Load("TGJets");
TChain *tree_TGJets_LFV2=LFV2.Load("TGJets");
ClassReadBkg TGJets_LNT(tree_TGJets_LNT);
ClassReadBkg TGJets_LFV1(tree_TGJets_LFV1);
ClassReadBkg TGJets_LFV2(tree_TGJets_LFV2);
loop_b.Loop(tree_TGJets_LNT, tree_TGJets_LFV1 ,tree_TGJets_LFV2 ,TGJets_LNT, TGJets_LFV1, TGJets_LFV2,hs,"TGJets", lumi);







/*
Looper_data<ClassReadData,HistCreater> loop_d;
TChain *tree_Data=L.Load("Data");
ClassReadData Data(tree_Data);
loop_d.Loop(tree_Data,Data,hs,"Data");



//sample tav text could be used as argument to the stack plotter  
TPaveText *tpav_txt = new TPaveText(0.57043478,0.548342,0.8652174,0.9210471,"brNDC");
    tpav_txt->SetBorderSize(0);
    tpav_txt->SetFillStyle(0);
    tpav_txt->SetTextAlign(11);
    tpav_txt->SetTextFont(42);
    tpav_txt->SetTextSize(0.04);
    tpav_txt->AddText("HT >500");
    tpav_txt->AddText("#gamma p_{T} > 100 ");
    tpav_txt->AddText("NJets >=4");
    tpav_txt->AddText("MHT>200");
    tpav_txt->AddText("BTags=0");
//Example of how to use stack plotter
StackPlotter stack;

//uncomment the following line. put histogram names correctly
//sample arguments if you want to plot one signal,5 background and no data then use the function plotS1B5D0
//if you want to use data then use the function plotS1B5D1, this way you can use all possible combinations 
//use following procees nums
// TChiWZ_Var - 0    // TChiWZ_225_135 - 1    // TChiWZ_200_150 - 2    // TChiWZ_600_300 - 3    // WZTo3LNu - 4    // DYJetsToLL_M50 - 5    // DYJetsToLL_M10to50 - 6    // TTJets_DiLepton - 7    // TTJets_SingleLeptonFromT - 8    // TTJets_SingleLeptonFromTbar - 9    // TTJets_DiLepton_ext - 10    // WJetsToLNu - 11    // ZZTo4L - 12    // GGHZZ4L - 13    // ZZZ - 14    // WZZ - 15    // WWW - 16    // tZW_ll - 17    // TTZToLLNuNu - 18    // WGToLNuG - 19    // ZGTo2LG - 20    // WWG - 21    // TTGJets - 22    // WZG - 23    // TGJets - 24    // Data - 25    

stack.plotS1B3D0("HT(GeV)",tpav_txt,hs.h_[0][0][0],"ZH_mG750",hs.h_[0][3][0],"ZJets",hs.h_[0][4][0],"QCD",hs.h_[0][5][0],"TTJets");
*/


f->Write();

}
