#case6. Единицы длины пронумерованы следующим
#образом: 1 - дециметр, 2 - километр, 3 - метр,
#5 - миллиметр, 5 - сантиметр. Дан номер единицы
#длины (целое число в диапазоне 1-5) и длина
#отрезка в этих единицах (вещественное число).
#Найти длину отрезка в метрах.

from m_case import *

def main():
    n = get_n("n")
    ed = input("ed: ")
    ans = None
    
    if ed == "дм":
        ans = n / 10
    elif ed == "км":
        ans = n * 1000
    elif ed == "м":
        ans = n
    elif ed == "мм":
        ans = n / 1000
    elif ed == "см":
        ans = n / 100

    print(ans, "m")

while True:
    try:
        main()
    except:
        print_error()

_exit()
    
    
