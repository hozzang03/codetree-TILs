N, K = tuple(map(int, input().split()))
ar = [0] * N

for i in range(K) :
    A, B = tuple(map(int, input().split()))

    for i2 in range(A, B+1) :
        ar[i2] += 1
    
print(max(ar))