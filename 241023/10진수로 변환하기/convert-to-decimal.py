n = int(input())
ans = 0
n = str(n)
n = list(n)

for elem in n :
    ans = ans * 2 + int(elem)

print(ans)