class home :
    def __init__(self, name, code, location) :
        self.name = name
        self.code = code
        self.lo = location

people = []

n = int(input())

for i in range(n) :
    name, c, lo = tuple(input().split())
    people.append(home(name, c, lo))

mn = 0 
for i in range(n) :
    if people[mn].name < people[i].name :
        mn = i

print(f"name {people[mn].name}")
print(f"addr {people[mn].code}")
print(f"city {people[mn].lo}")