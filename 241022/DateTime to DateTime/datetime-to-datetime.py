d, h, m = tuple(map(int, input().split()))
ans = 0 
date = str(d) + str(h) + str(m)
a, b, c = 11, 11, 11

while True :
    # 날짜가 11일 11시 11분 아래일때
    if date < "111111" :
        print("-1")
        ans = -1
        break

    if a == d and b == h and c == m :
        break

    ans += 1
    c += 1

    if c == 60 :
        b += 1
        c = 0
    
    if b == 24 :
        a += 1
        b = 0

if ans != -1 :
    print(ans)