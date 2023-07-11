n = int(input())
for i in range(n):
    letras = {}
    final = []
    frase = input().lower()
    for k in frase:
        if k not in letras and k.isalpha():
            letras[k] = 1
        elif k.isalpha():
            letras[k] += 1
    maxi = max(letras.values())
    for c, x in letras.items():
        if x == maxi:
            final.append(c)
    final.sort()
    print("".join(final))