import random

i, numtried = 0, 0
randnum = random.randint(1, 100)
print("1부터 100 사이의 숫자를 맞추시오")
while i != randnum:
    i = int(input("숫자를 입력하시오: "))
    if i < randnum:
        print("낮음!")
    elif i > randnum:
        print("높음!")
    numtried += 1
print("축하합니다. 시도횟수=", numtried)



