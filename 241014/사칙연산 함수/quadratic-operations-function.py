def s(a, b) :
    return a+b

def sub(a, b) :
    return a-b

def mul(a,b) :
    return a*b

def divi(a,b) :
    return a//b

a, o, c = input().split()
a,c = int(a), int(c)
ans = 0

if o == '+' :
    ans = s(a, c)
elif o == '-' :
    ans = sub(a,c)
elif o == '*' :
    ans = mul(a,c)
elif o == '/' :
    ans = divi(a,c)
else :
    ans = False

if ans == False :
    print("False")
else :
    print(f"{a} {o} {c} = {ans}")