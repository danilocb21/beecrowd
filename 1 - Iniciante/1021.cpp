#include <bits/stdc++.h>
using namespace std;

int main () {
    double num;
    scanf("%lf", &num);

    int notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int temp = num / notas[i];
        printf("%d nota(s) de R$ %d.00\n", temp, notas[i]);
        num -= temp * notas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int temp;
        if (moedas[i] == 0.01) temp = round(num/0.01);
        else temp = num / moedas[i];
        printf("%d moeda(s) de R$ %.2lf\n", temp, moedas[i]);
        num -= temp * moedas[i];
    }
}