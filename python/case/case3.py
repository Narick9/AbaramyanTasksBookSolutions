#case3. Дан номер месяца - целое число в диапазоне 1-12
#(1 - январь, 2 - февраль и т.д.). Вывести название
#соответствующего времени года ("зима", "весна", "лето",
#"осень").

import m_case

def main():
    n = int(input("n: "))
    if n in (1, 2, 12):
        print("зима")
    elif n in (3, 4, 5):
        print("весна")
    elif n in (6, 7, 8):
        print("лето")
    elif n in (9, 10, 11):
        print("осень")

try:
    main()
except:
    print("\nНеизвестная ошибка.")

m_case._exit()
