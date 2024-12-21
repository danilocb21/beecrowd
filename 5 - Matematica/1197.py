while True:
    try:
        v, t = [int(i) for i in input().split()]
        s = 2 * v * t
        print(s)
    except EOFError:
        break