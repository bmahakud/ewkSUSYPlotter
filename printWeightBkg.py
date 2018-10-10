with open("BackgroundWeights.txt") as fs:
     bkgnames = fs.readlines()
bkgnames = [x.strip() for x in bkgnames]


for a in bkgnames:
   fileName=a.split(" ")[0]
   events=float(a.split(" ")[1])
   xsec=float(a.split(" ")[2])
   weight=(xsec*1000.)/events
   print fileName," ",events," ",xsec," ",weight

 
