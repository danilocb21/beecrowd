while True:
    ali, bea = [int(i) for i in input().split()]
    if ali == 0 and bea == 0: break

    l1 = set([int(i) for i in input().split()])
    l2 = set([int(i) for i in input().split()])

    if len(l1-l2) > len(l2-l1):
        print(len(l2-l1))
    else:
        print(len(l1-l2))