ar = input().split()
n = int(ar[0])
k = int(ar[1])
T = ar[2]

st = [
    input()
    for i in range(n)
]

def check(n) :
    for i in range(len(T)) :
        if st[n][i] != T[i] :
            return False
    return True


st2 = []

for i in range(n) :
    if check(i) :
        st2.append(st[i])

st2.sort()

#print(st2)
print(st2[k-1])