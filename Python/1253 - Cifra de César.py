from string import ascii_uppercase as alpha
n = int(input())
for i in range(n):
    frase = input()
    qtd = int(input())
    s = ""
    for i in frase:
        if (alpha.index(i) - qtd < 0):
            s += alpha[alpha.index(i) - qtd + len(alpha)]
        else:
            s += alpha[alpha.index(i) - qtd]
    print(s)