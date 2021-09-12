# Часть case

import math

if __name__ == "__main__":
    print(
"""
Это модуль. Его следует импортировать,
а не открывать как программу.
""")

# общее
def _exit():
    #Пишет сообщение для выхода
    input("Для продолжения нажмите Enter...")

def print_error():
    #Пишет сообщее об ошибке
    print("Неизвестная ошибка")

def print_ans(ans):
    #Пишет ответ
    print("ans: ", ans)

# числа

def get_n(string):
    n = None
    try:
        n = int(input(string + ": "))
    except ValueError as e:
        print("Ошибка: ", e)
        n = get_n(string)
    return n

def get_ns(strings = []):
    reps = []
    for i in range(len(strings)):
        n = get_n(strings[i])
        reps.append(n)
    return reps

def digit(n):
    #возвращает количество цифр целого числа
    digit = 0
    while n:
        n = int(n / 10)
        digit += 1
    return digit

# строки

def number_of_char(char):
    #возвращает номер символа
    for i in range(256):
        if char == chr(i):
            return i
    return None

# координаты
def get_coor():
    # Спрашивает у пользователя x и y
    # и возвращает список
    coor = []
    for os in ("x", "y"):
        vvod = int(input(os + ": "))
        coor.append(vvod)
    return coor

# окружности

def degree_to_radian(degree):
    # Переводит градусы в радианы
    radian = degree * math.pi / 180
    return radian

