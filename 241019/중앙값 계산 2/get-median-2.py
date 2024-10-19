n = int(input())
ar = list(map(int, input().split()))

def mid(i, arr) :
    arr.sort()
    i = i // 2
    return arr[i]

for i in range(n) :
    if i % 2 == 0 :
        print(mid(i, ar[:i+1]), end = ' ')