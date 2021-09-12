#if22. Даны координаты точки, не лежащей на
#координатных осях OX и OY. Определить номер
#координатной четверти, в которой находится
#данная точка.

import m_if

coor = m_if.get_coor()

if coor[0] > 0 and coor[1] > 0:
    print(1)
elif coor[0] < 0 and coor[1] > 0:
    print(2)
elif coor[0] < 0 and coor[1] < 0:
    print(3)
elif coor[0] > 0 and coor[1] < 0:
    print(4)

m_if._exit()


