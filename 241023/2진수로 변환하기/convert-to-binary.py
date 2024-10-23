n = int(input())
ar = []

while 1:
    if n < 2 :
        ar.append(n)
        break
    
    ar.append(n%2)
    n //= 2

for i in ar[::-1] :
    print(i,end = '')