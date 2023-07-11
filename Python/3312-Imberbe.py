cache = {}

def fatorial(num):
    if num in cache:
        return cache[num]
    else:
        if num == 1:
            return 1
        else:
            r = num * fatorial(num-1)
            cache[num] = r
            return r


n = int(input())

primos = []
ns = [int(i) for i in input().split()]

for i in range(len(ns)):
    cont = 1
    for j in range(1, ns[i]):
        if ns[i] % j == 0:
            cont += 1
        if cont > 2 : break
    if cont == 2:
        primos.append(ns[i])
primos.sort()
for i in range(len(primos)):
    print("{}! = {}".format(primos[i], fatorial(primos[i])))