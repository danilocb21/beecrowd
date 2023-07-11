from string import ascii_uppercase as alpha

n = int(input())
for i in range(n):
    l = int(input())
    valor = 0
    for i in range(l):
        s = input()
        for j in range(len(s)):
            valor += alpha.index(s[j]) + i + j
    print(valor)