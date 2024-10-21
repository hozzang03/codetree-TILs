class info :
    def __init__(self, name, kor, eng, math) :
        self.n = name
        self.k = kor
        self.e = eng
        self.m = math

n = int(input())

st = []

for i in range(n) :
    n, k, e, m = input().split()
    st.append(info(n, int(k), int(e), int(m)))

st.sort(key = lambda x : (-x.k, -x.e, -x.m))

for s in st :
    print(s.n, s.k, s.e, s.m)