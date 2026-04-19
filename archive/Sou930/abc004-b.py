import numpy as np
a=[[str(x) for x in input().split()] for i in range(4)]
for i in range(2):
  a=np.rot90(a)
for o in range(4):
  for p in range(4):
    print(a[o][p],end="")
  print("")
