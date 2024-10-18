n = int(input())
ar = list(map(int, input().split()))

ar.sort()
for i in ar :
    print(i, end = ' ')
ar.sort(reverse=True)
print()
for i in ar :
    print(i, end = ' ')