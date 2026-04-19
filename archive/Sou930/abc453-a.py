n=int(input())
s=str(input())
t=str()
for i in range(n):
  if s[i]=="o" and len(t)==0:
    pass
  else:
    t=t+s[i]
print(t)
