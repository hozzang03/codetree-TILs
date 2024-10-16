a, b, c = tuple(map(int, input().split()))
n = a * b * c

def abc(n) :
    if n < 10 :
        return n
    
    return abc(n//10) + (n%10)

print(abc(n))