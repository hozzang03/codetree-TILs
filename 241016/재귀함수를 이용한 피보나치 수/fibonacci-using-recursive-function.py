n = int(input())

def pabo(n) :
    if n == 1 :
        return 1
    if n == 2 :
        return 1

    return pabo(n-1) + pabo(n-2)

print(pabo(n))