#if23. Даны целочисленные координаты трех
#вершин прямоугольника, стороны которого
#параллельны координатным осям. Найти
#координтаы его четвертой вершины.

import m_if

coor1 = m_if.get_coor()
print()
coor2 = m_if.get_coor()
print()
coor3 = m_if.get_coor()
print()

if coor1[0] == coor2[0]:
    x = coor3[0]
else:
    if coor1[0] == coor3[0]:
        x = coor2[0]
    else:
        x = coor1[0]

if coor1[1] == coor2[1]:
    y = coor3[1]
else:
    if coor1[1] == coor3[1]:
        y = coor2[1]
    else:
        y = coor1[1]
coor4 = [x, y]

print(coor4)

m_if._exit()
