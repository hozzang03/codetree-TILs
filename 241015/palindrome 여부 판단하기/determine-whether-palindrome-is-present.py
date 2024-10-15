st = input()

def swap(string) :
    string = string[::-1]
    return string

st_swap = swap(st)

if st == st_swap :
    print("Yes")
else :
    print("No")