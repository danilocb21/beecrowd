lista = [0] * 10
n = int(input())

for i in range(len(lista)):
    if (i == 0):
        lista[i] = n
    else:
        lista[i] = lista[i-1] * 2
    print("N[{}] = {}".format(i, lista[i]))