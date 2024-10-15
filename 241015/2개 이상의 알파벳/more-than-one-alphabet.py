A = input()

def check(st) :
    for i in range(len(st) - 1) : 
        if st[i] != st[i+1] :
            return False

    return True

if not check(A) :
    print("Yes")
else :
    print("No")