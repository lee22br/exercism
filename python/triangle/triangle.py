def equilateral(sides):
    a, b, c = sorted(sides)
    if a > 0 and b > 0 and c > 0:
        return a == b and b == c and a == c
    return False


def isosceles(sides):
    a, b, c = sorted(sides)
    if a > 0 and b > 0 and c > 0:
        return 0 < a and c < a + b and b in (a, c)
    return False

def scalene(sides):
    a, b, c = sorted(sides)
    if a > 0 and b > 0 and 0 < c < a + b:
        return a != b and b != c
    return False