n, m = tuple(map(int, input().split()))
ar = list(map(int, input().split()))

def plus() :
    s = 0

    for i in range(a1,a2+1) :
        s += ar[i-1]
    
    return s

for i in range(m) :
    a1, a2 = tuple(map(int, input().split()))
    print(plus())