


void PlotYield(){

TH1F *hs=new TH1F("hs","hs",6,0,6);
hs->SetBinContent(1,1300);
hs->SetBinContent(2,554);
hs->SetBinContent(3,176);
hs->SetBinContent(4,83);
hs->SetBinContent(5,70);
hs->SetBinContent(6,9);


TH1F *hb=new TH1F("hb","hb",6,0,6);
hb->SetBinContent(1,25277);
hb->SetBinContent(2,5174);
hb->SetBinContent(3,1414);
hb->SetBinContent(4,536);
hb->SetBinContent(5,486);
hb->SetBinContent(6,70);

hs->SetLineColor(2);
hb->SetFillColor(5);
hs->SetLineWidth(2);

hb->Draw();
hs->Draw("same");




}
