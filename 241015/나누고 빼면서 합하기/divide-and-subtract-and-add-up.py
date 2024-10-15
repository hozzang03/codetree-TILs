n, m = tuple(map(int, input().split()))
ar = list(map(int, input().split()))

def plus(M) :
    sum = 0

    while 1:
        sum += ar[M-1]
        if M <= 1 :
            return sum

        if M % 2 == 1 : 
            M -= 1

        else :
            M = M // 2

ans = plus(m)
print(ans)