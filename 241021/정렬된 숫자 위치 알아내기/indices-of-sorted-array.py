class num :
    def __init__(self, number, index) :
        self.n = number
        self.idx = index

n = int(input())
ar = list(map(int, input().split())) 

ans = [0]*n
number = [
    num(elem, idx)
    for idx, elem in enumerate(ar)
]

number.sort(key = lambda x : (x.n, x.idx))

for idx, elem in enumerate(number) :
    ans[elem.idx] = idx + 1

for elem in ans :
    print(elem, end = ' ')