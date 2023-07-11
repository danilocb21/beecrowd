n = int(input())
for i in range(n):
    s1, s2 = input().split()
    s3 = ""
    vdd = True
    p = 0
    if len(s1) > len(s2):
        for j in range(len(s1) + len(s2)):
            if vdd:
                s3 += s1[p]
                vdd = False
                if p >= len(s2):
                    vdd = True
                    p += 1
            else:
                s3 += s2[p]
                p += 1
                vdd = True
    else:
        for j in range(len(s1) + len(s2)):
            if p >= len(s1):
                vdd = False
            if vdd:
                s3 += s1[p]
                vdd = False
            else:
                s3 += s2[p]
                p += 1
                vdd = True
    print(s3)