def pr(n) :
    cnt = 1
    for i in range(n) :
        for i2 in range(n) :
            if cnt > 9 :
                cnt = 1
            print(cnt, end =' ')
            cnt +=1
        print()

n = int(input())
pr(n)