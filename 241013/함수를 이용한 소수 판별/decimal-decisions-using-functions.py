a, b = tuple(map(int, input().split()))

bol = True
sm = 0

def prime(n) :
    for i in range(2, n) :
        if n % i == 0 :
            return False
    return True

for i in range(a, b+1) :
    if prime(i) == True :
        sm += i
    

print(sm)