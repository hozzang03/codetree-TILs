class secret :
    def __init__(self, code, place, time) :
        self.c = code
        self.p = place
        self.t = time

ar = input().split()
ar[2] = int(ar[2])

s = secret(ar[0], ar[1], ar[2])

print("secret code :", s.c)
print("meeting point :", s.p)
print("time :", s.t)