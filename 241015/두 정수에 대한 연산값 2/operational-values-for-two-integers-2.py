a, b = tuple(map(int, input().split()))

def plus(a, b) :
    x = min(a,b) + 10
    y = max(a,b) * 2

    if a > b :
        return y, x
    else :
        return x, y

a, b = plus(a,b)
print(a,b)