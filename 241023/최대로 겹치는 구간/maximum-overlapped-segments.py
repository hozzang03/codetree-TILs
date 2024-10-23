n = int(input())
ar = [0] * 100
cnt = 0

for i in range(n) :
    x, y = tuple(map(int, input().split()))
    for i2 in range(x , y+1) :
        ar[i2-1] += 1

cnt = ar.count(max(ar))

print(cnt+1)