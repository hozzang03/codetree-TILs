def star(n, m) :
    for i in range(n) :
        print("1" * m)

n,m = input().split()
n , m = int(n) , int(m)

star(n,m)