# Часть if

import math

if __name__ == "__main__":
    print(
"""
Это модуль. Его следует импортировать,
а не открывать как программу.
""")

# общее
def _exit():
    input("Для продолжения нажмите Enter...")

# числа

def digit(n):
    #возвращает количество цифр целого числа
    digit = 0
    while n:
        n = int(n / 10)
        digit += 1
    return digit

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
