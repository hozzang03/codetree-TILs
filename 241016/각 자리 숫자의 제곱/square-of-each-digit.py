n = int(input())

def fac(n) :
    if n < 10 :
        return n**2
    
    return fac(n // 10) + (n%10)**2

print(fac(n))