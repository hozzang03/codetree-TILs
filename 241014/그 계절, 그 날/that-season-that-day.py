Y, M, D = tuple(map(int, input().split()))

def yoon(y) :
    # 윤년일때 상황
    if y % 4 == 0 and y % 100 != 0 or (y%4==0 and y%100 == 0 and y%400 == 0):
        return True
    
    # 위 상황이 아니면 윤년아님
    return False

def last_day_number(m, y):
    if m == 2 and not yoon(y):
        return 28
    if m == 2 and yoon(y) :
        return 29
    if m == 4 or m == 6 or m == 9 or m == 11:
        return 30
    
    return 31


# 윤년이 아닐 때 m월 d일이 존재하는지 여부를 확인하는 함수를 작성합니다.
def judge_day(y, m, d):
    if m <= 12 and d <= last_day_number(m, y):
        return True
    
    return False

if judge_day(Y, M, D) :
    if 3<= M <= 5 :
        print("Spring")
    elif 6 <= M <= 8 :
        print("Summer")
    elif 9 <= M <= 11 :
        print("Fall")
    else :
        print("Winter")
else :
    print("-1")