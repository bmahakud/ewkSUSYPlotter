


void Plot(){

TFile *f=new TFile("Histograms6METBins.root","READ");


TH1F *hsMET=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A");

TH1F *hsMll=(TH1F*)f->Get("h_m2l_TChiWZ_225_135_A");

TH1F *hbMET=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A");

TH1F *hbMETDY=(hbMETDY*)f->Get("");


TH1F *hbMll=(TH1F*)f->Get("h_m2l_WZTo3LNu_A");


hsMET->Scale(1/hsMET->Integral());
hbMET->Scale(1/hbMET->Integral());

hsMll->Scale(1/hsMll->Integral());
hbMll->Scale(1/hbMll->Integral());


hsMll->SetLineColor(2);

hsMll->Draw();
hbMll->Draw("same");









}
