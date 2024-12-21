n = int(input())
numeros = []
pares = []
impares = []
for i in range(n):
    num = int(input())
    numeros.append(num)
numeros.sort()
for i in numeros:
    if i % 2 == 0:
        pares.append(i)
    else:
        impares.append(i)
impares.reverse()
numeros = pares + impares
for i in numeros:
    print(i)