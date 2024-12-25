matriz = []
soma = media = qtd = 0
operacao = input()

for i in range(12):
    matriz.append([0] * 12)

for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())

coluna = 11
for i in range(12):
    for j in range(12):
        if j < coluna:
            soma += matriz[i][j]
            qtd += 1
    coluna -= 1

media = soma / qtd

if (operacao == 'S'):
    print("{:.1f}".format(soma))
elif (operacao == 'M'):
    print("{:.1f}".format(media))