#include <bits/stdc++.h>

int main()
{
    int inicio, fim, total;
    scanf("%d %d", &inicio, &fim);
    total = fim - inicio;
    if (total <= 0) {
        total += 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", total);
    return 0;
}
