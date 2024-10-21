class info :
    def __init__(self, name, height, weight) :
        self.n = name
        self.h = height
        self.w = weight

st = []

for i in range(5) :
    n, h, w = input().split()
    st.append(info(n, int(h), float(w)))

st.sort(key = lambda x : x.n)
print("name")
for s in st :
    print(s.n, s.h, s.w)

print()

st.sort(key = lambda x : -x.h)
print("height")
for s in st :
    print(s.n, s.h, s.w)