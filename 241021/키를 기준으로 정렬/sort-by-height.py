class info :
    def __init__(self, name, height, weight) :
        self.n = name
        self.h = height
        self.w = weight

n = int(input())

people = []

for i in range(n) :
    n, h, w = input().split()
    h = int(h)
    people.append(info(n,h,w))

people.sort(key = lambda x: x.h)

for p in people :
    print(p.n, p.h, p.w)