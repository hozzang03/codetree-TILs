n = int(input())

def f(n) :
    sm = n%10 + n//10
    return n%2 == 0 and sm % 5 == 0

if f(n) :
    print("Yes")
else :
    print("No")