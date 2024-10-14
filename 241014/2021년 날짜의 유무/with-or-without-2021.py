M, D = tuple(map(int, input().split()))

def month(m, d) :
    if 1 <= m <= 12 :
        if m == 4 or m == 6 or m == 9 or m == 11 :
            if 1 <= d <= 30 :
                return True
        elif m == 1 or m == 3 or m==5 or m==7 or m == 8 or m == 10 or m == 12 :
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