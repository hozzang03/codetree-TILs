N, B = tuple(map(int, input().split()))
ar = []

while 1:
    if N < B :
        ar.append(N)
        break
    
    ar.append(N%B)
    N //= B

for i in ar[::-1] :
    print(i, end=  '')