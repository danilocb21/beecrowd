from string import ascii_letters as alpha

n = int(input())
for i in range(n):
    frase = input()
    s = ""
    s1 = ""
    s2 = ""
    for i in frase:
        if (i in alpha):
            s += chr(ord(i) + 3)
        else:
            s += i
    s = s[::-1]
    s1 += s[len(s)//2:]
    for i in s1:
        s2 += chr(ord(i) - 1)
    s = s[:len(s)//2]
    print(s + s2)