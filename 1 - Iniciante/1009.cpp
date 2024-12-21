#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    double salario, vendas;
    getline(cin, nome);
    cin >> salario;
    cin >> vendas;
    double total = salario + (vendas*0.15);
    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;

    return 0;
}