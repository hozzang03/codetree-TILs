n = int(input())
ar = [0] * 1000
ans = 500

for i in range(n) :
    x, y = input().split()
    x = int(x)

    if y == 'R' :
        for i2 in range(ans, ans + x + 1) :
            ar[i2] += 1
            ans += x
    
    elif y == 'L' :
        for i2 in range(ans, ans - x -1, -1) :
            ar[i2] += 1
            ans -= x
    
count = sum (1 for i in ar if i > 1)
print(count+1)