ar = list(map(int ,input()))
ans = 0
ar2 = []
for elem in ar :
    ans = ans * 2 + elem

ans *= 17
while 1 :
    if ans < 2 :
        ar2.append(ans)
        break
    
    ar2.append(ans%2)
    ans //= 2

for i in ar2[::-1] :
    print(i, end = '')