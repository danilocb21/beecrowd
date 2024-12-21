n = int(input())
for i in range(n):
    nome = input()
    multi = float(input())
    notas = [float(i) for i in input().split()]
    notas.remove(max(notas))
    notas.remove(min(notas))
    res = sum(notas) * multi
    print(f"{nome} {res:.2f}")