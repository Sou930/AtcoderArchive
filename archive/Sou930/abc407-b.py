x, y = map(int, input().split())
if 2 <= x <= 13 and 0 <= y <= 6:
    l = []
else:
    exit()
c=0
for a in range(1, 7):
    for b in range(1, 7): 
      if a + b >= x or abs(a - b) >= y:
        c=int(c)+1
d= int(c) / 36
print(d)
