#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a;
    cin >> b;
    double nota = (a*3.5 + b*7.5)/11;
    cout << fixed << setprecision(5) << "MEDIA = " << nota;

    return 0;
}