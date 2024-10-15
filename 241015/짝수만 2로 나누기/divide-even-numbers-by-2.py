n = int(input())
ar = list(map(int, input().split()))

def change(arr) :
    for i in range(len(arr)) :
        if arr[i] % 2 == 0 :
            arr[i] = arr[i] // 2

change(ar)

for i in ar :
    print(i, end = ' ')