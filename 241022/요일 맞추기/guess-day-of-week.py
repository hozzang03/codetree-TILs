m1, d1, m2, d2 = tuple(map(int, input().split()))
ans = 0 
ar = [31, 28 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]

def total_day(m, d) :
    cnt = 0

    for i in range(1, m) :
        cnt += ar[i-1]
    
    cnt += d

    return cnt

ans = total_day(m2, d2) - total_day(m1, d1)

# print(ans)
print(week[abs(ans%7)])