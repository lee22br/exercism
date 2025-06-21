def equilateral(sides):
    a, b, c = sorted(sides)
    return a == b and b == c and a == c


def isosceles(sides):
    a, b, c = sorted(sides)
    return 0 < a and c < a + b and b in (a, c)


def scalene(sides):
    a, b, c = sorted(sides)
    return a != b and b != c
