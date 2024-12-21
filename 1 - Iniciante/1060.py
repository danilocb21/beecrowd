contador = 0

for i in range(6):
    num = float(input())
    if num>0:
        contador += 1
print(f'{contador} valores positivos')