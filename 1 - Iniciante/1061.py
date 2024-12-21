dia, dia1 = input().split(" ")
dia1 = int(dia1)
hora1, minuto1, segundo1 = map(int, input().split(" : "))
dia, dia2 = input().split(" ")
dia2 = int(dia2)
hora2, minuto2, segundo2 = map(int, input().split(" : "))

total1 = (dia1 * 3600 * 24) + (hora1 * 3600) + (minuto1 * 60) + segundo1
total2 = (dia2 * 3600 * 24) + (hora2 * 3600) + (minuto2 * 60) + segundo2
tempo = total2 - total1
if tempo < 0:
    tempo = 60

dia2 = tempo // (3600*24)
resto = tempo % (3600*24)
hora2 = resto // 3600
resto %= 3600
minuto2 = resto // 60
segundo2 = resto % 60

print(f"{dia2} dia(s)")
print(f"{hora2} hora(s)")
print(f"{minuto2} minuto(s)")
print(f"{segundo2} segundo(s)")
