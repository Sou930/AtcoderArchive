n,k=map(int,input().split())
if n>=k:
  print("0")
else:
  i=0
  o=0
  while o<k:
    o+=n+i
    i+=1
  print(i-1)
