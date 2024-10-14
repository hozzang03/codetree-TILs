M, D = tuple(map(int, input().split()))

def month(m, d) :
    if 1 <= m <= 12 :
        if m % 2 == 0 and m != 2 :
            if 1 <= d <= 30 :
                return True
        elif m%2 == 1 :
            if 1 <= d <= 31 :
                return True
        elif m == 2 :
            if 1 <= d <= 28 :
                return True
    
    return False
    
if month(M, D) :
    print("Yes")
else :
    print("No")