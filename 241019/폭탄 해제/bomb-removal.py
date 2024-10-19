class bomb :
    def __init__(self, code=0, color=0, sec=0) :
        self.code = code
        self.color = color
        self.sec = sec

b = bomb()
b.code, b.color, b.sec = tuple(input().split())

print(f"code : {b.code}")
print(f"color : {b.color}")
print(f"second : {b.sec}")