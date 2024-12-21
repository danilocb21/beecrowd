n = int(input())
for i in range(n):
    cardapio = dict()
    soma = 0
    m = int(input())
    for j in range(m):
        fruta, price = input().split()
        price = float(price)
        cardapio[fruta] = price
    p = int(input())
    for j in range(p):
        fruta, qtd = input().split()
        qtd = int(qtd)
        soma += cardapio[fruta] * qtd
    print(f"R$ {soma:.2f}")