import random
S=input()
a = 'qazwsxedcrfvtgbyhnujmikolp'
for ch in S:
    a = a.replace(ch, '')
result =  random.choice(a)
print(result)
