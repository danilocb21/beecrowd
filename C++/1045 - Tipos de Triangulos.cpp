#include <bits/stdc++.h>

void maior(float num1, float num2, float num3, float arr[]) {
    if (num1 >= num2 && num1 >= num3) {
        arr[0] = num1;
        if (num2 >= num3) {
            arr[1] = num2; arr[2] = num3;
        } else if (num3 > num2) {
            arr[1] = num3; arr[2] = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        arr[0] = num2;
        if (num1 >= num3) {
            arr[1] = num1; arr[2] = num3;
        } else if (num3 > num1) {
            arr[1] = num3; arr[2] = num1;
        }
    } else {
        arr[0] = num3;
        if (num1 >= num2) {
            arr[1] = num1; arr[2] = num2;
        } else if (num2 > num1) {
            arr[1] = num2; arr[2] = num1;
        }
    }
}

int main()
{
    float a, b, c; float arr[3];
    scanf("%f %f %f", &a, &b, &c);
    maior(a, b, c, arr);
    a = arr[0]; b = arr[1]; c = arr[2];

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (pow(a,2) == pow(b,2) + pow(c,2)) {
        printf("TRIANGULO RETANGULO\n");
    } else if (pow(a,2) > pow(b,2) + pow(c,2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else printf("TRIANGULO ACUTANGULO\n");
    if (a == b && a == c) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || a == c || b == c) {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
