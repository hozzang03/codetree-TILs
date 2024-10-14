M, D = tuple(map(int, input().split()))

def month(m, d) :
    ans = False
    if 1 <= m <= 12 :
        ans = True

    if 1 <= d <= 31 :
        ans = True
        if d >= 28 :
            if m == 2 :
                ans = False
    
    if ans == True :
        return True
    else :
        return False

if month(M, D) :
    print("Yes")
else :
    print("No")