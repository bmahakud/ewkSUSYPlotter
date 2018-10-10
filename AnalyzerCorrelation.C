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

#include <string>
#include <fstream>

int nBinX=50; double Xmin=0;double Xmax=200;
int nBinY=100; double Ymin=0;double Ymax=1000;

int Y1=0;
int Y2=75;
int Y3=105;
int Y4=300;





void FillHistos(TH2F *hXYsig,TH1F *hX_Y1sig,TH1F *hX_Y2sig,TH1F *hX_Y3sig,TH1F  *hX_Y4sig,double X, double Y){


hXYsig->Fill(X, Y);

if(Y>Y1 && Y<Y2)hX_Y1sig->Fill(X);
if(Y>Y2 && Y<Y3)hX_Y2sig->Fill(X);
if(Y>Y3 && Y<Y4)hX_Y3sig->Fill(X);
if(Y>Y4 )hX_Y4sig->Fill(X);

}


void AnalyzerCorrelation(){

const char * Var;

std::string Variable="Mll";

Var=Variable.c_str();


char Range1[50];
char Range2[50];
char Range3[50];
char Range4[50];

sprintf(Range1, "%d<%s<%d",Y1,Var,Y2 );
sprintf(Range2, "%d<%s<%d",Y2,Var,Y3 );
sprintf(Range3, "%d<%s<%d",Y3,Var,Y4 );
sprintf(Range4, "%s>%d",Var,Y4 );


 
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

//define X n Y
//X=HT, Y=mTW
//int nBinX=100; double Xmin=0;double Xmax=2500;
//int nBinY=100; double Ymin=0;double Ymax=500

//TChiWZ_225_135LNT.htJet40
//TWZ_225_135LNT.met_pt
//TChiWZ_225_135LFV2.mllL_3l
//TChiWZ_225_135LFV2.mTL_3l



//cut boundary


TH2F *hXYsig=new TH2F("hXYsig","hXYsig",nBinX,Xmin,Xmax,nBinY,Ymin,Ymax);

TH1F *hX_Y1sig=new TH1F("hX_Y1sig","hX_Y1sig",nBinX,Xmin,Xmax);
TH1F *hX_Y2sig=new TH1F("hX_Y2sig","hX_Y2sig",nBinX,Xmin,Xmax);
TH1F *hX_Y3sig=new TH1F("hX_Y3sig","hX_Y3sig",nBinX,Xmin,Xmax);
TH1F *hX_Y4sig=new TH1F("hX_Y4sig","hX_Y4sig",nBinX,Xmin,Xmax);
hX_Y1sig->SetLineColor(1);
hX_Y2sig->SetLineColor(2);
hX_Y3sig->SetLineColor(3);
hX_Y4sig->SetLineColor(4);



TH2F *hXYbkg=new TH2F("hXYbkg","hXYbkg",nBinX,Xmin,Xmax,nBinY,Ymin,Ymax);

TH1F *hX_Y1bkg=new TH1F("hX_Y1bkg","hX_Y1bkg",nBinX,Xmin,Xmax);
TH1F *hX_Y2bkg=new TH1F("hX_Y2bkg","hX_Y2bkg",nBinX,Xmin,Xmax);
TH1F *hX_Y3bkg=new TH1F("hX_Y3bkg","hX_Y3bkg",nBinX,Xmin,Xmax);
TH1F *hX_Y4bkg=new TH1F("hX_Y4bkg","hX_Y4bkg",nBinX,Xmin,Xmax);
hX_Y1bkg->SetLineColor(1);
hX_Y2bkg->SetLineColor(2);
hX_Y3bkg->SetLineColor(3);
hX_Y4bkg->SetLineColor(4);





for(int i=0;i<tree_TChiWZ_225_135LNT->GetEntries();i++){
tree_TChiWZ_225_135LNT->GetEntry(i);
tree_TChiWZ_225_135LFV1->GetEntry(i);
tree_TChiWZ_225_135LFV2->GetEntry(i);

if(i % 1000==0)std::cout<<"TChiWZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_TChiWZ_225_135LNT->GetEntries()))*100<<" %"<<std::endl;

//cout<<"value: "<<TChiWZ_225_135LFV2.is_3l<<endl;
if(TChiWZ_225_135LFV2.nOSSFL_3l==1  && TChiWZ_225_135LNT.met_pt >50. && TChiWZ_225_135LFV2.mllL_3l > 20.0 && TChiWZ_225_135LNT.htJet40 >10  ){

FillHistos(hXYsig, hX_Y1sig, hX_Y2sig, hX_Y3sig, hX_Y4sig,TChiWZ_225_135LFV2.mTL_3l , TChiWZ_225_135LFV2.mllL_3l);

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













for(int i=0;i<tree_WZTo3LNuLNT->GetEntries();i++){
tree_WZTo3LNuLNT->GetEntry(i);
tree_WZTo3LNuLFV1->GetEntry(i);
tree_WZTo3LNuLFV2->GetEntry(i);
if(i % 1000==0)std::cout<<"WZ_Running on  event no: "<<i<<"---completed : "<<(float(i)/float(tree_WZTo3LNuLNT->GetEntries()))*100<<" %"<<std::endl;

if(WZTo3LNuLFV2.nOSSFL_3l==1 && WZTo3LNuLNT.met_pt >50. && WZTo3LNuLFV2.mllL_3l > 20.0 && WZTo3LNuLNT.htJet40 >10  ){

FillHistos(hXYbkg, hX_Y1bkg, hX_Y2bkg, hX_Y3bkg, hX_Y4bkg, WZTo3LNuLFV2.mTL_3l , WZTo3LNuLFV2.mllL_3l);

}


}




TCanvas *cXinY=new TCanvas("cXinY","cXinY");
cXinY->cd();
leg_1D[0]->AddEntry(hX_Y1sig, Range1,"l");
leg_1D[0]->AddEntry(hX_Y2sig, Range2,"l");
leg_1D[0]->AddEntry(hX_Y3sig, Range3,"l");
leg_1D[0]->AddEntry(hX_Y4sig, Range4,"l");

hX_Y1sig->Scale(1/hX_Y1sig->Integral());
hX_Y2sig->Scale(1/hX_Y2sig->Integral());
hX_Y3sig->Scale(1/hX_Y3sig->Integral());
hX_Y4sig->Scale(1/hX_Y4sig->Integral());


hX_Y1sig->Draw("hist");
hX_Y2sig->Draw("hist same");
hX_Y3sig->Draw("hist same");
//hX_Y4sig->Draw("hist same");
leg_1D[0]->Draw();

TCanvas *cXinYbkg=new TCanvas("cXinYbkg","cXinYbkg");
cXinYbkg->cd();
leg_1D[1]->AddEntry(hX_Y1bkg, Range1,"l");
leg_1D[1]->AddEntry(hX_Y2bkg, Range2,"l");
leg_1D[1]->AddEntry(hX_Y3bkg, Range3,"l");
leg_1D[1]->AddEntry(hX_Y4bkg, Range4,"l");

hX_Y1bkg->Scale(1/hX_Y1bkg->Integral());
hX_Y2bkg->Scale(1/hX_Y2bkg->Integral());
hX_Y3bkg->Scale(1/hX_Y3bkg->Integral());
hX_Y4bkg->Scale(1/hX_Y4bkg->Integral());


hX_Y1bkg->Draw("hist");
hX_Y2bkg->Draw("hist same");
hX_Y3bkg->Draw("hist same");
//hX_Y4bkg->Draw("hist same");
leg_1D[1]->Draw();


TCanvas *cXvsY2Dsig=new TCanvas("cXvsY2Dsig","cXvsY2Dsig");
cXvsY2Dsig->cd();
hXYsig->Draw("colz");

TCanvas *cXvsY2Dbkg=new TCanvas("cXvsY2Dbkg","cXvsY2Dbkg");
cXvsY2Dbkg->cd();
hXYbkg->Draw("colz");


cout<<"correlation factor bkg : "<<hXYbkg->GetCorrelationFactor()<<endl;
cout<<"correlation factor signal: "<<hXYsig->GetCorrelationFactor()<<endl;




//f->Write();

}




