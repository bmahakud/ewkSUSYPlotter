
#include <string>
#include <fstream>

void GetEventsBkg(std::string fileName="WZTo3LNu.root",std::string Xsec="4.42965"){

fstream SigmaInfo;
SigmaInfo.open ("BackgroundWeights.txt", fstream::app);


double xsec  = std::stod(Xsec);


std::string PathStup="/eos/cms/store/user/cheidegg/samples/bkg/";
PathStup=PathStup+fileName;
const char *pathNtup;
pathNtup = PathStup.c_str();
char NtupName[1000];
sprintf(NtupName,"%s",pathNtup);


TFile *f=new TFile(NtupName,"READ");

TH1D *h=(TH1D*)f->Get("Count");

//std::cout<<"Events: "<<h->Integral()<<std::endl;

double Events=h->GetEntries();

cout<<"Events: "<<Events<<endl;

double weight=(xsec*1000.)/Events;


cout<<"Weight for Sample- "<<fileName<<":  "<<weight<<endl; 

SigmaInfo<<fileName<<" "<<Events<<endl;


}
















