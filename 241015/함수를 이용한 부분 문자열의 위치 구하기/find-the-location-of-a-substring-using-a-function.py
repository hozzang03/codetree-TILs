A = input()
B = input()

def check_idx() :
    if B not in A :
        print(-1)
        return 0
    else :
        print(A.index(B))
        return 0

check_idx()