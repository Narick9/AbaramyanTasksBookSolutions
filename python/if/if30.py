#if30. Дано целое число, лежащее в диапазоне
#1-999. Вывести его строку-описание вида
#"четное двузначное число", "нечетное
#трехзначное число" и т.д.

import m_if

n = int(input("n: "))
digit1 = "однозначное "
digit2 = "двузначное "
digit3 = "трехзначное "
even = "четное "
odd = "нечетное "
end = "число"
ans = ""
digit = m_if.digit(n)

if n % 2:
    ans += odd
else:
    ans += even
if digit == 1:
    ans += digit1
elif digit == 2:
    ans += digit2
elif digit == 3:
    ans += digit3
ans += end

print(ans)

m_if._exit()
