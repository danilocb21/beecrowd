n = int(input())
c = e = 0
qtd1 = qtd2 = 0

for i in range(n):
    sd, sn = input().split()
    if sd == 'chuva':
        c += 1
        if qtd1 > 0:
            c -= 1
        qtd1 -= 1
        qtd2 += 1
        if qtd1 < 0:
            qtd1 += 1
        if sn == 'chuva':
            qtd2 -= 1
            qtd1 += 1
    elif sd == 'sol':
        if sn == 'chuva':
            e += 1
            if qtd2 > 0:
                e -= 1
            qtd2 -= 1
            qtd1 += 1
            if qtd2 < 0:
                qtd2 += 1
print(c, e)