#case4°. Дан номер месяца - целое число в диапазоне
#1-12 (1 - январь, 2 - февраль и т.д.). Определить
#количество дне в этом месяце для невисокосного года.

import m_case as m

def main():
    n = m.get_n("n")
    if n == 2:
        print(28)
    elif n <= 7:
        if n % 2:
            print(31)
        else:
            print(30)
    elif n >= 8:
        if n % 2:
            print(30)
        else:
            print(31)

try:
    while True:
        main()
except:
    print("\nНеизвестная ошибка.")
        
