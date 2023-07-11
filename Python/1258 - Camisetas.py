def ordenar(cor, nome):
    brancos = []
    vermelhos = []
    for i in cor:
        if i[0] == "branco":
            brancos.append(i)
        else:
            vermelhos.append(i)
    brancos.reverse()
    vermelhos.reverse()
    for i in nome:
        if dicio[i] in brancos:
            j = 0
            while len(brancos[brancos.index(dicio[i]) + j]) > 2:
                j += 1
            brancos[brancos.index(dicio[i]) + j].append(i)
        elif dicio[i] in vermelhos:
            j = 0
            while len(vermelhos[vermelhos.index(dicio[i]) + j]) > 2:
                j += 1
            vermelhos[vermelhos.index(dicio[i]) + j].append(i)
    return brancos + vermelhos

while True:
    n = int(input())
    dicio = dict()
    if n == 0:
        break
    for i in range(n):
        nome = input()
        dicio[nome] = input().split()
    ordem_cor = ordenar(sorted(dicio.values()), sorted(dicio.keys()))
    for i in ordem_cor:
        print(*i)
    print()