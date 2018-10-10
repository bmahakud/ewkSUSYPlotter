

import os
import sys


binstart=float(sys.argv[1])
binend=float(sys.argv[2])
numbins = int(sys.argv[3])

width=(binend-binstart)/numbins

for a in range(0,numbins):
   edge=binstart+width*a
   print edge,", ",










