m1, d1, m2, d2 = tuple(map(int, input().split()))
A = input()

ar = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
ans,cnt = 0, 0

while 1 :
    if m1 == m2 and d1 == d2 :
        break
    
    ans += 1
    d1 += 1

    if d1 > ar[m1-1] :
        m1 += 1
        d1 = 1

for i in range(ans+1) :
    if week[i%7] == A :
        cnt += 1
    
print(cnt)