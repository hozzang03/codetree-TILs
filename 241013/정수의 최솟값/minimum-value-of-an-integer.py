def mn(a,b,c) :
    return min(a,b,c)

a, b, c = tuple(map(int, input().split()))
ans = mn(a,b,c)
print(ans)