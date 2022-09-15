n = int(input())
for i in range(n):
    s1 = s2 = ""
    frase = input()
    s1 += frase[:len(frase)//2]
    s2 += frase[len(frase)//2:]
    s1 = s1[::-1]
    s2 = s2[::-1]
    print(s1, s2, sep="")
