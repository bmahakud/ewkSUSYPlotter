// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include "SetStyle.C"
void Plot2DSigma(){

TStyle *gStyle = new TStyle("gStyle","Style for P-TDR");
SetStyle st;
st.SetPars(gStyle);


double NeutralinoMass;
double LSPMass;
double Sigma3Bin;
double Sigma7Bin;
ifstream read("MassPointVsSigma.dat");

TH2F *h_Sigma3bin=new TH2F("h_Sigma3bin","h_Sigma3bin",24,100,700,30,0,300);
TH2F *h_Sigma7bin=new TH2F("h_Sigma7bin","h_Sigma7bin",24,100,700,30,0,300);



for(int i=1;i<378;i++){
read>>NeutralinoMass>>LSPMass>>Sigma3Bin>>Sigma7Bin;
//cout<<NeutralinoMass<<" "<<LSPMass<<" "<<Sigma3Bin<<" "<<Sigma7Bin<<endl;

//if(Sigma3Bin>Sigma7Bin)cout<<"signal: "<<NeutralinoMass<<"-"<<LSPMass<<endl;
cout<<"Signal: "<<NeutralinoMass<<"-"<<LSPMass<<": difference : "<<Sigma7Bin-Sigma3Bin<<endl;

h_Sigma3bin->Fill(NeutralinoMass,LSPMass,Sigma3Bin);
h_Sigma7bin->Fill(NeutralinoMass,LSPMass,Sigma7Bin);

}

TCanvas *c3bin=new TCanvas("c3bin","c3bin");
c3bin->cd();
h_Sigma3bin->GetZaxis()->SetRangeUser(0,20);

h_Sigma3bin->GetXaxis()->SetTitle("m_#chi_{1}^{#pm}");
h_Sigma3bin->GetYaxis()->SetTitle("m_LSP");
h_Sigma3bin->GetZaxis()->SetTitle("s/#sqrt(b)");
h_Sigma3bin->Draw("colz");



TCanvas *c7bin=new TCanvas("c7bin","c7bin");
c7bin->cd();

h_Sigma7bin->GetZaxis()->SetRangeUser(0,20);
h_Sigma7bin->GetXaxis()->SetTitle("m_#chi_{1}^{#pm}");
h_Sigma7bin->GetYaxis()->SetTitle("m_LSP");
h_Sigma7bin->Draw("colz");









}
