n = int(input())
off = 100
ar2 = [
    tuple(map(int, input().split()))
    for i in range(n)
]
ar = [0] * 200

for x1, x2 in ar2 :
    x1, x2 = x1+off, x2 + off

    for i in range(x1, x2) :
        ar[i] += 1
print(max(ar))