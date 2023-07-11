from string import ascii_lowercase as alpha

palavras = []
while True:
    try:
        frase = input().lower()
        nf = ""
        for i in frase:
            if i in alpha or i == " ":
                nf += i
            else:
                nf += " "
        nlist = nf.split()
        for i in nlist:
            palavras.append(i)
    
    except:
        break
palavras = list(set(palavras))
palavras.sort()
for i in palavras:
    print(i)