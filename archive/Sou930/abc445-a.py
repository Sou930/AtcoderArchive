S=input()
if 2<= len(S) <=10:
  if S[0] == S[len(S)-1]:
    print("Yes")
  else:
    print("No")
else:
  print("No")
