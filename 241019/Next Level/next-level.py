class next_level :
    def __init__(self, id=0, level=0) :
        self.id = id
        self.level = level

st1 = next_level("codetree", 10)
st2 = next_level()



st2.id, st2.level = tuple(input().split())

print(f"user {st1.id} lv {st1.level}")
print(f"user {st2.id} lv {st2.level}")