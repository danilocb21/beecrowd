/* Não funcionou =( */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i, j, k, l;
  cin >> n;
  for (i = 0; i < n; ++i) {
    int matriz[9][9], lin, col;
    bool verifier = true;
    for (j = 0; j < 9; ++j) {
      lin = 0;
      for (k = 0; k < 9; ++k) {
        cin >> matriz[j][k];
        lin += matriz[j][k];
      }
      if (lin != 45) verifier = false;
    }
    for (j = 0; j < 9; ++j) {
      col = 0;
      for (k = 0; k < 9; ++k) {
        col += matriz[k][j];
      }
      if (col != 45) verifier = false;
    }
    int cont = 0;
    for (j = 0; j < 3; ++j) {
      int qua[3][3], quad = 0;
      for(k = 0; k < 3; ++k) {
        for (l = 0; l < 3; ++l) {
          qua[k][l] = matriz[k+cont][l];
          quad += qua[k][l];
        }
      }
      cont += 3;
      if (quad != 45) verifier = false;
      }
    cont = 0;
    for (j = 0; j < 3; ++j) {
      int qua[3][3], cont = 0, quad = 0;
      for(k = 3; k < 6; ++k) {
        for (l = 3; l < 6; ++l) {
          qua[k][l] = matriz[k+cont][l];
          quad += qua[k][l];
        }
      }
      cont += 3;
      if (quad != 45) verifier = false;
    }
    cont = 0;
    for (j = 0; j < 3; ++j) {
      int qua[3][3], cont = 0, quad = 0;
      for(k = 6; k < 9; ++k) {
        for (l = 6; l < 9; ++l) {
          qua[k][l] = matriz[k+cont][l];
          quad += qua[k][l];
        }
      }
      cont += 3;
      if (quad != 45) verifier = false;
    }
    cout << "Instancia " << i+1 << '\n';
    if (verifier) {
      cout << "SIM\n" << '\n';
    } else cout << "NAO\n" << '\n';
  }
}