q = int(input())
lista = []
media = 0

for i in range(q):
    lista.append(int(input()))
    
for laranja in lista:
    if (laranja < (sum(lista) / len(lista))):
        media += 1
garrafas = sum(lista) // 1000

print(sum(lista))
print(garrafas)
print(media)