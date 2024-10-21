class dot :
    def __init__(self, x , y, number) :
        self.x = x
        self.y = y
        self.n = number

dots = []

n = int(input())

for i in range(1, n+1) :
    x, y = tuple(map(int, input().split()))
    dots.append(dot(x, y, i))

dots.sort(key = lambda x : (abs(0 - x.x) + abs(0 - x.y), x.n))

for d in dots :
    print(d.n)