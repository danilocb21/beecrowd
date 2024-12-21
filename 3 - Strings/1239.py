while True:
    try:
        frase = input()
        nfrase = ""
        sub = True
        neg = True
        for i in frase:
            if i == "_" and sub:
                nfrase += "<i>"
                sub = False
            elif i == "_" and not sub:
                nfrase += "</i>"
                sub = True
            elif i == "*" and neg:
                nfrase += "<b>"
                neg = False
            elif i == "*" and not neg:
                nfrase += "</b>"
                neg = True
            else:
                nfrase += i
        print(nfrase)
    except:
        break