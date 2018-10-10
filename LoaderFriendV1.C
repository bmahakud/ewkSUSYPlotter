class LoaderFriendV1{
 
public:
TChain *Load(string ProcessName);
};
TChain *LoaderFriendV1::Load(string ProcessName="TTJets"){
if(ProcessName=="TChiWZ_Var"){
TChain *tr_TChiWZ_Var=new TChain("tree");
cout<<"Total events present in process TChiWZ_Var: "<<tr_TChiWZ_Var->GetEntries()<<endl;
return tr_TChiWZ_Var;

}
if(ProcessName=="TChiWZ_225_135"){
TChain *tr_TChiWZ_225_135=new TChain("tree");
tr_TChiWZ_225_135->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/signals/TChiWZ_225_135.root");
cout<<"Total events present in process TChiWZ_225_135: "<<tr_TChiWZ_225_135->GetEntries()<<endl;
return tr_TChiWZ_225_135;

}
if(ProcessName=="TChiWZ_200_150"){
TChain *tr_TChiWZ_200_150=new TChain("tree");
tr_TChiWZ_200_150->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/signals/TChiWZ_200_150.root");
cout<<"Total events present in process TChiWZ_200_150: "<<tr_TChiWZ_200_150->GetEntries()<<endl;
return tr_TChiWZ_200_150;

}
if(ProcessName=="TChiWZ_600_300"){
TChain *tr_TChiWZ_600_300=new TChain("tree");
tr_TChiWZ_600_300->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/signals/TChiWZ_600_300.root");
cout<<"Total events present in process TChiWZ_600_300: "<<tr_TChiWZ_600_300->GetEntries()<<endl;
return tr_TChiWZ_600_300;

}
if(ProcessName=="WZTo3LNu"){
TChain *tr_WZTo3LNu=new TChain("tree");
tr_WZTo3LNu->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WZTo3LNu_amcatnlo.root");
cout<<"Total events present in process WZTo3LNu: "<<tr_WZTo3LNu->GetEntries()<<endl;
return tr_WZTo3LNu;

}
if(ProcessName=="DYJetsToLL_M50"){
TChain *tr_DYJetsToLL_M50=new TChain("tree");
tr_DYJetsToLL_M50->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/DYJetsToLL_M50.root");
cout<<"Total events present in process DYJetsToLL_M50: "<<tr_DYJetsToLL_M50->GetEntries()<<endl;
return tr_DYJetsToLL_M50;

}
if(ProcessName=="DYJetsToLL_M10to50"){
TChain *tr_DYJetsToLL_M10to50=new TChain("tree");
tr_DYJetsToLL_M10to50->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/DYJetsToLL_M10to50.root");
cout<<"Total events present in process DYJetsToLL_M10to50: "<<tr_DYJetsToLL_M10to50->GetEntries()<<endl;
return tr_DYJetsToLL_M10to50;

}
if(ProcessName=="TTJets_DiLepton"){
TChain *tr_TTJets_DiLepton=new TChain("tree");
tr_TTJets_DiLepton->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTJets_DiLepton.root");
cout<<"Total events present in process TTJets_DiLepton: "<<tr_TTJets_DiLepton->GetEntries()<<endl;
return tr_TTJets_DiLepton;

}
if(ProcessName=="TTJets_SingleLeptonFromT"){
TChain *tr_TTJets_SingleLeptonFromT=new TChain("tree");
tr_TTJets_SingleLeptonFromT->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTJets_SingleLeptonFromT.root");
cout<<"Total events present in process TTJets_SingleLeptonFromT: "<<tr_TTJets_SingleLeptonFromT->GetEntries()<<endl;
return tr_TTJets_SingleLeptonFromT;

}
if(ProcessName=="TTJets_SingleLeptonFromTbar"){
TChain *tr_TTJets_SingleLeptonFromTbar=new TChain("tree");
tr_TTJets_SingleLeptonFromTbar->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTJets_SingleLeptonFromTbar.root");
cout<<"Total events present in process TTJets_SingleLeptonFromTbar: "<<tr_TTJets_SingleLeptonFromTbar->GetEntries()<<endl;
return tr_TTJets_SingleLeptonFromTbar;

}
if(ProcessName=="TTJets_DiLepton_ext"){
TChain *tr_TTJets_DiLepton_ext=new TChain("tree");
tr_TTJets_DiLepton_ext->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTJets_DiLepton_ext.root");
cout<<"Total events present in process TTJets_DiLepton_ext: "<<tr_TTJets_DiLepton_ext->GetEntries()<<endl;
return tr_TTJets_DiLepton_ext;

}
if(ProcessName=="WJetsToLNu"){
TChain *tr_WJetsToLNu=new TChain("tree");
tr_WJetsToLNu->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WJetsToLNu.root");
cout<<"Total events present in process WJetsToLNu: "<<tr_WJetsToLNu->GetEntries()<<endl;
return tr_WJetsToLNu;

}
if(ProcessName=="ZZTo4L"){
TChain *tr_ZZTo4L=new TChain("tree");
tr_ZZTo4L->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/ZZTo4L.root");
cout<<"Total events present in process ZZTo4L: "<<tr_ZZTo4L->GetEntries()<<endl;
return tr_ZZTo4L;

}
if(ProcessName=="GGHZZ4L"){
TChain *tr_GGHZZ4L=new TChain("tree");
tr_GGHZZ4L->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/GGHZZ4L.root");
cout<<"Total events present in process GGHZZ4L: "<<tr_GGHZZ4L->GetEntries()<<endl;
return tr_GGHZZ4L;

}
if(ProcessName=="ZZZ"){
TChain *tr_ZZZ=new TChain("tree");
tr_ZZZ->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/ZZZ.root");
cout<<"Total events present in process ZZZ: "<<tr_ZZZ->GetEntries()<<endl;
return tr_ZZZ;

}
if(ProcessName=="WZZ"){
TChain *tr_WZZ=new TChain("tree");
tr_WZZ->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WZZ.root");
cout<<"Total events present in process WZZ: "<<tr_WZZ->GetEntries()<<endl;
return tr_WZZ;

}
if(ProcessName=="WWW"){
TChain *tr_WWW=new TChain("tree");
tr_WWW->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WWW.root");
cout<<"Total events present in process WWW: "<<tr_WWW->GetEntries()<<endl;
return tr_WWW;

}
if(ProcessName=="tZW_ll"){
TChain *tr_tZW_ll=new TChain("tree");
tr_tZW_ll->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/tZW_ll.root");
cout<<"Total events present in process tZW_ll: "<<tr_tZW_ll->GetEntries()<<endl;
return tr_tZW_ll;

}
if(ProcessName=="TTZToLLNuNu"){
TChain *tr_TTZToLLNuNu=new TChain("tree");
tr_TTZToLLNuNu->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTZToLLNuNu.root");
cout<<"Total events present in process TTZToLLNuNu: "<<tr_TTZToLLNuNu->GetEntries()<<endl;
return tr_TTZToLLNuNu;

}
if(ProcessName=="WGToLNuG"){
TChain *tr_WGToLNuG=new TChain("tree");
tr_WGToLNuG->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WGToLNuG.root");
cout<<"Total events present in process WGToLNuG: "<<tr_WGToLNuG->GetEntries()<<endl;
return tr_WGToLNuG;

}
if(ProcessName=="ZGTo2LG"){
TChain *tr_ZGTo2LG=new TChain("tree");
tr_ZGTo2LG->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/ZGTo2LG.root");
cout<<"Total events present in process ZGTo2LG: "<<tr_ZGTo2LG->GetEntries()<<endl;
return tr_ZGTo2LG;

}
if(ProcessName=="WWG"){
TChain *tr_WWG=new TChain("tree");
tr_WWG->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WWG.root");
cout<<"Total events present in process WWG: "<<tr_WWG->GetEntries()<<endl;
return tr_WWG;

}
if(ProcessName=="TTGJets"){
TChain *tr_TTGJets=new TChain("tree");
tr_TTGJets->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTGJets.root");
cout<<"Total events present in process TTGJets: "<<tr_TTGJets->GetEntries()<<endl;
return tr_TTGJets;

}
if(ProcessName=="WZG"){
TChain *tr_WZG=new TChain("tree");
tr_WZG->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WZG.root");
cout<<"Total events present in process WZG: "<<tr_WZG->GetEntries()<<endl;
return tr_WZG;

}
if(ProcessName=="TGJets"){
TChain *tr_TGJets=new TChain("tree");
tr_TGJets->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TGJets.root");
cout<<"Total events present in process TGJets: "<<tr_TGJets->GetEntries()<<endl;
return tr_TGJets;

}
if(ProcessName=="Data"){
TChain *tr_Data=new TChain("tree");
tr_Data->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/data/WZTo3LNu.root");
cout<<"Total events present in process Data: "<<tr_Data->GetEntries()<<endl;
return tr_Data;

}
else{

throw std::invalid_argument( "You have provided an in valid argument , Try to look into the Inputdetails.dat and put a correct argument" );


}
}
