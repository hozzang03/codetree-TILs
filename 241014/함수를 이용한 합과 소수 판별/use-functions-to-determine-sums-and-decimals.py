a, b = tuple(map(int, input().split()))

def sosu(n) :
    for i in range(2, n) :
        if n % i == 0 :
            return False
    return True

def ccaksu(n) :
    s = 0
    n = str(n)
    for i in range(len(n)):
        s += int(n[i])

    if s % 2 == 0 :
        return True
    else :
        return False

cnt = 0

for i in range(a, b+1) :
    if sosu(i) and ccaksu(i) :
        cnt += 1

print(cnt)