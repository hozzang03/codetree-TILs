class person:
    def __init__(self, name="", score=0) :
        self.name = name
        self.score = score

people = []

for i in range(5) :
    n, s = tuple(input().split())
    s = int(s)
    people.append(person(n, s))

mn = 100
ans = 0

for i in range(5) :
    if people[i].score < mn :
        mn = people[i].score
        ans = i

print(people[ans].name, people[ans].score)