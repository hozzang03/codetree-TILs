n = int(input())
ar = list(map(int, input().split()))

def mx(n) :
    if n == 0 :
        return ar[0]
    
    return max(ar[n-1], mx(n-1))

print(mx(n))