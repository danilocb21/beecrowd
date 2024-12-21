matriz = []
soma = media = 0
linha = int(input())
operacao = input()

for i in range(12):
    matriz.append([0] * 12)

for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())

for i in range(12):
    for j in range(12):
        if (i == linha):
            soma += matriz[i][j]
media = soma / 12

if (operacao == 'S'):
    print("{:.1f}".format(soma))
elif (operacao == 'M'):
    print("{:.1f}".format(media))