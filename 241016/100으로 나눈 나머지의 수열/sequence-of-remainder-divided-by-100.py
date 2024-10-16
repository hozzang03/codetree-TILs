n = int(input())

def fun(n) :
    if n == 1 :
        return 2
    if n == 2 :
        return 4
    
    return (fun(n-1) * fun(n-2)) % 100

print(fun(n))