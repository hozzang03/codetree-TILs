m1, d1, m2, d2 = tuple(map(int, input().split()))

ar = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
ans = 1

while True :
    if m1 == m2 and d1 == d2 :
        break

    ans += 1
    d1 += 1

    if d1 > ar[m1-1] :
        m1 += 1
        d1 = 1

print(ans)