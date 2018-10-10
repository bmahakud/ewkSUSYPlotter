
import os

import sys

sys.stdout = open('plotterVar.C','w')




list_mc_Names = ['WZTo3LNu', 'DYJetsToLL_M50', 'DYJetsToLL_M10to50', 'TTJets_DiLepton', 'TTJets_SingleLeptonFromT', 'TTJets_SingleLeptonFromTbar', 'TTJets_DiLepton_ext', 'WJetsToLNu', 'ZZTo4L', 'GGHZZ4L', 'ZZZ', 'WZZ',  'WWW', 'tZW_ll', 'TTZToLLNuNu', 'WGToLNuG', 'ZGTo2LG', 'WWG', 'TTGJets', 'WZG', 'TGJets', "TChiWZ_Var",'TChiWZ_225_135','TChiWZ_200_150','TChiWZ_600_300']






print 'void plotterVar(){'



print 'TFile *f=new TFile("Histograms35p9_fbi.root","READ");'


#h_met_pt_TChiWZ_Var_Basic

VariableName="met_pt"





for a in range(0,len(list_mc_Names)):
     print 'TH1F *h_%s_%s_Basic=(TH1F*)f->Get("h_%s_%s_Basic");'%(VariableName,list_mc_Names[a],VariableName,list_mc_Names[a])



print 'TH1F *hWZ= (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"WZTo3LNu")
print 'TH1F *hDY= (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"DYJetsToLL_M50")
print 'hDY->Add(h_%s_%s_Basic);'%(VariableName,"DYJetsToLL_M10to50")

print 'TH1F *hTT = (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"TTJets_DiLepton")
print 'TH1F *hTText = (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"TTJets_DiLepton_ext")
print 'hTT->Add(hTText);'
print 'hTT->Scale(0.5);'
print 'TH1F *hTTfakes = (TH1F*)hTT->Clone();'
print 'hTTFakes->Add(h_%s_%s_Basic);'%(VariableName,"TTJets_SingleLeptonFromT")
print 'hTTFakes->Add(h_%s_%s_Basic);'%(VariableName,"TTJets_SingleLeptonFromTbar")
print 'hTTFakes->Add(h_%s_%s_Basic);'%(VariableName,"WJetsToLNu")


print 'TH1F *hZZH = (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"ZZTo4L")
print 'hZZH->Add(h_%s_%s_Basic);'%(VariableName,"GGHZZ4L")

print 'TH1F *hVVV = (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"ZZZ")
print 'hVVV->Add(h_%s_%s_Basic);'%(VariableName,"WZZ")
print 'hVVV->Add(h_%s_%s_Basic);'%(VariableName,"WWW")

print 'TH1F *httX = (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"tZW_ll")
print 'httX->Add(h_%s_%s_Basic);'%(VariableName,"TTZToLLNuNu")


print 'TH1F *hConv = (TH1F*)h_%s_%s_Basic->Clone();'%(VariableName,"WGToLNuG")
print 'hConv->Add(h_%s_%s_Basic);'%(VariableName,"ZGTo2LG")
print 'hConv->Add(h_%s_%s_Basic);'%(VariableName,"WWG")
print 'hConv->Add(h_%s_%s_Basic);'%(VariableName,"TTGJets")
print 'hConv->Add(h_%s_%s_Basic);'%(VariableName,"WZG")
print 'hConv->Add(h_%s_%s_Basic);'%(VariableName,"TGJets")















print '}'











