


void Print(){

TFile *f=new TFile("Histograms7METBins.root","READ");


TH1F *hsMET1=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A1");
TH1F *hsMET12=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A12");

TH1F *hsMET2=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A2");
TH1F *hsMET3=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A3");
TH1F *hsMET4=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A4");
TH1F *hsMET5=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A5");
TH1F *hsMET6=(TH1F*)f->Get("h_met_pt_TChiWZ_225_135_A6");



TH1F *hbMET1=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A1");
TH1F *hbMET12=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A12");
TH1F *hbMET2=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A2");
TH1F *hbMET3=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A3");
TH1F *hbMET4=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A4");
TH1F *hbMET5=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A5");
TH1F *hbMET6=(TH1F*)f->Get("h_met_pt_WZTo3LNu_A6");


cout<<"SA1:   "<<hsMET1->Integral()<<endl;
cout<<"SA12:   "<<hsMET12->Integral()<<endl;
cout<<"SA2:   "<<hsMET2->Integral()<<endl;
cout<<"SA3:   "<<hsMET3->Integral()<<endl;
cout<<"SA4:   "<<hsMET4->Integral()<<endl;
cout<<"SA5:   "<<hsMET5->Integral()<<endl;
cout<<"SA6:   "<<hsMET6->Integral()<<endl;

cout<<"BA1:   "<<hbMET1->Integral()<<endl;
cout<<"BA12:   "<<hbMET12->Integral()<<endl;
cout<<"BA2:   "<<hbMET2->Integral()<<endl;
cout<<"BA3:   "<<hbMET3->Integral()<<endl;
cout<<"BA4:   "<<hbMET4->Integral()<<endl;
cout<<"BA5:   "<<hbMET5->Integral()<<endl;
cout<<"BA6:   "<<hbMET6->Integral()<<endl;











}
