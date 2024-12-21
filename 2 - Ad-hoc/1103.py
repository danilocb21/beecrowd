while True:
    h, m, h1, m1 = map(int, input().split())

    if h == 0 and m == 0 and h1 == 0 and m1 == 0:
        break

    hfim = h1 - h
    if hfim < 0:
        hfim += 24
    hfim *= 60 # h para min

    tempo = hfim + (m1 - m)
    if tempo < 0:
        tempo += 1440 # 24 * 60
    print(tempo)