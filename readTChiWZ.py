


with open("TChiWZAll.dat") as f:
    content = f.readlines()
# you may also want to remove whitespace characters like `\n` at the end of each line
content = [x.strip() for x in content] 

for a in  content:
   fileName=a.split("/")[8]
   print fileName

