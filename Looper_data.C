template <class classInst, class HistogramCreater> class Looper_data{
public:

void Loop(TChain *tr,classInst& read,HistogramCreater hs, string ProcessName);

bool Baseline(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool ProcessCuts(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A1(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A12(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A2(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A3(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A4(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A5(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A6(TChain *tr,classInst& read,string ProcessName,int iEvent);

double UserDef_Var1(TChain *tr,classInst& read,string ProcessName,int iEvent);
};

template <class classInst,class HistogramCreater> void Looper_data<classInst,HistogramCreater>::Loop(TChain *tr,classInst& read,HistogramCreater hs,string ProcessName)

{//looper definition

string processes[23]={ "TChiWZ_100_20"  , "TChiWZ_125_115"  , "TChiWZ_125_25"  , "TChiWZ_150_30"  , "TChiWZ_150_90"  , "TChiWZ_200_100"  , "TChiWZ_200_170"  , "TChiWZ_350_250"  , "TChiWZ_400_250"  , "TChiWZ_425_250"  , "TChiWZ_450_300"  , "TChiWZ_525_200"  , "TChiWZ_575_250"  , "TChiWZ_600_300"  , "TChiWZ_650_100"  , "TChiWZ_700_150"  , "TChiWZ_700_250"  , "TChiWZ_700_300"  , "TChiWZ_225_135"  , "WZTo3LNu"  , "TTJets_DiLepton"  , "DYJetsToLL_M50"  , "Data"  };
string dataprocesses[1]={ "Data"  };
const int processesSize=23;
            auto it=std::find(processes,processes+processesSize,ProcessName);
            int processInt=it-processes;
       std::cout<<"Total number of entries: "<<tr->GetEntries()<<std::endl;

       for(int iEv=0;iEv<tr->GetEntries();iEv++){// event loop

       tr->GetEntry(iEv);

          if(iEv % 1000==0)std::cout<<"Running on "<<ProcessName<<" event no: "<<iEv<<"---completed : "<<(float(iEv)/float(tr->GetEntries()))*100<<" %"<<std::endl;

            if(Baseline(tr,read,ProcessName,iEv)  && ProcessCuts(tr,read,ProcessName, iEv)){ //Baseline for this processn

            double EventWeight=1;
if(A(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][0]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][0]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][0]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][0]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][0]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][0]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A1(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][1]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][1]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][1]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][1]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][1]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][1]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A12(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][2]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][2]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][2]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][2]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][2]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][2]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A2(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][3]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][3]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][3]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][3]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][3]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][3]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A3(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][4]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][4]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][4]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][4]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][4]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][4]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A4(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][5]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][5]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][5]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][5]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][5]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][5]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A5(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][6]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][6]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][6]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][6]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][6]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][6]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

if(A6(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][7]->Fill(read.nLepGood20,EventWeight); 
         hs.h_[1][processInt][7]->Fill(read.htJet40,EventWeight); 
         hs.h_[2][processInt][7]->Fill(read.m2l,EventWeight); 
         hs.h_[3][processInt][7]->Fill(read.met_pt,EventWeight); 
         hs.h_[4][processInt][7]->Fill(read.bestMTopHad,EventWeight); 
         hs.h_[5][processInt][7]->Fill(UserDef_Var1(tr,read,ProcessName,iEv),EventWeight); 
}

               }//Baseline for this process

       }//event loop

}//looper definition

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::Baseline(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(
read. nLepGood20 >=3 &&
read. LepGood_pt[0]>20 &&
read. LepGood_pt[1] >10 &&
read. LepGood_pt[2] > 10 &&
read. m2l>50
){

return true;

}
else{
return false;

}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::ProcessCuts(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(ProcessName=="TChiWZ_400_250"){

return true;
}

if(ProcessName=="TChiWZ_125_115"){

return true;
}

if(ProcessName=="TChiWZ_150_30"){

return true;
}

if(ProcessName=="TChiWZ_700_250"){

return true;
}

if(ProcessName=="TChiWZ_100_20"){

return true;
}

if(ProcessName=="TChiWZ_575_250"){

return true;
}

if(ProcessName=="TChiWZ_600_300"){

return true;
}

if(ProcessName=="TChiWZ_125_25"){

return true;
}

if(ProcessName=="TChiWZ_350_250"){

return true;
}

if(ProcessName=="TChiWZ_700_150"){

return true;
}

if(ProcessName=="TChiWZ_450_300"){

return true;
}

if(ProcessName=="TChiWZ_700_300"){

return true;
}

if(ProcessName=="TChiWZ_200_100"){

return true;
}

if(ProcessName=="TChiWZ_425_250"){

return true;
}

if(ProcessName=="TChiWZ_225_135"){

return true;
}

if(ProcessName=="TChiWZ_525_200"){

return true;
}

if(ProcessName=="TChiWZ_150_90"){

return true;
}

if(ProcessName=="TChiWZ_650_100"){

return true;
}

if(ProcessName=="TChiWZ_200_170"){

return true;
}

if(ProcessName=="WZTo3LNu"){

return true;
}

if(ProcessName=="TTJets_DiLepton"){

return true;
}

if(ProcessName=="DYJetsToLL_M50"){

return true;
}

if(ProcessName=="Data"){

return true;
}

return false;
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 50){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A1(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 50 && read.met_pt<75){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A12(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 75 && read.met_pt<100){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A2(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 100 && read.met_pt<150){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A3(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 150 && read.met_pt<200){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A4(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 200 && read.met_pt<250){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A5(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 250 && read.met_pt<400){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_data<classInst,HistogramCreater>::A6(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(read.met_pt > 400){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> double Looper_data<classInst,HistogramCreater>::UserDef_Var1(TChain *tr,classInst& read,string ProcessName,int iEvent){
return 1.0;
}

