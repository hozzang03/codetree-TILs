a, b = tuple(map(int, input().split()))

def plus(a,b) :
    x = max(a,b) + 25
    y = min(a,b) * 2
    
    if a > b :
        return x, y
    else :
        return y, x
        
a, b = plus(a,b)

print(a,b)