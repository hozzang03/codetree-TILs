n, m = input().split()
n, m = int(n), int(m)

mx = n
ans = 0
def max_divi(n, m) :
    if n > m :
        mx = n
    else :
        mx = m
    
    for i in range(mx, -1, -1) :
        if m%i == 0 and n%i == 0 :
            print(i)
            break

max_divi(n,m)