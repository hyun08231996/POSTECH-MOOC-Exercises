# 성적 처리 프로그램
# 1. Get 5 input integers, all with different variable names
# 2. Put all variable names into a list with different variable name
# 3. Use 'for' operation to calculate the sum,
# and divide sum by number of runs to get average.
# 4. Print the average.
# 5. Use 'if' to find number of integers in the list greater than the average
# 6. Print that number.
"""
stu = 5
sum = 0
gradeList = []
for i in range(stu):
    grade = int(input("성적을 입력하세요: "))
    gradeList.append(grade)
    sum += grade
avg = sum / len(gradeList)
print("성적 평균은", avg, "입니다.")
aboveAvg = 0
for j in range(len(gradeList)):
    if gradeList[j] >= avg:
        aboveAvg += 1
    else:
        continue
print(avg, "점 이상 성적을 받은 학생은", aboveAvg, "명입니다.")"""

# 문자열 처리 프로그램
# 1. Make an empty list and set it to a variable
# 2. Use 'while' operation to put each input name
# into the empty list until blank line in entered
# 3. Break when blank line is entered
# 4. Print each name horizontally divided by comma
"""
listName = []

while True:
    name = input("학생 이름을 입력하세요: ")
    if name == "":
        break
    else:
        listName.append(name)
print("학생 이름:")
for i in listName:
    print(i, end=", ")
"""

# 연락처 관리 프로그램
# 1. 친구 리스트 출력 -> 이름을 입력 받고 리스트에 넣어서 출력
# 2. 친구추가 -> append 함수를 이용해서 친구 이름 리스트에 추가
# 3. 친구삭제 -> remove 함수를 이용해서 친구 이름 리스트에서 삭제
# 4. 이름변경 -> 리스트의 index 자리에 있는 이름을 변
# 5. 종료 -> break
# 6. while 을 이용해서 메뉴를 반복해서 선택
# 7. if를 이용해서 입력된 메뉴 숫자랑 일치하면 해당 메뉴 가져오기
friendList = []
while True:
    print("----------------")
    print("1. 친구 리스트 출력")
    print("2. 친구추가")
    print("3. 친구삭제")
    print("4. 이름변경")
    print("9. 종료")
    menu = int(input("메뉴를 선택하시오: "))
    if menu == 1:
        print(friendList, end=" ")
        print()
    elif menu == 2:
        name = input("이름을 입력하시오: ")
        friendList.append(name)
    elif menu == 3:
        del_name = input("이름을 입력하시오: ")
        if del_name in friendList:
            friendList.remove(del_name)
        else:
            print("이름이 발견되지 않았음")
    elif menu == 4:
        old_name = input("변경할 이름을 입력하시오: ")
        if old_name in friendList:
            index = friendList.index(old_name)
            new_name = input("새로운 이름을 입력하시오: ")
            friendList[index] = new_name
        else:
            print("이름이 발견되지 않았음")
    elif menu == 9:
        print("프로그램을 종료합니다.")
        break
    else:
        break
