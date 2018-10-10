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
#include "HistCreater.C"
#include <string>
#include <fstream>

using namespace std;



void Analyzer2DSigma(std::string fileName="TChiWZ_100_20.root" ){

fstream SigmaInfo;
SigmaInfo.open ("log.txt", fstream::app);


 
LoaderNTuple LNT;
LoaderFriendV1 LFV1;
LoaderFriendV2 LFV2;



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




TChain *tree_TChiWZLNT=new TChain("tree");
tree_TChiWZLNT->Add(NtupName);
ClassReadSig TChiWZLNT(tree_TChiWZLNT);


TChain *tree_TChiWZLFV1=new TChain("sf/t");
tree_TChiWZLFV1->Add(LFV1Name);
ClassReadSig TChiWZLFV1(tree_TChiWZLFV1);

TChain *tree_TChiWZLFV2=new TChain("sf/t");
tree_TChiWZLFV2->Add(LFV2Name);
ClassReadSig TChiWZLFV2(tree_TChiWZLFV2);






TChain *tree_WZTo3LNuLNT=LNT.Load("WZTo3LNu");
ClassReadBkg WZTo3LNuLNT(tree_WZTo3LNuLNT);

TChain *tree_WZTo3LNuLFV1=LFV1.Load("WZTo3LNu");
ClassReadBkg WZTo3LNuLFV1(tree_WZTo3LNuLFV1);

TChain *tree_WZTo3LNuLFV2=LFV2.Load("WZTo3LNu");
ClassReadBkg WZTo3LNuLFV2(tree_WZTo3LNuLFV2);


TChain *tree_TTJets_DiLeptonLNT=LNT.Load("TTJets_DiLepton");
ClassReadBkg TTJets_DiLeptonLNT(tree_TTJets_DiLeptonLNT);

TChain *tree_TTJets_DiLeptonLFV1=LFV1.Load("TTJets_DiLepton");
ClassReadBkg TTJets_DiLeptonLFV1(tree_TTJets_DiLeptonLFV1);

TChain *tree_TTJets_DiLeptonLFV2=LFV2.Load("TTJets_DiLepton");
ClassReadBkg TTJets_DiLeptonLFV2(tree_TTJets_DiLeptonLFV2);


TChain *tree_DYJetsToLL_M50LNT=LNT.Load("DYJetsToLL_M50");
ClassReadBkg DYJetsToLL_M50LNT(tree_DYJetsToLL_M50LNT);

TChain *tree_DYJetsToLL_M50LFV1=LFV1.Load("DYJetsToLL_M50");
ClassReadBkg DYJetsToLL_M50LFV1(tree_DYJetsToLL_M50LFV1);

TChain *tree_DYJetsToLL_M50LFV2=LFV2.Load("DYJetsToLL_M50");
ClassReadBkg DYJetsToLL_M50LFV2(tree_DYJetsToLL_M50LFV2);


//Weight calculation
//52416.0, xsec=762.405 fb  TChi_225_135 : weight=2.0
//1993200, WLnu, xsec= 4.4297 pb, weight =0.31
//28968252., DY, xsec=6024 pb, weight=29
//6094476 , ttbar-dilepton= 87.315 pb, 2.0


TH1F *hMlls=new TH1F("hMlls","hMlls",7,20,160);
TH1F *hMllWZ=new TH1F("hMllWZ","hMllWZ",7,20,160);
TH1F *hMllDY=new TH1F("hMllDY","hMllDY",7,20,160);

TH1F *hMllsSHOW=new TH1F("hMllsSHOW","hMllsSHOW",80,20,160);
TH1F *hMllWZSHOW=new TH1F("hMllWZSHOW","hMllWZSHOW",80,20,160);
hMllsSHOW->SetLineColor(2);
hMllsSHOW->SetLineWidth(2);
hMllWZSHOW->SetLineWidth(2);



double Range[4]={20,75,105,160};


TH1F *hMlls3Bin=new TH1F("hMlls3Bin","hMlls3Bin",3,Range);
TH1F *hMllWZ3Bin=new TH1F("hMllWZ3Bin","hMllWZ3Bin",3,Range);



TH1F *hSbyB=new TH1F("hSbyB","hSbyB",7,20,160);
TH1F *hSbyB3Bin=new TH1F("hSbyB3Bin","hSbyB3Bin",3,Range);





/*


for(int i=0;i<tree_TChiWZLNT->GetEntries();i++){
tree_TChiWZLNT->GetEntry(i);
tree_TChiWZLFV1->GetEntry(i);
tree_TChiWZLFV2->GetEntry(i);

if(i % 5000==0)std::cout<<"TChiWZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_TChiWZLNT->GetEntries()))*100<<" %"<<std::endl;

//cout<<"value: "<<TChiWZ_225_135LFV2.is_3l<<endl;
if(TChiWZLFV2.nOSSFL_3l==1  && TChiWZLNT.met_pt >50. && TChiWZLFV2.mllL_3l > 20.0 && TChiWZLNT.htJet40 >10  ){
hMlls->Fill(TChiWZLFV2.mllL_3l);
hMlls3Bin->Fill(TChiWZLFV2.mllL_3l);
hMllsSHOW->Fill(TChiWZLFV2.mllL_3l);




}
}

*/
char Legname1[100];


TLegend *leg_1D[24]; 

for(int k0=0;k0<24;k0++){
sprintf(Legname1,"leg_1D%i",k0);

leg_1D[k0]=new TLegend(0.5,0.7,0.80,0.89);
leg_1D[k0]->SetTextFont(62);
leg_1D[k0]->SetLineColor(1);
leg_1D[k0]->SetLineStyle(1);
leg_1D[k0]->SetLineWidth(3);
leg_1D[k0]->SetFillColor(0);
leg_1D[k0]->SetFillStyle(1001);
leg_1D[k0]->SetShadowColor(0);
leg_1D[k0]->SetDrawOption(0);
leg_1D[k0]->SetBorderSize(0);
leg_1D[k0]->SetTextSize(0.03);

}










//hHTMETsig->GetXaxis()->SetTitle("HT");
//hHTMETsig->GetYaxis()->SetTitle("MET");

//hHTMETsig->Draw("colz");
//cout<<"correlation factor: "<<hHTMETsig->GetCorrelationFactor()<<endl;




//cout<<"Entries: "<<hMTs->GetEntries()<<endl;
//cout<<"Integral: "<<hMTs->Integral(0,50)<<endl;



for(int i=0;i<tree_WZTo3LNuLNT->GetEntries();i++){
tree_WZTo3LNuLNT->GetEntry(i);
tree_WZTo3LNuLFV1->GetEntry(i);
tree_WZTo3LNuLFV2->GetEntry(i);
if(i % 5000==0)std::cout<<"WZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_WZTo3LNuLNT->GetEntries()))*100<<" %"<<std::endl;

//if(WZTo3LNuLFV2.nOSSFL_3l==1 && WZTo3LNuLNT.met_pt >50. && WZTo3LNuLFV2.mllL_3l > 20.0 && WZTo3LNuLNT.htJet40 >10  ){
bool passLepPt=false;
if (WZTo3LNuLFV2.LepSel_pt[0] >= (20 + 5*(abs(WZTo3LNuLFV2.LepSel_pdgId[0])==11)) && WZTo3LNuLFV2.LepSel_pt[1] >= (10 + 5*(abs(WZTo3LNuLFV2.LepSel_pdgId[1])==11)) && WZTo3LNuLFV2.LepSel_pt[2] >= (10 + 0*(abs(WZTo3LNuLFV2.LepSel_pdgId[3])==11))){
passLepPt=true;
}



if(WZTo3LNuLFV2.nLepSel==3  && 
WZTo3LNuLNT.met_pt >50 && 
passLepPt==true &&
WZTo3LNuLFV2.LepSel_isTight[0] && WZTo3LNuLFV2.LepSel_isTight[1] && WZTo3LNuLFV2.LepSel_isTight[2] && 

abs(WZTo3LNuLFV2.LepSel_pdgId[0]) < 15 && abs(WZTo3LNuLFV2.LepSel_pdgId[1]) < 15 && abs(WZTo3LNuLFV2.LepSel_pdgId[2]) < 15 && WZTo3LNuLFV2.nOSSF_3l >= 1 &&

abs(WZTo3LNuLFV2.m3L-91.) > 15 && 

WZTo3LNuLFV1.nBJetMedium25_Mini ==0 &&

(WZTo3LNuLFV1.minMllSFOS_Mini == -1 || WZTo3LNuLFV1.minMllSFOS_Mini > 12) ){

hMllWZ->Fill(WZTo3LNuLFV2.mllL_3l, 0.079784);
hMllWZ3Bin->Fill(WZTo3LNuLFV2.mllL_3l);
hMllWZSHOW->Fill(WZTo3LNuLFV2.mllL_3l);


}

}

cout<<"Integral: "<<hMllWZ->Integral()<<endl;

/*

for(int i=0;i<tree_DYJetsToLL_M50LNT->GetEntries();i++){
tree_DYJetsToLL_M50LNT->GetEntry(i);
tree_DYJetsToLL_M50LFV1->GetEntry(i);
tree_DYJetsToLL_M50LFV2->GetEntry(i);

if(i % 1000==0)std::cout<<"DY_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_DYJetsToLL_M50LNT->GetEntries()))*100<<" %"<<std::endl;

if(DYJetsToLL_M50LFV2.nOSSFT_3l==1 && DYJetsToLL_M50LNT.met_pt> 50. && WZTo3LNuLFV2.mllL_3l > 20 ){
hMllDY->Fill(DYJetsToLL_M50LFV2.mllL_3l,7.46);

}
}



cout<<"DY integral: "<<hMllDY->Integral()<<endl;





//hMlls->Scale(1/hMlls->Integral());
//hMllWZ->Scale(1/hMllWZ->Integral());

//hMlls3Bin->Scale(1/hMlls3Bin->Integral());
//hMllWZ3Bin->Scale(1/hMllWZ3Bin->Integral());


double sumSbsqrtB7bin=0;
double sumSbsqrtB3bin=0;

for(int i=1;i<=7;i++){
//cout<<"signal:  "<<hMlls->GetBinContent(i)<<endl;
//cout<<"bkg:  "<<hMllWZ->GetBinContent(i)<<endl;
double s=hMlls->GetBinContent(i);
double b=hMllWZ->GetBinContent(i);
double sigma2=s*s/b;

sumSbsqrtB7bin=sumSbsqrtB7bin+sigma2;

}

cout<<"sum sigma2(7bin):  "<<sumSbsqrtB7bin<<endl;
//sigma2=0;
for(int i=1;i<=3;i++){
//cout<<"signal 3 bin:  "<<hMlls3Bin->GetBinContent(i)<<endl;
//cout<<"bkg3 bin :  "<<hMllWZ3Bin->GetBinContent(i)<<endl;


double s=hMlls3Bin->GetBinContent(i);
double b=hMllWZ3Bin->GetBinContent(i);
double sigma2=s*s/b;
sumSbsqrtB3bin=sumSbsqrtB3bin+sigma2;
}

cout<<"sum sigma2(3bin):  "<<sumSbsqrtB3bin<<endl;



SigmaInfo<<fileName<<" "<<sumSbsqrtB3bin<<" "<<sumSbsqrtB7bin<<endl;
*/
}




