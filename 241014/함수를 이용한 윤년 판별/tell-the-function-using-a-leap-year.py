def yun(n) :
    if n % 4 != 0 :
        return False

    if (n%100) == 0 and n%400 != 0 :
        return False

    return True

n = int(input())

if yun(n) :
    print("true")
else :
    print("false")