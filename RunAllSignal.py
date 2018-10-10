

import os


with open("SignalFileNames.dat") as f:
    content = f.readlines()
# you may also want to remove whitespace characters like `\n` at the end of each line
content = [x.strip() for x in content]


print content 


for a in content:
  print "running on signal:   ", a
  command="./RunSigma.sh %s"%(a)
  os.system(command)

#os.system(command)
