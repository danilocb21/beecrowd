#include <iostream>
 
using namespace std;
 
int main() 
{
 
    int n;
    cin >> n;
    int horas = n / 3600;
    int minutos = n / 60 - horas*60;
    int segundos = n % 3600 - minutos*60;
    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}