student_score = [95, 30, 32, 73, 45, 33, 39, 96, 37, 37, 30, 58, 48, 75, 96, 83, 98, 74, 59, 32, 79, 46, 35, 33, 50, 57, 65, 100, 43, 65]

a_star = a = b = c = d = e = u = 0

for i in student_score:
    if i >= 91:
        a_star += 1
    elif i >= 75:
        a += 1
    elif i>= 60:
        b += 1
    elif i >= 50:
        c += 1
    elif i >= 35:
        d += 1
    elif i >=20:
        e += 1
    else:
        u += 1
print("Test results:")
print("A*:",a_star)
print("A:",a)
print("B:",b)
print("C:",c)
print("D:",d)
print("E:",e)
print("U:",u)
