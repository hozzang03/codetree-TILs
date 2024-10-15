n = int(input())
ar = list(map(int, input().split()))

def plus(arr) :
    for i in range(len(arr)) :
        if arr[i] < 0 :
            arr[i] = abs(arr[i])

plus(ar)

for i in ar :
    print(i, end = ' ')