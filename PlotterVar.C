
#include "SetStyle.C"

void PlotterVar(std::string Variable="h_met_pt_TChiWZ_225_135_Basic"){

TStyle *gStyle = new TStyle("gStyle","Style for P-TDR");
SetStyle st;
st.SetPars(gStyle);

/*
list_mc_bkgNames = ['WZTo3LNu', 'DYJetsToLL_M50', 'DYJetsToLL_M10to50', 'TTJets_DiLepton', 'TTJets_SingleLeptonFromT', 'TTJets_SingleLeptonFromTbar', 'TTJets_DiLepton_ext', 'WJetsToLNu', 'ZZTo4L', 'GGHZZ4L', 'ZZZ', 'WZZ',  'WWW', 'tZW_ll', 'TTZToLLNuNu', 'WGToLNuG', 'ZGTo2LG', 'WWG', 'TTGJets', 'WZG', 'TGJets'}
*/


//list_mc_sigNames =["TChiWZ_Var","TChiWZ_225_135","TChiWZ_200_150","TChiWZ_600_300"]


TFile *f=new TFile("Histograms35p9_fbi.root","READ");

const char *varName;


varName = Variable.c_str();

char hsigVarName[1000];
char hsigOne[1000];
char hsigTwo[1000];
char hsigThree[1000];
char hDYM50[1000];
char hDYM10[1000];
char hDiLep[1000];
char hDiLepExt[1000];
char hSingleLepT[1000];
char hSingleLepTbar[1000];
char hWjetlnu[1000];
char hZZTo4L[1000];
char hGGHZZ4L[1000];
char hZZZ[1000];
char hWZZ[1000];
char hWWW[1000];
char htZW_ll[1000];
char hTTZToLLNuNu[1000];
char hWGToLNuG[1000];
char hZGTo2LG[1000];
char hWWG[1000];
char hTTGJets[1000];
char WZG[1000];
char TGJets[1000];










sprintf(hsigVarName,"%s",varName);
printf(hsigOne,"%s",);
printf(hsigTwo,"%s",);
printf(hsigThree,"%s",);
printf(hDYM50,"%s",);
printf(hDYM10,"%s",);
printf(hDiLep,"%s",);
printf(hDiLepExt,"%s",);
printf(hSingleLepT,"%s",);
printf(hSingleLepTbar,"%s",);
printf(hWjetlnu,"%s",);
printf(hZZTo4L,"%s",);
printf(hGGHZZ4L,"%s",);
printf(hZZZ,"%s",);
printf(hWZZ,"%s",);
printf(hWWW,"%s",);
printf(htZW_ll,"%s",);
printf(hTTZToLLNuNu,"%s",);
printf(hWGToLNuG,"%s",);
printf(hZGTo2LG,"%s",);
printf(hWWG,"%s",);
printf(hTTGJets,"%s",);
printf(WZG,"%s",);
printf(TGJets,"%s",);








TH1F *hSignal=(TH1F*)f->Get(hsigVarName);

hSignal->Draw();





























}
