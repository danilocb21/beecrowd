n = int(input())
for i in range(n):
    lista = []
    num = int(input())
    for i in range(1, num+1):
        if (num % i == 0 and i != num):
            lista.append(i)
    if (sum(lista) == num):
        print("{} eh perfeito".format(num))
    else:
        print("{} nao eh perfeito".format(num))