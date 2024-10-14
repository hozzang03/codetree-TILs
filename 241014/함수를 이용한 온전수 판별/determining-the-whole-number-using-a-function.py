a, b = tuple(map(int, input().split()))
cnt = 0

def onjun(n) :
    if n % 2 == 0 :
        return False
    elif n % 10 == 5 :
        return False
    elif n%3 == 0 and n%9 != 0 :
        return False

    return True

for i in range(a, b+1) :
    if onjun(i) :
        cnt += 1

print(cnt)