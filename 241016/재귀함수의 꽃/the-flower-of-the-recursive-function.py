n = int(input())

def seq(n) :
    if n == 0 :
        return
    
    print(n, end = ' ')
    seq(n-1)
    print(n, end = ' ')

seq(n)