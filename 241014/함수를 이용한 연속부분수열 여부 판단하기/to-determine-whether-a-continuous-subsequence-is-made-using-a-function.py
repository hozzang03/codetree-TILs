a, b = tuple(map(int, input().split()))
A = list(map(int, input().split()))
B = list(map(int, input().split()))

def check(ar, ar2) :
    ans = False
    for i in range(len(ar)) :
        if ar[i] == ar2[0] :
            for i2 in range(len(ar2)) :
                if ar[i+i2] == ar2[i2] :
                    ans = True
                    continue
                else :
                    ans = False
                    break

        if ans == True :
            return True
    
    return False

if check(A, B) :
    print("Yes")
else :
    print("No")