n,m=input().split()
n=int(n)
m=int(m)
f = list(map(int, input().split()))
# 重複をチェック
juuhuku = len(f) != len(set(f))
# 重複しているかどうかを通知
if juuhuku==True:
  print("No")
else:
  print("Yes")
# 服チェックのためにリストlを作成
l = []
for i in range(m):
  l.append(i+1)
  
h=[]
# 全種類の服を着ているかのチェック
for o in range(len(f)):
  if l.count(f[o])>=1:
    if h.count(f[o]):
      pass
    else:
      h.append(f[o])

for p in range(len(h)):
  l.remove(h[p])

if len(l)==0:
  print("Yes")
else:
  print("No")
