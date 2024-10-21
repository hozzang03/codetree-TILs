n = int(input())
ar = list(map(int, input().split())) 
ar2 = sorted(ar)
ar3 = []
# ar  = 3 1 6 2 7 30 1
# ar2 = 0 0 0 0 0  0 0
# ar3 = 1 1 2 3 6 7 30
cnt = 1
for elem in ar :
    ans = ar2.index(elem)+1
    if ans not in ar3 :
        ar3.append(ans)
        cnt = 1
    else :
        ar3.append(ans+cnt)
        cnt += 1

for elem in ar3 :
    print(elem, end = ' ')