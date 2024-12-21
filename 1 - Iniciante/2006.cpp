#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d, e;
    int contador = 0;
    cin >> t;
    cin >> a; cin >> b; cin >> c; cin >> d; cin >> e;
    if (a == t) contador++;
    if (b == t) contador++;
    if (c == t) contador++;
    if (d == t) contador++;
    if (e == t) contador++;

    cout << contador << endl;
    return 0;
}