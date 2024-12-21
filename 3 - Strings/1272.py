n = int(input())
for i in range(n):
    frase = input()
    s = frase.split()
    lista = []
    for i in range(len(s)):
        if (s[i].isalpha()):
            lista.append(s[i][0])
    print(''.join(lista))