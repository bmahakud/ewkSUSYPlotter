import os
import sys

with open("BkgFileNames.dat") as fs:
     bkgnames = fs.readlines()
bkgnames = [x.strip() for x in bkgnames]



for a in  bkgnames:
   command="./GetWeightsBkg.sh %s %d"%(str(a),1)
   os.system(command)

#command="./GetWeightsBkg.sh %s %d"%("WZTo3LNu.root",4.42965)
#command="./GetWeightsBkg.sh %s %d"%(fileName,xsec)

#command="./GetWeightsBkg.sh WZTo3LNu.root 4.42965"
#os.system(command)






