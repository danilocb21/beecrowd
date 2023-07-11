while True:
    try:
        perna = input()
        if perna == "esquerda":
            print("ingles")
            
        elif perna == "direita":
            print("frances")
            
        elif perna == "as duas":
            print("caiu")
                
        else:
            print('portugues')
    
    except EOFError:
        break
