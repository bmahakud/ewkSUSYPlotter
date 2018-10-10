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
#include "HistCreater.C"
using namespace std;


void plotS1B1D0( string VarName,TPaveText *txtGen , TH1F *hs1 , string sig_proc1,  TH1F *hb1  , string bkg_proc1 ){
using namespace std;
TStyle *gStyle = new TStyle("gStyle","Style for P-TDR");
SetStyle st;
st.SetPars(gStyle);
char Variable[100];
char Cname[100];
const char *Var_Name;
Var_Name=VarName.c_str();
sprintf(Variable," ;%s; Events",Var_Name);
sprintf(Cname,"%s",Var_Name);
TPaveText *pCMS = new TPaveText(0.132107,0.9308003,0.8327759,0.9923583,"brNDC");
pCMS->SetBorderSize(0);
pCMS->SetFillStyle(0);
pCMS->SetTextAlign(11);
pCMS->SetTextFont(42);
pCMS->SetTextSize(0.04);
pCMS->AddText("CMS #it{Preliminary}                   140 fb^{-1}, #sqrt{s}= 13 TeV");
TLegend *leg=new TLegend(0.3582943,0.7051483,0.55025753,0.9049564,NULL,"brNDC");
leg->SetTextFont(62);
leg->SetLineColor(1);
leg->SetLineStyle(1);
leg->SetLineWidth(3);
leg->SetFillColor(0);
leg->SetFillStyle(1001);
leg->SetShadowColor(0);
leg->SetDrawOption(0);
leg->SetBorderSize(0);
leg->SetTextSize(0.03);
THStack *hallbkg=new THStack("hallbkg",Variable);
hb1->SetFillColor(2);
hb1->SetLineColor(1);
hallbkg->Add(hb1);
char h1L_bkg[100];
const char *h1_L_bkg;
h1_L_bkg=bkg_proc1.c_str();
sprintf(h1L_bkg,"%s",h1_L_bkg);
leg->AddEntry(hb1,h1L_bkg,"f");
hs1->SetFillStyle(1);
hs1->SetLineColor(1);
char h1L_sig[100];
const char *h1_L_sig;
h1_L_sig=sig_proc1.c_str();
sprintf(h1L_sig,"%s",h1_L_sig);
leg->AddEntry(hs1,h1L_sig,"l");
TCanvas *c=new TCanvas(Cname,Cname);
c->cd();
//hallbkg->Draw("hist");
//hallbkg->GetYaxis()->SetTitle("Events");
//hallbkg->Draw("hist");

hb1->Draw("hist");
hs1->SetLineWidth(2);
hs1->Draw("hist same");
txtGen->Draw();
pCMS->Draw();
leg->Draw();
c->Write();
}



void AnalyzerSimpleHTmll(){
 
LoaderNTuple LNT;
LoaderFriendV1 LFV1;
LoaderFriendV2 LFV2;



TFile *f=new TFile("Histograms.root","RECREATE");
//HistCreater hs;
//Looper_sig<ClassReadSig,HistCreater> loop_s;
//Looper_bkg<ClassReadBkg,HistCreater> loop_b;


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

TH1F *hMTs=new TH1F("hMTs","hMTs",50,0.,250.);
TH1F *hMTWZ=new TH1F("hMTWZ","hMTWZ",50,0.,250.);

TH1F *hMlls=new TH1F("hMlls","hMlls",30,0,180);
TH1F *hMllWZ=new TH1F("hMllWZ","hMllWZ",30,0,180);

TH1F *hMETs=new TH1F("hMETs","hMETs",90,0,1500);
TH1F *hMETWZ=new TH1F("hMETWZ","hMETWZ",90,0,1500);


TH1F *hHTs=new TH1F("hHTs","hHTs",100,0,2500);
TH1F *hHTWZ=new TH1F("hHTWZ","hHTWZ",100,0,2500);
///////////////////////////////////////////////////////////////////////

TH2F *hHTMllsig=new TH2F("hHTMllsig","hHTMllsig",100,0,2500,100,0,500);

TH1F *hMll_HT1sig=new TH1F("hMll_HT1sig","hMll_HT1sig",100,0,500);
TH1F *hMll_HT2sig=new TH1F("hMll_HT2sig","hMll_HT2sig",100,0,500);
TH1F *hMll_HT3sig=new TH1F("hMll_HT3sig","hMll_HT3sig",100,0,500);
TH1F *hMll_HT4sig=new TH1F("hMll_HT4sig","hMll_HT4sig",100,0,500);
hMll_HT1sig->SetLineColor(1);
hMll_HT2sig->SetLineColor(2);
hMll_HT3sig->SetLineColor(3);
hMll_HT4sig->SetLineColor(4);



TH2F *hHTMllbkg=new TH2F("hHTMllbkg","hHTMllbkg",100,0,2500,100,0,500);

TH1F *hMll_HT1bkg=new TH1F("hMll_HT1bkg","hMll_HT1bkg",100,0,500);
TH1F *hMll_HT2bkg=new TH1F("hMll_HT2bkg","hMll_HT2bkg",100,0,500);
TH1F *hMll_HT3bkg=new TH1F("hMll_HT3bkg","hMll_HT3bkg",100,0,500);
TH1F *hMll_HT4bkg=new TH1F("hMll_HT4bkg","hMll_HT4bkg",100,0,500);
hMll_HT1bkg->SetLineColor(1);
hMll_HT2bkg->SetLineColor(2);
hMll_HT3bkg->SetLineColor(3);
hMll_HT4bkg->SetLineColor(4);

















for(int i=0;i<tree_TChiWZ_225_135LNT->GetEntries();i++){
tree_TChiWZ_225_135LNT->GetEntry(i);
tree_TChiWZ_225_135LFV1->GetEntry(i);
tree_TChiWZ_225_135LFV2->GetEntry(i);

if(i % 1000==0)std::cout<<"TChiWZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_TChiWZ_225_135LNT->GetEntries()))*100<<" %"<<std::endl;

//cout<<"value: "<<TChiWZ_225_135LFV2.is_3l<<endl;
if(TChiWZ_225_135LFV2.nOSSFL_3l==1  && TChiWZ_225_135LNT.met_pt >50. && TChiWZ_225_135LFV2.mllL_3l > 20.0 && TChiWZ_225_135LNT.htJet40 >10  ){
hMTs->Fill(TChiWZ_225_135LFV2.mTL_3l );
hMlls->Fill(TChiWZ_225_135LFV2.mllL_3l);
hMETs->Fill(TChiWZ_225_135LNT.met_pt);
hHTs->Fill(TChiWZ_225_135LNT.htJet40);

hHTMllsig->Fill(TChiWZ_225_135LNT.htJet40, TChiWZ_225_135LFV2.mllL_3l);

if(TChiWZ_225_135LNT.htJet40>100 && TChiWZ_225_135LNT.htJet40<300)hMll_HT1sig->Fill(TChiWZ_225_135LFV2.mllL_3l);
if(TChiWZ_225_135LNT.htJet40>300 && TChiWZ_225_135LNT.htJet40<500)hMll_HT2sig->Fill(TChiWZ_225_135LFV2.mllL_3l);
if(TChiWZ_225_135LNT.htJet40>500 && TChiWZ_225_135LNT.htJet40<800)hMll_HT3sig->Fill(TChiWZ_225_135LFV2.mllL_3l);
if(TChiWZ_225_135LNT.htJet40>800 )hMll_HT4sig->Fill(TChiWZ_225_135LFV2.mllL_3l);

}
}


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
if(i % 1000==0)std::cout<<"WZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_WZTo3LNuLNT->GetEntries()))*100<<" %"<<std::endl;

if(WZTo3LNuLFV2.nOSSFL_3l==1 && WZTo3LNuLNT.met_pt >50. && WZTo3LNuLFV2.mllL_3l > 20.0 && WZTo3LNuLNT.htJet40 >10  ){
hMTWZ->Fill(WZTo3LNuLFV2.mTL_3l);
hMllWZ->Fill(WZTo3LNuLFV2.mllL_3l);
hMETWZ->Fill(WZTo3LNuLNT.met_pt);
hHTWZ->Fill(WZTo3LNuLNT.htJet40);

hHTMllbkg->Fill(WZTo3LNuLNT.htJet40, WZTo3LNuLFV2.mllL_3l);

if(WZTo3LNuLNT.htJet40>100 && WZTo3LNuLNT.htJet40<300)hMll_HT1bkg->Fill(WZTo3LNuLFV2.mllL_3l);
if(WZTo3LNuLNT.htJet40>300 && WZTo3LNuLNT.htJet40<500)hMll_HT2bkg->Fill(WZTo3LNuLFV2.mllL_3l);
if(WZTo3LNuLNT.htJet40>500 && WZTo3LNuLNT.htJet40<800)hMll_HT3bkg->Fill(WZTo3LNuLFV2.mllL_3l);
if(WZTo3LNuLNT.htJet40>800 )hMll_HT4bkg->Fill(WZTo3LNuLFV2.mllL_3l);



}


}




TCanvas *cMllinHT=new TCanvas("cMllinHT","cMllinHT");
cMllinHT->cd();
leg_1D[0]->AddEntry(hMll_HT1sig,"200<HT<300","l");
leg_1D[0]->AddEntry(hMll_HT2sig,"300<HT<500","l");
leg_1D[0]->AddEntry(hMll_HT3sig,"500<HT<800","l");
leg_1D[0]->AddEntry(hMll_HT4sig,"HT>800","l");

hMll_HT1sig->Scale(1/hMll_HT1sig->Integral());
hMll_HT2sig->Scale(1/hMll_HT2sig->Integral());
hMll_HT3sig->Scale(1/hMll_HT3sig->Integral());
hMll_HT4sig->Scale(1/hMll_HT4sig->Integral());


hMll_HT1sig->Draw("hist");
hMll_HT2sig->Draw("hist same");
hMll_HT3sig->Draw("hist same");
hMll_HT4sig->Draw("hist same");
leg_1D[0]->Draw();

TCanvas *cMllinHTbkg=new TCanvas("cMllinHTbkg","cMllinHTbkg");
cMllinHTbkg->cd();
leg_1D[1]->AddEntry(hMll_HT1bkg,"200<HT<300","l");
leg_1D[1]->AddEntry(hMll_HT2bkg,"300<HT<500","l");
leg_1D[1]->AddEntry(hMll_HT3bkg,"500<HT<800","l");
leg_1D[1]->AddEntry(hMll_HT4bkg,"HT>800","l");

hMll_HT1bkg->Scale(1/hMll_HT1bkg->Integral());
hMll_HT2bkg->Scale(1/hMll_HT2bkg->Integral());
hMll_HT3bkg->Scale(1/hMll_HT3bkg->Integral());
hMll_HT4bkg->Scale(1/hMll_HT4bkg->Integral());


hMll_HT1bkg->Draw("hist");
hMll_HT2bkg->Draw("hist same");
hMll_HT3bkg->Draw("hist same");
hMll_HT4bkg->Draw("hist same");
leg_1D[1]->Draw();

TCanvas *cMllvsHT2Dbkg=new TCanvas("cMllvsHT2Dbkg","cMllvsHT2Dbkg");
cMllvsHT2Dbkg->cd();
hHTMllbkg->Draw("colz");


cout<<"correlation factor bkg HT Mll: "<<hHTMllbkg->GetCorrelationFactor()<<endl;
cout<<"correlation factor sig HT Mll: "<<hHTMllsig->GetCorrelationFactor()<<endl;




//hMTs->Scale(2.0);//1/hMTs->Integral())
//hMTWZ->Scale(0.2);
/*
cout<<"hMTs: "<<hMTs->Integral()<<endl;
cout<<"hMll: "<<hMlls->Integral()<<endl;
cout<<"hMETs: "<<hMETs->Integral()<<endl;
cout<<"hHTs: "<<hHTs->Integral()<<endl;


cout<<"hMTWZ: "<<hMTWZ->Integral()<<endl;
cout<<"hMllWZ: "<<hMllWZ->Integral()<<endl;
cout<<"hMETWZ: "<<hMETWZ->Integral()<<endl;
cout<<"hHTWZ: "<<hHTWZ->Integral()<<endl;



cout<<"hMTs: "<<hMTs->GetEntries()<<endl;
cout<<"hMll: "<<hMlls->GetEntries()<<endl;
cout<<"hMETs: "<<hMETs->GetEntries()<<endl;
cout<<"hHTs: "<<hHTs->GetEntries()<<endl;


cout<<"hMTWZ: "<<hMTWZ->GetEntries()<<endl;
cout<<"hMllWZ: "<<hMllWZ->GetEntries()<<endl;
cout<<"hMETWZ: "<<hMETWZ->GetEntries()<<endl;
cout<<"hHTWZ: "<<hHTWZ->GetEntries()<<endl;





for(int i=0;i<tree_DYJetsToLL_M50LNT->GetEntries();i++){
tree_DYJetsToLL_M50LNT->GetEntry(i);
tree_DYJetsToLL_M50LFV1->GetEntry(i);
tree_DYJetsToLL_M50LFV2->GetEntry(i);

if(i % 1000==0)std::cout<<"DY_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_DYJetsToLL_M50LNT->GetEntries()))*100<<" %"<<std::endl;

if(DYJetsToLL_M50LFV2.nOSSFT_3l==1 && DYJetsToLL_M50LNT.met_pt> 50. && DYJetsToLL_M50LNT.minMllSFOS>12.){
hMTDY->Fill(DYJetsToLL_M50LFV2.mTL_3l,29);

}
}


for(int i=0;i<tree_TTJets_DiLeptonLNT->GetEntries();i++){
tree_TTJets_DiLeptonLNT->GetEntry(i);
tree_TTJets_DiLeptonLFV1->GetEntry(i);
tree_TTJets_DiLeptonLFV2->GetEntry(i);
if(i % 1000==0)std::cout<<"tt_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_TTJets_DiLeptonLNT->GetEntries()))*100<<" %"<<std::endl;


if(TTJets_DiLeptonLFV2.nOSSFT_3l==1 && TTJets_DiLeptonLNT.met_pt> 50. && TTJets_DiLeptonLNT.minMllSFOS>12.){
hMTtt->Fill(TTJets_DiLeptonLFV2.mTL_3l,2.0);

}


}

*/
/////////////////////////////////////
TPaveText *tpav_txt = new TPaveText(0.57043478,0.548342,0.8652174,0.9210471,"brNDC");
    tpav_txt->SetBorderSize(0);
    tpav_txt->SetFillStyle(0);
    tpav_txt->SetTextAlign(11);
    tpav_txt->SetTextFont(42);
    tpav_txt->SetTextSize(0.04);
    tpav_txt->AddText("3 leptons");
    tpav_txt->AddText("OSSF");



//plotS1B3D0( "mTW",tpav_txt , hMTs , "TChiWZ_225_135", hMTtt  , "TT", hMTDY  , "DY",  hMTWZ  , "WZ");
//plotS1B1D0( "mTW",tpav_txt , hMTs , "TChiWZ_225_135",hMTWZ  , "WZ");//, hMTDY, "DY", hMTtt  , "TT");
//plotS1B1D0( "Mll",tpav_txt , hMlls , "TChiWZ_225_135",hMllWZ  , "WZ");
//plotS1B1D0( "MET",tpav_txt , hMETs , "TChiWZ_225_135",hMETWZ  , "WZ");
//plotS1B1D0( "HT",tpav_txt , hHTs , "TChiWZ_225_135",hHTWZ  , "WZ");


/*

TChain *tree_TChiWZ_100_20=L.Load("TChiWZ_100_20");
ClassReadSig TChiWZ_100_20(tree_TChiWZ_100_20);
loop_s.Loop(tree_TChiWZ_100_20,TChiWZ_100_20,hs,"TChiWZ_100_20");



TChain *tree_TChiWZ_125_115=L.Load("TChiWZ_125_115");
ClassReadSig TChiWZ_125_115(tree_TChiWZ_125_115);
loop_s.Loop(tree_TChiWZ_125_115,TChiWZ_125_115,hs,"TChiWZ_125_115");



TChain *tree_TChiWZ_125_25=L.Load("TChiWZ_125_25");
ClassReadSig TChiWZ_125_25(tree_TChiWZ_125_25);
loop_s.Loop(tree_TChiWZ_125_25,TChiWZ_125_25,hs,"TChiWZ_125_25");



TChain *tree_TChiWZ_150_30=L.Load("TChiWZ_150_30");
ClassReadSig TChiWZ_150_30(tree_TChiWZ_150_30);
loop_s.Loop(tree_TChiWZ_150_30,TChiWZ_150_30,hs,"TChiWZ_150_30");



TChain *tree_TChiWZ_150_90=L.Load("TChiWZ_150_90");
ClassReadSig TChiWZ_150_90(tree_TChiWZ_150_90);
loop_s.Loop(tree_TChiWZ_150_90,TChiWZ_150_90,hs,"TChiWZ_150_90");



TChain *tree_TChiWZ_200_100=L.Load("TChiWZ_200_100");
ClassReadSig TChiWZ_200_100(tree_TChiWZ_200_100);
loop_s.Loop(tree_TChiWZ_200_100,TChiWZ_200_100,hs,"TChiWZ_200_100");



TChain *tree_TChiWZ_200_170=L.Load("TChiWZ_200_170");
ClassReadSig TChiWZ_200_170(tree_TChiWZ_200_170);
loop_s.Loop(tree_TChiWZ_200_170,TChiWZ_200_170,hs,"TChiWZ_200_170");



TChain *tree_TChiWZ_350_250=L.Load("TChiWZ_350_250");
ClassReadSig TChiWZ_350_250(tree_TChiWZ_350_250);
loop_s.Loop(tree_TChiWZ_350_250,TChiWZ_350_250,hs,"TChiWZ_350_250");



TChain *tree_TChiWZ_400_250=L.Load("TChiWZ_400_250");
ClassReadSig TChiWZ_400_250(tree_TChiWZ_400_250);
loop_s.Loop(tree_TChiWZ_400_250,TChiWZ_400_250,hs,"TChiWZ_400_250");



TChain *tree_TChiWZ_425_250=L.Load("TChiWZ_425_250");
ClassReadSig TChiWZ_425_250(tree_TChiWZ_425_250);
loop_s.Loop(tree_TChiWZ_425_250,TChiWZ_425_250,hs,"TChiWZ_425_250");



TChain *tree_TChiWZ_450_300=L.Load("TChiWZ_450_300");
ClassReadSig TChiWZ_450_300(tree_TChiWZ_450_300);
loop_s.Loop(tree_TChiWZ_450_300,TChiWZ_450_300,hs,"TChiWZ_450_300");



TChain *tree_TChiWZ_525_200=L.Load("TChiWZ_525_200");
ClassReadSig TChiWZ_525_200(tree_TChiWZ_525_200);
loop_s.Loop(tree_TChiWZ_525_200,TChiWZ_525_200,hs,"TChiWZ_525_200");



TChain *tree_TChiWZ_575_250=L.Load("TChiWZ_575_250");
ClassReadSig TChiWZ_575_250(tree_TChiWZ_575_250);
loop_s.Loop(tree_TChiWZ_575_250,TChiWZ_575_250,hs,"TChiWZ_575_250");



TChain *tree_TChiWZ_600_300=L.Load("TChiWZ_600_300");
ClassReadSig TChiWZ_600_300(tree_TChiWZ_600_300);
loop_s.Loop(tree_TChiWZ_600_300,TChiWZ_600_300,hs,"TChiWZ_600_300");



TChain *tree_TChiWZ_650_100=L.Load("TChiWZ_650_100");
ClassReadSig TChiWZ_650_100(tree_TChiWZ_650_100);
loop_s.Loop(tree_TChiWZ_650_100,TChiWZ_650_100,hs,"TChiWZ_650_100");



TChain *tree_TChiWZ_700_150=L.Load("TChiWZ_700_150");
ClassReadSig TChiWZ_700_150(tree_TChiWZ_700_150);
loop_s.Loop(tree_TChiWZ_700_150,TChiWZ_700_150,hs,"TChiWZ_700_150");



TChain *tree_TChiWZ_700_250=L.Load("TChiWZ_700_250");
ClassReadSig TChiWZ_700_250(tree_TChiWZ_700_250);
loop_s.Loop(tree_TChiWZ_700_250,TChiWZ_700_250,hs,"TChiWZ_700_250");



TChain *tree_TChiWZ_700_300=L.Load("TChiWZ_700_300");
ClassReadSig TChiWZ_700_300(tree_TChiWZ_700_300);
loop_s.Loop(tree_TChiWZ_700_300,TChiWZ_700_300,hs,"TChiWZ_700_300");



TChain *tree_TChiWZ_225_135=L.Load("TChiWZ_225_135");
ClassReadSig TChiWZ_225_135(tree_TChiWZ_225_135);
loop_s.Loop(tree_TChiWZ_225_135,TChiWZ_225_135,hs,"TChiWZ_225_135");







Looper_bkg<ClassReadBkg,HistCreater> loop_b;
TChain *tree_WZTo3LNu=L.Load("WZTo3LNu");
ClassReadBkg WZTo3LNu(tree_WZTo3LNu);
loop_b.Loop(tree_WZTo3LNu,WZTo3LNu,hs,"WZTo3LNu");



TChain *tree_TTJets_DiLepton=L.Load("TTJets_DiLepton");
ClassReadBkg TTJets_DiLepton(tree_TTJets_DiLepton);
loop_b.Loop(tree_TTJets_DiLepton,TTJets_DiLepton,hs,"TTJets_DiLepton");



TChain *tree_DYJetsToLL_M50=L.Load("DYJetsToLL_M50");
ClassReadBkg DYJetsToLL_M50(tree_DYJetsToLL_M50);
loop_b.Loop(tree_DYJetsToLL_M50,DYJetsToLL_M50,hs,"DYJetsToLL_M50");








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
// TChiWZ_100_20 - 0    // TChiWZ_125_115 - 1    // TChiWZ_125_25 - 2    // TChiWZ_150_30 - 3    // TChiWZ_150_90 - 4    // TChiWZ_200_100 - 5    // TChiWZ_200_170 - 6    // TChiWZ_350_250 - 7    // TChiWZ_400_250 - 8    // TChiWZ_425_250 - 9    // TChiWZ_450_300 - 10    // TChiWZ_525_200 - 11    // TChiWZ_575_250 - 12    // TChiWZ_600_300 - 13    // TChiWZ_650_100 - 14    // TChiWZ_700_150 - 15    // TChiWZ_700_250 - 16    // TChiWZ_700_300 - 17    // TChiWZ_225_135 - 18    // WZTo3LNu - 19    // TTJets_DiLepton - 20    // DYJetsToLL_M50 - 21    // Data - 22    

stack.plotS1B3D0("HT(GeV)",tpav_txt,hs.h_[0][0][0],"ZH_mG750",hs.h_[0][3][0],"ZJets",hs.h_[0][4][0],"QCD",hs.h_[0][5][0],"TTJets");
*/


f->Write();

}




