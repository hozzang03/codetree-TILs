d, h, m = tuple(map(int, input().split()))
ans = 0 
a, b, c = 11, 11, 11  # 기준 날짜 11일 11시 11분

# 입력된 날짜가 기준 날짜보다 이전일 경우
if d < a or (d == a and h < b) or (d == a and h == b and m < c):
    print("-1")
else:
    # 날짜가 기준 날짜보다 크거나 같을 때 차이 계산
    while True:
        if a == d and b == h and c == m:
            break

        ans += 1
        c += 1

        if c == 60:
            b += 1
            c = 0

        if b == 24:
            a += 1
            b = 0

    print(ans)