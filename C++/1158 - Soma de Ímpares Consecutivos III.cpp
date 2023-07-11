#include <iostream>

int main() {

    int n, x, y, soma;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        soma = 0;
        int j = 0;
        while (true) {
            if (j == y) {
                break;
            }
            if (x % 2 != 0) {
                soma += x;
                x += 2;
                j++;
            } else {
                x++;
                soma += x;
                x += 2;
                j++;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}
