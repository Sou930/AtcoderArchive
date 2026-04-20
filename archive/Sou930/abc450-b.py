n=int(input())
for i in range(n):
  print(n-i, end="")
  if i==n-1:
    pass
  else:
    print(",", end="")
