n = int(input())

def sq(n) :
    if n == 0 :
        return

    sq(n-1)
    print(n, end = ' ')

def deq(n) :
    if n == 0 :
        return

    print(n, end = ' ')
    deq(n-1)


sq(n)
print()
deq(n)