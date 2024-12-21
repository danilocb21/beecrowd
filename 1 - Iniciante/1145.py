x, y = map(int, input().split())
j = 1
lista = []
while True:
    for i in range(x):
        lista.append(j)
        j += 1
        if (len(lista) >= x):
            print(*lista)
            lista.clear()
        break
    if (j > y):
        break