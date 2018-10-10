class Loader{
 
public:
TChain *Load(string ProcessName);
};
TChain *Loader::Load(string ProcessName="TTJets"){
if(ProcessName=="TChiWZ_100_20"){
TChain *tr_TChiWZ_100_20=new TChain("tree");
tr_TChiWZ_100_20->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/signals/TChiWZ_100_20.root");
cout<<"Total events present in process TChiWZ_100_20: "<<tr_TChiWZ_100_20->GetEntries()<<endl;
return tr_TChiWZ_100_20;

}
if(ProcessName=="TChiWZ_125_115"){
TChain *tr_TChiWZ_125_115=new TChain("tree");
tr_TChiWZ_125_115->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/signals/TChiWZ_125_115.root");
cout<<"Total events present in process TChiWZ_125_115: "<<tr_TChiWZ_125_115->GetEntries()<<endl;
return tr_TChiWZ_125_115;

}
if(ProcessName=="TChiWZ_125_25"){
TChain *tr_TChiWZ_125_25=new TChain("tree");
tr_TChiWZ_125_25->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/signals/TChiWZ_125_25.root");
cout<<"Total events present in process TChiWZ_125_25: "<<tr_TChiWZ_125_25->GetEntries()<<endl;
return tr_TChiWZ_125_25;

}
if(ProcessName=="WZTo3LNu"){
TChain *tr_WZTo3LNu=new TChain("tree");
tr_WZTo3LNu->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/WZTo3LNu.root");
cout<<"Total events present in process WZTo3LNu: "<<tr_WZTo3LNu->GetEntries()<<endl;
return tr_WZTo3LNu;

}
if(ProcessName=="TTJets_DiLepton"){
TChain *tr_TTJets_DiLepton=new TChain("tree");
tr_TTJets_DiLepton->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/TTJets_DiLepton.root");
cout<<"Total events present in process TTJets_DiLepton: "<<tr_TTJets_DiLepton->GetEntries()<<endl;
return tr_TTJets_DiLepton;

}
if(ProcessName=="DYJetsToLL_M50"){
TChain *tr_DYJetsToLL_M50=new TChain("tree");
tr_DYJetsToLL_M50->Add("root://eoscms.cern.ch//store/user/cheidegg/samples/bkg/DYJetsToLL_M50.root");
cout<<"Total events present in process DYJetsToLL_M50: "<<tr_DYJetsToLL_M50->GetEntries()<<endl;
return tr_DYJetsToLL_M50;

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
