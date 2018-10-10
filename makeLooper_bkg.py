def getVarFromFile(filename):
    import imp
    f = open(filename)
    global data
    data = imp.load_source('data', '', f)
    f.close()

getVarFromFile('InputDetailsNTuple.dat')
import os

import sys

sys.stdout = open('Looper_bkg.C','w')



print 'template <class classInst, class HistogramCreater> class Looper_bkg: public HelperClass{'   

print 'public:\n'

print 'void Loop(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,HistogramCreater hs, string ProcessName, double lumi);\n'

print 'bool Baseline(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);\n'

print 'bool ProcessCuts(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);\n'

if len(data.list_Categories)>0:
    for icate in data.list_Categories:
        print 'bool %s(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);\n'%(icate)

for iname in data.list_VarsFill:
    if "UserDef_" in iname:
        print 'double %s(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,string ProcessName,int iEvent);'%(iname)




print '};\n'

print 'template <class classInst,class HistogramCreater> void Looper_bkg<classInst,HistogramCreater>::Loop(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2 ,HistogramCreater hs,string ProcessName, double lumi)\n'
print '{//looper definition\n'

print 'string processes[%i]={'%(len(data.list_mc_sigNames)+len(data.list_mc_bkgNames)+len(data.list_dataNames)),
for name in data.list_mc_sigNames+data.list_mc_bkgNames+data.list_dataNames:
  print '"%s" '%(name),
  if name !=(data.list_mc_sigNames+data.list_mc_bkgNames+data.list_dataNames)[-1]:
      print ',',
print '};'

print '%s'%(data.Weights)
print 'string dataprocesses[%i]={'%(len(data.list_dataNames))


for name in data.list_dataNames:
  print '"%s" '%(name),
  if name !=(data.list_dataNames)[-1]:
      print ',',
print '};'


print 'const int processesSize=%i;'%(len(data.list_mc_sigNames)+len(data.list_mc_bkgNames)+len(data.list_dataNames))
print '            auto it=std::find(processes,processes+processesSize,ProcessName);'
print '            int processInt=it-processes;'

print '       std::cout<<"Total number of entries: "<<trN->GetEntries()<<std::endl;\n'
print '       for(int iEv=0;iEv<trN->GetEntries();iEv++){// event loop\n'
print '       trN->GetEntry(iEv);\n'
print '       trF1->GetEntry(iEv);\n'
print '       trF2->GetEntry(iEv);\n'

print '          if(iEv % 5000==0)std::cout<<"Running on "<<ProcessName<<" event no: "<<iEv<<"---completed : "<<(float(iEv)/float(trN->GetEntries()))*100<<" %"<<std::endl;\n'

print '            if(Baseline(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv)  && ProcessCuts(trN, trF1, trF2, readN, readF1, readF2, ProcessName, iEv)){ //Baseline for this processn\n'
print '            double EventWeight=1;'

#print '            bool exists = std::find(std::begin(dataprocesses), std::end(dataprocesses), ProcessName) != std::end(dataprocesses);'
print '            EventWeight=xsecWeights[processInt]*lumi;'

for icutvar in range(0, len(data.list_Categories)):
   print 'if(%s(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv)){'%(data.list_Categories[icutvar])
   for ivar in range(0, len(data.list_oneVariables)):
       if "UserDef_" not in data.list_VarsFill[ivar]:
           print '         hs.h_[%i][processInt][%i]->Fill(%s.%s,EventWeight); '%(ivar,icutvar, data.list_VarsTreeCat[ivar],data.list_VarsFill[ivar])
       elif "UserDef_" in data.list_VarsFill[ivar]:
           print '         hs.h_[%i][processInt][%i]->Fill(%s(trN, trF1, trF2, readN, readF1, readF2, ProcessName,iEv),EventWeight); '%(ivar,icutvar,data.list_VarsFill[ivar])

   print '}\n'

print '               }//Baseline for this process\n'
print '       }//event loop\n'

print '}//looper definition\n'

print 'template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::Baseline(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){\n'

if (len(data.list_Baseline_cuts)==0):
   print 'return true;'

if(len(data.list_Baseline_cuts)>0):
    print 'if('
    for iCuts in range(0, len(data.list_Baseline_cuts)):
        print data.list_Baseline_cuts[iCuts]    
    print '){\n'

    print 'return true;\n'

    print '}'
    print 'else{'
    print 'return false;\n'
    print '}'


print '}\n'






print 'template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::ProcessCuts(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){\n'


for key in data.list_mc_sigNames_cuts:
   print 'if(ProcessName=="%s"){\n'%(key)
   if(len(data.list_mc_sigNames_cuts[key])>0):
      print 'if('
      for icutvars in range(0,len(data.list_mc_sigNames_cuts[key])):
          print 'read.',data.list_mc_sigNames_cuts[key][icutvars]
      print '){// cuts\n' 
   print 'return true;'
   if (len(data.list_mc_sigNames_cuts[key])>0):
       print '}\n// cuts'
   print '}\n'
   
for key in data.list_mc_bkgNames_cuts:
   print 'if(ProcessName=="%s"){\n'%(key)
   if(len(data.list_mc_bkgNames_cuts[key])>0):
      print 'if('
      for icutvars in range(0,len(data.list_mc_bkgNames_cuts[key])):
          print 'read.',data.list_mc_bkgNames_cuts[key][icutvars]
      print '){// cuts\n'
   print 'return true;'
   if (len(data.list_mc_bkgNames_cuts[key])>0):
       print '}\n// cuts'
   print '}\n'

for key in data.list_dataNames_cuts:
   print 'if(ProcessName=="%s"){\n'%(key)
   if(len(data.list_dataNames_cuts[key])>0):
      print 'if('
      for icutvars in range(0,len(data.list_dataNames_cuts[key])):
          print 'read.',data.list_dataNames_cuts[key][icutvars]
      print '){// cuts\n'
   print 'return true;'
   if (len(data.list_dataNames_cuts[key])>0):
       print '}\n// cuts'
   print '}\n'








print 'return false;'


print '}\n'





if len(data.list_Categories)>0:
    num=0
    for icate in data.list_Categories:
       print 'template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::%s(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){\n'%(icate)
       if data.Usedefcategories=="No":
           print 'return true;'
       elif data.Usedefcategories=="Yes":
           print 'if(%s){return true;}'%(data.list_defCategories[num]),
           print 'else{return false;}'
           num=num+1
       else:
          print "Please tell me 'Yes' or 'No'"

       print '}\n'


Num=0;
for iname in data.list_VarsFill:
    if "UserDef_" in iname:
        print 'template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::%s(TChain *trN, TChain *trF1, TChain *trF2, classInst& readN,classInst& readF1,classInst& readF2, string ProcessName,int iEvent){\n'%(iname),
        print data.Def_UserDef_All[Num]
        Num=Num+1

        print '}\n'










sys.stdout.close()
