a, b, c = [float(i) for i in input().split()]

if (a < b+c) and (b < a+c) and (c < a+b):
    perimetro = a+b+c
    print(f'Perimetro = {perimetro:.1f}')
else:
    area = ((a+b)*c)/2
    print(f'Area = {area:.1f}')