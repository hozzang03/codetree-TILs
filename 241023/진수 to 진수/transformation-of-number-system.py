a, b = tuple(map(int, input().split()))
n = list(map(int, input()))
ans = 0
ar2 = []

for i in n :
    ans = ans * a + i

while 1 :
    if ans < b :
        ar2.append(ans)
        break
    
    ar2.append(ans%b)
    ans //= b

for i in ar2[::-1] :
    print(i, end = '')