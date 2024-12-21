m, n = [int(i) for i in input().split()]
dicio = dict()
for i in range(m):
    palavra, valor = input().split()
    valor = int(valor)
    dicio[palavra] = valor
for i in range(n):
    salario = 0
    while True:
        frase = input()
        if frase == ".":
            break
        for i in dicio.keys():
            if i in frase:
                salario += dicio[i] * frase.count(i)
    print(salario)