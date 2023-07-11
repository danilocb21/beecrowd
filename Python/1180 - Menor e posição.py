n = int(input())
lista = list(map(int, input().split()))
print(f"Menor valor: {min(lista)}\nPosicao: {lista.index(min(lista))}")