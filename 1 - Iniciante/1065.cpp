#include <bits/stdc++.h>

int main()
{
    int n, par;
    for (int i = 0; i < 5; i++) {;
        scanf("%d", &n);
        if (n % 2 == 0) {
            par += 1;
        }
    }
    printf("%d valores pares\n", par);
    return 0;
}
