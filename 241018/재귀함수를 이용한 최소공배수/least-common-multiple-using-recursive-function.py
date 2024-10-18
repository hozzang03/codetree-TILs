n = int(input())
ar = list(map(int , input().split()))

# 최소공배수 코드
def lcm(n, m) :
    for i in range(max(n,m), n*m+1) :
        if i % n == 0 and i % m == 0 :
            return i

# 최소공배수 돌기
def route(n) :
    # n이 2까지 내려가면 인덱스 0 도착
    if n == 1 :
        return ar[0]

    return lcm(route(n-1), ar[n-1])

print(route(n))