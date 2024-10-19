class product :
    def __init__(self, name=0, code=0) :
        self.name = name
        self.code = code

p1 = product("codetree", 50)
p2 = product()

p2.name, p2.code = tuple(input().split())

print(f"product {p1.code} is {p1.name}")
print(f"product {p2.code} is {p2.name}")