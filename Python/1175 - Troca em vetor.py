lista = []

for i in range(20):
    lista.append(int(input()))

lista.reverse()
for i in range(len(lista)):
    print(f"N[{i}] = {lista[i]}")