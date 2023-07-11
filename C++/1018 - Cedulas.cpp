#include <iostream>
 
using namespace std;
 
int main() 
{
    int notas;
    cin >> notas;

    int ced100 = notas / 100;
    int ced50 = (notas-ced100*100) / 50;
    int ced20 = (notas-ced100*100-ced50*50) / 20;
    int ced10 = (notas-ced100*100-ced50*50-ced20*20) / 10;
    int ced5 = (notas-ced100*100-ced50*50-ced20*20-ced10*10) / 5;
    int ced2 = (notas-ced100*100-ced50*50-ced20*20-ced10*10-ced5*5) / 2;
    int ced1 = (notas-ced100*100-ced50*50-ced20*20-ced10*10-ced5*5-ced2*2);

    cout << notas << endl;
    cout << ced100 << " nota(s) de R$ 100,00" << endl;
    cout << ced50 << " nota(s) de R$ 50,00" << endl;
    cout << ced20 << " nota(s) de R$ 20,00" << endl;
    cout << ced10 << " nota(s) de R$ 10,00" << endl;
    cout << ced5 << " nota(s) de R$ 5,00" << endl;
    cout << ced2 << " nota(s) de R$ 2,00" << endl;
    cout << ced1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}