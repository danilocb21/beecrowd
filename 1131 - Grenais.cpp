#include <iostream>
 
using namespace std;
 
int main() 
{
    int golinter, golgremio, resposta;
    int contador = 1;
    int inter = 0;
    int gremio = 0;
    int empate = 0;
    cin >> golinter >> golgremio;
    if (golinter > golgremio) {
        inter++;
    } else if (golgremio > golinter) {
        gremio++;
    } else {
        empate++;
    }
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> resposta;
    while (resposta == 1) {
        contador++;
        cin >> golinter >> golgremio;
        if (golinter > golgremio) {
            inter++;
        } else if (golgremio > golinter) {
            gremio++;
        } else {
            empate++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resposta;
    }
    if (inter > gremio) {
        cout << contador << " grenais\n" << "Inter:" << inter << "\n" << "Gremio:" << gremio << "\n" << "Empates:" << empate << '\n' << "Inter venceu mais\n";
    } else if (gremio > inter) {
        cout << contador << " grenais\n" << "Inter:" << inter << "\n" << "Gremio:" << gremio << "\n" << "Empates:" << empate << '\n' << "Gremio venceu mais\n";
    } else {
        cout << contador << " grenais\n" << "Inter:" << inter << "\n" << "Gremio:" << gremio << "\n" << "Empates:" << empate << '\n' << "Nao houve vencedor\n";
    }    
    return 0;
}
