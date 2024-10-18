n = int(input())
ar = list(map(int, input().split()))
ar.sort()

mx = 0
# 2 3 5 5

for i in range(n) :
    # print(ar[i], ar[n*2-1-i])
    s = ar[i] + ar[n*2-1-i]
    if s > mx :
        mx = s
print(mx)