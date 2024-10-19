class future :
    def __init__(self, day, week, weather) :
        self.day = day
        self.week = week
        self.wt = weather

n = int(input())
ar = []

for i in range(n) :
    day, week, wt = input().split()
    if wt == "Rain" :
        mn = i
    ar.append(future(day,week,wt))

for i in range(n) :
    if ar[i].wt == "Rain" :
        if ar[mn].day > ar[i].day :
            mn = i

print(ar[mn].day, ar[mn].week, ar[mn].wt)