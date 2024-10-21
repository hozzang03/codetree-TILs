class info :
    def __init__(self, height, weight, number) :
        self.h = height
        self.w = weight
        self.n = number

n = int(input())

st = []

for i in range(1, n+1) :
    h, w = tuple(map(int, input().split()))
    st.append(info(h, w, i))

st.sort(key = lambda x : (-x.h, -x.w, x.n))

for s in st :
    print(s.h, s.w, s.n)