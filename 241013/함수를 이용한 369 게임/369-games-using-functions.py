a,b = tuple(map(int, input().split()))
cnt = 0

def tsn(n) :
    n = str(n)
    return '3' in n or '6' in n or '9' in n

def f(n) :
    return n%3 == 0 or tsn(n)

for i in range(a, b+1) :
    if f(i) :
        cnt += 1

print(cnt)