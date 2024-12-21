pedido, qntd = [int(i) for i in input().split()]

if pedido == 1:
    pedido = 4.0
elif pedido == 2:
    pedido = 4.5
elif pedido == 3:
    pedido = 5.0
elif pedido == 4:
    pedido = 2.0
elif pedido == 5:
    pedido = 1.5

total = pedido * qntd
print('Total: R$ {:.2f}'.format(total))