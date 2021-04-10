def add(a, b):
    result = a + b
    return result


def swap(a, b):
    a, b = b, a
    return a, b


a = int(input("점수1를 입력하시오: "))
b = int(input("점수2를 입력하시오: "))
sum = add(a, b)
avg = sum / 2
print("두 점수의 합은", sum)
print("두 점수의 평균은", avg)
a, b = swap(a, b)
print("두 수의 교환은", a, b)
