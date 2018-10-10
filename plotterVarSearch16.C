#include "PlotSig3Bkg7.C"

void plotterVarSearch16(){
TFile *f=new TFile("Histograms35p9_fbi.root","READ");
TH1F *h_UserDef_2016Bins_WZTo3LNu_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WZTo3LNu_Basic");
TH1F *h_UserDef_2016Bins_DYJetsToLL_M50_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_DYJetsToLL_M50_Basic");
TH1F *h_UserDef_2016Bins_DYJetsToLL_M10to50_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_DYJetsToLL_M10to50_Basic");
TH1F *h_UserDef_2016Bins_TTJets_DiLepton_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TTJets_DiLepton_Basic");
TH1F *h_UserDef_2016Bins_TTJets_SingleLeptonFromT_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TTJets_SingleLeptonFromT_Basic");
TH1F *h_UserDef_2016Bins_TTJets_SingleLeptonFromTbar_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TTJets_SingleLeptonFromTbar_Basic");
TH1F *h_UserDef_2016Bins_TTJets_DiLepton_ext_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TTJets_DiLepton_ext_Basic");
TH1F *h_UserDef_2016Bins_WJetsToLNu_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WJetsToLNu_Basic");
TH1F *h_UserDef_2016Bins_ZZTo4L_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_ZZTo4L_Basic");
TH1F *h_UserDef_2016Bins_GGHZZ4L_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_GGHZZ4L_Basic");
TH1F *h_UserDef_2016Bins_ZZZ_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_ZZZ_Basic");
TH1F *h_UserDef_2016Bins_WZZ_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WZZ_Basic");
TH1F *h_UserDef_2016Bins_WWW_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WWW_Basic");
TH1F *h_UserDef_2016Bins_tZW_ll_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_tZW_ll_Basic");
TH1F *h_UserDef_2016Bins_TTZToLLNuNu_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TTZToLLNuNu_Basic");
TH1F *h_UserDef_2016Bins_WGToLNuG_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WGToLNuG_Basic");
TH1F *h_UserDef_2016Bins_ZGTo2LG_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_ZGTo2LG_Basic");
TH1F *h_UserDef_2016Bins_WWG_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WWG_Basic");
TH1F *h_UserDef_2016Bins_TTGJets_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TTGJets_Basic");
TH1F *h_UserDef_2016Bins_WZG_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_WZG_Basic");
TH1F *h_UserDef_2016Bins_TGJets_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TGJets_Basic");
TH1F *h_UserDef_2016Bins_TChiWZ_Var_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TChiWZ_Var_Basic");
TH1F *h_UserDef_2016Bins_TChiWZ_225_135_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TChiWZ_225_135_Basic");
TH1F *h_UserDef_2016Bins_TChiWZ_200_150_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TChiWZ_200_150_Basic");
TH1F *h_UserDef_2016Bins_TChiWZ_600_300_Basic=(TH1F*)f->Get("h_UserDef_2016Bins_TChiWZ_600_300_Basic");
TH1F *hWZ= (TH1F*)h_UserDef_2016Bins_WZTo3LNu_Basic->Clone();
TH1F *hDY= (TH1F*)h_UserDef_2016Bins_DYJetsToLL_M50_Basic->Clone();
hDY->Add(h_UserDef_2016Bins_DYJetsToLL_M10to50_Basic);
TH1F *hTT = (TH1F*)h_UserDef_2016Bins_TTJets_DiLepton_Basic->Clone();
TH1F *hTText = (TH1F*)h_UserDef_2016Bins_TTJets_DiLepton_ext_Basic->Clone();
hTT->Add(hTText);
hTT->Scale(0.5);
TH1F *hTTFakes = (TH1F*)hTT->Clone();
hTTFakes->Add(h_UserDef_2016Bins_TTJets_SingleLeptonFromT_Basic);
hTTFakes->Add(h_UserDef_2016Bins_TTJets_SingleLeptonFromTbar_Basic);
hTTFakes->Add(h_UserDef_2016Bins_WJetsToLNu_Basic);
TH1F *hZZH = (TH1F*)h_UserDef_2016Bins_ZZTo4L_Basic->Clone();
hZZH->Add(h_UserDef_2016Bins_GGHZZ4L_Basic);
TH1F *hVVV = (TH1F*)h_UserDef_2016Bins_ZZZ_Basic->Clone();
hVVV->Add(h_UserDef_2016Bins_WZZ_Basic);
hVVV->Add(h_UserDef_2016Bins_WWW_Basic);
TH1F *httX = (TH1F*)h_UserDef_2016Bins_tZW_ll_Basic->Clone();
httX->Add(h_UserDef_2016Bins_TTZToLLNuNu_Basic);
TH1F *hConv = (TH1F*)h_UserDef_2016Bins_WGToLNuG_Basic->Clone();
hConv->Add(h_UserDef_2016Bins_ZGTo2LG_Basic);
hConv->Add(h_UserDef_2016Bins_WWG_Basic);
hConv->Add(h_UserDef_2016Bins_TTGJets_Basic);
hConv->Add(h_UserDef_2016Bins_WZG_Basic);
hConv->Add(h_UserDef_2016Bins_TGJets_Basic);

TPaveText *pav = new TPaveText(0.132107,0.9308003,0.8327759,0.9923583,"brNDC");
pav->SetBorderSize(0);
pav->SetFillStyle(0);
pav->SetTextAlign(11);
pav->SetTextFont(42);
pav->SetTextSize(0.04);
//pav->AddText("OSSF");





//plotS3B7D0("MET",pav, h_UserDef_2016Bins_TChiWZ_225_135_Basic, "TChiWZ(225, 135)",h_UserDef_2016Bins_TChiWZ_200_150_Basic,"TChiWZ(200, 150)",h_UserDef_2016Bins_TChiWZ_600_300_Basic,"TChiWZ(600, 300)",hWZ,"WZ",hDY,"DY Fakes",hTTFakes,"TT Fakes",hZZH,"ZZ/H",hVVV,"VVV",httX,"ttX",hConv,"Conv" );

plotS3B7D0("Bin Number (as per AN-16-299)",pav, h_UserDef_2016Bins_TChiWZ_225_135_Basic, "TChiWZ(225, 135)",h_UserDef_2016Bins_TChiWZ_200_150_Basic,"TChiWZ(200, 150)",h_UserDef_2016Bins_TChiWZ_600_300_Basic,"TChiWZ(600, 300)", httX,"ttX",hVVV,"VVV", hConv,"Conv", hZZH,"ZZ/H", hTTFakes,"TT Fakes", hDY,"DY Fakes",hWZ,"WZ");



}
