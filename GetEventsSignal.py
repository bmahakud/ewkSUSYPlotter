
import os

with open("TChiWZAll.dat") as f:
    content = f.readlines()
# you may also want to remove whitespace characters like `\n` at the end of each line
content = [x.strip() for x in content]


with open("TChiWZxsec.txt") as fs:
     xsec = fs.readlines()
xsec = [x.strip() for x in xsec]

#print xsec
XsecDict={}

itr=0;
for a in xsec:
  #print xsec[0].split(":")[0]
  #print xsec[0].split(":")[1]
  #print xsec[0].split(":")[2] 
  xseclist=[]
  xseclist.append(xsec[itr].split(":")[1].strip())
  xseclist.append(xsec[itr].split(":")[2].strip())
  XsecDict[xsec[itr].split(":")[0].strip()]=xseclist
  #print xsec[itr].split(":")[0], "- ",xsec[itr].split(":")[1]
  itr=itr+1

#print XsecDict['100']

for a in  content:
   fileName=a.split("/")[8]
   MassNeu=fileName.split("_")[1]
   MassLSP=fileName.split("_")[2].replace(".root","")
   #print MassNeu," ",MassLSP
   path="/afs/cern.ch/work/c/cericeci/public/signals2017/TChiWZ_%s_%s/skimAnalyzerCount/SkimReport.txt"%(MassNeu, MassLSP)
   #print path
   with open(path) as F:
      Content = F.readlines()
   Content = [x.strip() for x in Content]
   strChar=str(Content[1])
   NumEvents=strChar.split()[2]
   xSec=float(XsecDict[str(MassNeu)][0])
   xSecUncert=XsecDict[str(MassNeu)][1]  
 
   WeightXsec1FB=(xSec*1.)/float(NumEvents)
   fileName="TChiWZ_%s_%s.root"%(MassNeu, MassLSP)
   #print MassNeu," ",MassLSP," ",XsecDict[str(MassNeu)]," ",NumEvents," ",WeightXsec1FB
   #print fileName," ",WeightXsec1FB

   if (float(MassNeu)-float(MassLSP))==80:
       print MassNeu," - ", MassLSP




