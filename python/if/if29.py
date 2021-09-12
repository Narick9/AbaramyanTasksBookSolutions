#if29. Дано целое число. Вывести его
#строку-описание вида "отрицательное
#чётное число", "нулевое число",
#"положительное нечетное число" и т.д.

import m_if

n = int(input("n: "))

positive = "положительное "
negative = "отрицательное "
even = "четное "
odd = "нечетное "
zero = "нулевое "
end = "число"

ans = ""

if n == 0:
    ans += zero
elif n < 0:
    ans += negative
elif n > 0:
    ans += positive
if n % 2:
    ans += odd
else:
    ans += even
ans += end

print(ans)

m_if._exit()
