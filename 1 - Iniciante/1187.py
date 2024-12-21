matriz = []
soma = media = qtd = 0
colunai = 1
colunaj = 10
operacao = input()

for i in range(12):
    matriz.append([0] * 12)

for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())

for i in range(12):
    for j in range(12):
        if (i < 6):
            if (j >= colunai and j <= colunaj):
                soma += matriz[i][j]
                qtd += 1
    if (i < 6):
        colunai += 1
        colunaj -= 1
media = soma / qtd

if (operacao == 'S'):
    print("{:.1f}".format(soma))
elif (operacao == 'M'):
    print("{:.1f}".format(media))