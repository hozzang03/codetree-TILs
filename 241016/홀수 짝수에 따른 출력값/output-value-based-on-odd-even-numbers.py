n = int(input())

def plus(n) :
    if n == 1 :
        return 1
    if n == 2 :
        return 2
    
    return plus(n-2) + n

print(plus(n))