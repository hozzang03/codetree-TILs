n = list(map(int, input()))
ans = 0

for elem in n :
    ans = ans * 2 + int(elem)

print(ans)