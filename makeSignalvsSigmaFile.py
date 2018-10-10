

with open("log.txt") as f:
    content = f.readlines()
# you may also want to remove whitespace characters like `\n` at the end of each line
content = [x.strip() for x in content]


for a in content:
  fileName=a.split(" ")[0] 
  NeutralinoM=fileName.split("_")[1]
  LSPmass=fileName.split("_")[2].replace(".root","")
  Sigma3bin=a.split(" ")[1]
  Sigma7bin=a.split(" ")[2]
  #print "Neutralino: ",NeutralinoM," LSP: ",LSPmass," Sigma3bin: ",Sigma3bin,"  Sigma7bin: ", Sigma7bin
  print NeutralinoM," ",LSPmass," ",Sigma3bin," ",Sigma7bin
