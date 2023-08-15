#include <stdio.h>
#include <cmath>
 
int maior(int num1, int num2) {
    int m = (num1 + num2 + abs(num1-num2))/2;
    if (num1 == m) return 1;
    else return 0;
} 
 
int main() {
    
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (maior(a, b)) {
        if (maior(a, c)) {
            printf("%d eh o maior\n", a);
        } else {
            printf("%d eh o maior\n", c);
        }
    } else {
        if (maior(b, c)) {
            printf("%d eh o maior\n", b);
        } else {
            printf("%d eh o maior\n", c);
        }
    }
    return 0;
}