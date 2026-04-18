n = int(input())
a = list(map(int, input().split()))

if 1 <= n <= 100 and all(1 <= x <= 100 for x in a):
  x=0
  y=0
  while x < len(a): 
    y += a[x]
    x += 2
  print(y)
