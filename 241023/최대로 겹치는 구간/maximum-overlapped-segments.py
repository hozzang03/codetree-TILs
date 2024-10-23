n = int(input())
ar2 = [
    tuple(map(int, input().split()))
    for i in range(n)
]
mx = 0
mn = 100
plus = 0
cnt = 0
# 튜플에 최댓값과 최솟값 구하기
for tu in ar2 :
    for elem in tu :
        if elem > mx :
            mx = elem
        if elem < mn :
            mn = elem

# offset 작업
if mn < 0 :
    plus = abs(mn)

ar2 = [(x+plus, y+plus) for x, y in ar2]

#최대로 나올 수 있는 값의 배열 생성
ar = [0] * (mx+1+plus)

for x, y in ar2 :
    for i in range(x, y) :
        # print(i, end = ' ')
        ar[i] += 1
    # print()
    # print(ar)

print(max(ar))