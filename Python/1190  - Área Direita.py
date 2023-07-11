matriz = []
soma = media = qtd = 0
coluna = 12
operacao = input()

for i in range(12):
    matriz.append([0] * 12)

for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())

for i in range(12):
    for j in range(12):
        if (i > 0 and i < 11):
            if (j >= coluna):
                soma += matriz[i][j]
                qtd += 1
    if (i < 5):
        coluna -= 1
    if (i >= 6):
        coluna += 1
media = soma / qtd

if (operacao == 'S'):
    print("{:.1f}".format(soma))
elif (operacao == 'M'):
    print("{:.1f}".format(media))