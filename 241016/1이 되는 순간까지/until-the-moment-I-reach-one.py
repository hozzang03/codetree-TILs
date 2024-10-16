n = int(input())

def plus(n) :
    if n == 1 :
        return 0
    
    if n % 2 == 0 :
        return plus(n//2) + 1
    elif n % 2 == 1 :
        return plus(n//3) + 1
    
print(plus(n))