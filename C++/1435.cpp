#include <iostream>
#include <iomanip>

using namespace std;

void solve(int n)
{
    int matriz [n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 1 + min(min(i, n-1-j), min(j, n-1-i));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3);
            if (j != n-1) cout << matriz[i][j] << ' ';
            else cout << matriz[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        solve(n);
    }
}