// Incompleto - Não funciona!!

#include <bits/stdc++.h>
using namespace std;


int multiply(int size,int Res[],int n)
{
    int carry=0;
    for(int x=0;x<size;x++)
    {
        int product=Res[x]*n+carry;
        Res[x]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        Res[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}

int main() {
    int n, cont;
    vector<int> primos;
    cin >> n;
    int ns[n];
    for (int i = 0; i < n; ++i) {
        cin >> ns[i];
    }
    for (int i = 0; i < n; ++i) {
        cont = 0;
        for (int j = 1; j <= ns[i]; ++j) {
            if (ns[i] % j == 0) cont++;
            if (cont > 2) break;
        }
        if (cont == 2) primos.push_back(ns[i]);
    }
    sort(primos.begin(), primos.end());
    for (int i = 0; i < primos.size(); ++i) {
        int size = 1;
        int Res[10000];
        Res[0] = 1;
        cout << primos[i] << "! = ";
        for (int j = 2; j <= primos[i]; ++j) {
            size = multiply(size, Res, j);
        }
        for (int j = size-1; i >= 0; --i) {
            cout << Res[i];
        }
        cout << '\n';
    }
}