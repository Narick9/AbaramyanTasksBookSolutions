#if24. Для данного вещественного x
#найти значение следующей функции f,
#принимающей вещественные значения:
#    f(x) = 2*sin, если x > 0,
#        6 - x, если x <= 0.

import m_if, math

x = int(input("x: "))
print()

if x > 0:
    f = 2 * math.sin(m_if.degree_to_radian(x)) #перевод градусов
elif x <= 0:
    f = 6 - x

print("f: ", f)

m_if._exit()
