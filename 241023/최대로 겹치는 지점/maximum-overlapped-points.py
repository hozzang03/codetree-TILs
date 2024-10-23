n = int(input())
ar = [0]* 101

for i in range(n) :
    x, y = tuple(map(int, input().split()))
    for i2 in range(x, y+1) :
        ar[i2] += 1

print(max(ar))