#case5. Арифметические действия над числами
#пронумерованы следующим образом: 1- сложение,
#2 - вычитание, 3 - умножение, 4 - деление.
#Дан номер действия N (целое число в диапазоне
#1-4) и вещественные числа A и B (B не равно 0).
#Выполнить над числами указанное действие и
#вывести результат.

from m_case import *

def main():
    N, A, B = get_ns(["N", "A", "B"])
    ans = None
    if N == 1:
        ans = A + B
    elif N == 2:
        ans = A - B
    elif N == 3:
        ans = A * B
    elif N == 4:
        ans = A / B
    print_ans(ans)

while True:
    try:
        main()
    except:
        print_error()

_exit()
