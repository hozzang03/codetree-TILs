def s(n) :
    ans = 0
    for i in range(1, n+1) :
        ans += i
    
    ans //= 10
    return ans

n = int(input())
sm = s(n)
print(sm)