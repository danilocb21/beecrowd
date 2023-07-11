#include <iostream>
 
using namespace std;
 
int main() 
{
    int idade;
    cin >> idade;

    int ano = idade / 365;
    int mes = (idade-ano*365) / 30;
    int dia = idade-ano*365-mes*30;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;   

    return 0;
}