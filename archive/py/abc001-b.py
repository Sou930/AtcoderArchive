m=float(input())
m/=1000
if 0<=m and m<=10000:
  if m<0.1:
    print("00")

  elif 0.1<=m and m<=5:
    m*=10
    m=str(int(m))
    
    if len(m)==1:
      m="0"+m
      print(m)
    else:
      print(m)
      
  elif 6<=m and m<=30:
    print(int(m+50))
    
  elif 35<=m and m<=70:
    print(int((m-30)//5+80))
  
  else:
    print(89)
