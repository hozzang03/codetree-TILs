m1, d1, m2, d2 = tuple(map(int, input().split()))
ans = 0 
ar = [31, 28 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]

while 1 :
    if m1 == m2 and d1 == d2 :
        break

    if m1 < m2 :
        d1 += 1
        ans += 1

    elif m1 > m2 :
        d1 -= 1
        ans += 1

    elif m1 == m2 and d1 > d2 :
        d1 -= 1
        ans + 1
    else :
        d1 += 1
        ans += 1
        
    if d1 > ar[m1-1] :
        m1 += 1
        d1 = 1

    elif d1 == 0 :
        m1 -= 1
        d1 = ar[m1-1]

print(week[ans//7])