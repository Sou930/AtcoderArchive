import re
a,b= map(int, input().split())
c=a/b
d = str(c).split(".")[1]
d = d[0]
if int(d) < 5:
  d = str(c).split(".")[0]
else:
  d = str(c).split(".")[0]
  d = int(d)+1
print(d)
