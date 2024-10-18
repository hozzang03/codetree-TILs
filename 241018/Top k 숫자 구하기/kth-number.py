n, m = tuple(map(int, input().split()))
ar = list(map(int, input().split()))

ar.sort()

print(ar[m-1])