from math import sqrt

r = sqrt(5)
N = int(input())

x1 = ((1 + r) / 2) ** N
x2 = ((1 - r) / 2) ** N
x = (x1 - x2) / r
print(f"{x:.1f}")