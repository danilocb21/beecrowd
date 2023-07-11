lista = []
s = 0

while True:
    num = int(input())
    if (num != 0 and num != 1):
        break
    lista.append(num)
lista.reverse()

for i in range(len(lista)):
    s += lista[i] * (2 ** i)
lista.reverse()

print(*lista, sep="")
print(s)