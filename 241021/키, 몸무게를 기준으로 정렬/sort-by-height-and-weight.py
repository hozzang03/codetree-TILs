class info :
    def __init__(self, name, height, weight) :
        self.n = name
        self.h = height
        self.w = weight

n = int(input())
st = []

for i in range(n) :
    n, h, w = input().split()
    st.append(info(n, int(h), int(w)))

st.sort(key = lambda x : (x.h, -x.w))

for s in st :
    print(s.n, s.h, s.w)