n, m = tuple(map(int, input().split()))

def mi_mul(n, m) :
    for i in range(1, max(n,m)) :
        if (max(n,m) * i) % min(n,m) == 0 :
            print(max(n,m) * i)
            break

mi_mul(n,m)