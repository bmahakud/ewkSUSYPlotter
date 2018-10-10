template <class classInst, class HistogramCreater> class Looper_bkg: public HelperClass{
public:

void Loop(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,HistogramCreater hs, string ProcessName, double lumi);

bool Baseline(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);

bool ProcessCuts(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);

bool Basic(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);

bool BasicPlus(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);

double UserDef_2016Bins(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);
double UserDef_2016MllBins(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);
double UserDef_2016MllBinsv2(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);
};

template <class classInst,class HistogramCreater> void Looper_bkg<classInst,HistogramCreater>::Loop(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,HistogramCreater hs,string ProcessName, double lumi)

{//looper definition

string processes[26]={ "TChiWZ_Var"  , "TChiWZ_225_135"  , "TChiWZ_200_150"  , "TChiWZ_600_300"  , "WZTo3LNu"  , "DYJetsToLL_M50"  , "DYJetsToLL_M10to50"  , "TTJets_DiLepton"  , "TTJets_SingleLeptonFromT"  , "TTJets_SingleLeptonFromTbar"  , "TTJets_DiLepton_ext"  , "WJetsToLNu"  , "ZZTo4L"  , "GGHZZ4L"  , "ZZZ"  , "WZZ"  , "WWW"  , "tZW_ll"  , "TTZToLLNuNu"  , "WGToLNuG"  , "ZGTo2LG"  , "WWG"  , "TTGJets"  , "WZG"  , "TGJets"  , "Data"  };
double xsecWeights[26]={1, 0.0222277, 0.037621, 0.00043166559, 0.000401486861, 0.207951450379, 0.460855740514, 0.014326866279, 0.0152358451117, 0.00377437306283, 0.00358579395652, 2.56057182096, 0.000215117852384, 1.39966740576e-05,5.60911903128e-05, 0.000225486223663, 0.000869166666667, 0.0002246, 0.000129987612885, 0.0959726859573, 0.00913537470343, 0.000214828897338, 0.000848001908406, 4.13043478261e-05, 0.0101433123197, 1 };
string dataprocesses[1]={
"Data"  };
const int processesSize=26;
            auto it=std::find(processes,processes+processesSize,ProcessName);
            int processInt=it-processes;
       std::cout<<"Total number of entries: "<<trN->GetEntries()<<std::endl;

       for(int iEv=0;iEv<trN->GetEntries();iEv++){// event loop

       trN->GetEntry(iEv);

       trF1->GetEntry(iEv);

       trF2->GetEntry(iEv);

          if(iEv % 5000==0)std::cout<<"Running on "<<ProcessName<<" event no: "<<iEv<<"---completed : "<<(float(iEv)/float(trN->GetEntries()))*100<<" %"<<std::endl;

            if(Baseline(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv)  && ProcessCuts(trN, trF1, trF2, readN, readF1, readF2, ProcessName, iEv)){ //Baseline for this processn

            double EventWeight=1;
            EventWeight=xsecWeights[processInt]*lumi;
if(Basic(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv)){
         hs.h_[0][processInt][0]->Fill(readN.met_pt,EventWeight); 
         hs.h_[1][processInt][0]->Fill(readF2.mllL_3l,EventWeight); 
         hs.h_[2][processInt][0]->Fill(readF2.mTL_3l,EventWeight); 
         hs.h_[3][processInt][0]->Fill(readF1.htJet30j_Mini,EventWeight); 
         hs.h_[4][processInt][0]->Fill(UserDef_2016Bins(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); 
         hs.h_[5][processInt][0]->Fill(UserDef_2016MllBins(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); 
         hs.h_[6][processInt][0]->Fill(UserDef_2016MllBinsv2(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); 
}

if(BasicPlus(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv)){
         hs.h_[0][processInt][1]->Fill(readN.met_pt,EventWeight); 
         hs.h_[1][processInt][1]->Fill(readF2.mllL_3l,EventWeight); 
         hs.h_[2][processInt][1]->Fill(readF2.mTL_3l,EventWeight); 
         hs.h_[3][processInt][1]->Fill(readF1.htJet30j_Mini,EventWeight); 
         hs.h_[4][processInt][1]->Fill(UserDef_2016Bins(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); 
         hs.h_[5][processInt][1]->Fill(UserDef_2016MllBins(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); 
         hs.h_[6][processInt][1]->Fill(UserDef_2016MllBinsv2(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); 
}

               }//Baseline for this process

       }//event loop

}//looper definition

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::Baseline(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){

if(
readF2.nLepSel==3 &&
readF2.LepSel_isTight[0] && readF2.LepSel_isTight[1] && readF2.LepSel_isTight[2] &&
abs(readF2.LepSel_pdgId[0]) < 15 && abs(readF2.LepSel_pdgId[1]) < 15 && abs(readF2.LepSel_pdgId[2]) < 15 && readF2.nOSSF_3l >= 1 &&
abs(readF2.m3L-91.) > 15 &&
readF2.LepSel_pt[0] >= (20 + 5*(abs(readF2.LepSel_pdgId[0])==11)) && readF2.LepSel_pt[1] >= (10 + 5*(abs(readF2.LepSel_pdgId[1])==11)) && readF2.LepSel_pt[2] >= (10 + 0*(abs(readF2.LepSel_pdgId[3])==11)) &&
readF1.nBJetMedium25_Mini ==0 &&
(readF1.minMllSFOS_Mini == -1 || readF1.minMllSFOS_Mini > 12) &&
readN.met_pt>50.0
){

return true;

}
else{
return false;

}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::ProcessCuts(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){

if(ProcessName=="TChiWZ_Var"){

return true;
}

if(ProcessName=="TChiWZ_600_300"){

return true;
}

if(ProcessName=="TChiWZ_200_150"){

return true;
}

if(ProcessName=="TChiWZ_225_135"){

return true;
}

if(ProcessName=="ZGTo2LG"){

return true;
}

if(ProcessName=="WWW"){

return true;
}

if(ProcessName=="TTJets_DiLepton_ext"){

return true;
}

if(ProcessName=="WZZ"){

return true;
}

if(ProcessName=="TTJets_SingleLeptonFromTbar"){

return true;
}

if(ProcessName=="DYJetsToLL_M10to50"){

return true;
}

if(ProcessName=="TTGJets"){

return true;
}

if(ProcessName=="TTJets_DiLepton"){

return true;
}

if(ProcessName=="WJetsToLNu"){

return true;
}

if(ProcessName=="TGJets"){

return true;
}

if(ProcessName=="DYJetsToLL_M50"){

return true;
}

if(ProcessName=="TTZToLLNuNu"){

return true;
}

if(ProcessName=="WGToLNuG"){

return true;
}

if(ProcessName=="WWG"){

return true;
}

if(ProcessName=="tZW_ll"){

return true;
}

if(ProcessName=="ZZZ"){

return true;
}

if(ProcessName=="WZG"){

return true;
}

if(ProcessName=="ZZTo4L"){

return true;
}

if(ProcessName=="WZTo3LNu"){

return true;
}

if(ProcessName=="GGHZZ4L"){

return true;
}

if(ProcessName=="TTJets_SingleLeptonFromT"){

return true;
}

if(ProcessName=="Data"){

return true;
}

return false;
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::Basic(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){

if(readN.met_pt > 50){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::BasicPlus(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){

if(readN.met_pt > 50 && readF2.mllL_3l >12.){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_2016Bins(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){
double mTW=readF2.mTL_3l;double MET=readN.met_pt;double Mll=readF2.mllL_3l;return HelperClass::Binning2016(mTW, MET, Mll);
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_2016MllBins(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){
 double mTW=readF2.mTL_3l;double MET=readN.met_pt;double Mll=readF2.mllL_3l;return HelperClass::Binning2016Mll(mTW, MET, Mll);
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_2016MllBinsv2(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){
double mTW=readF2.mTL_3l;double MET=readN.met_pt;double Mll=readF2.mllL_3l;return HelperClass::Binning2016Mllv2(mTW, MET, Mll);
}

