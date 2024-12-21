#include <iostream>
 
using namespace std;
 
int main() 
{
    int golinter, golgremio, resposta;
    int contador=0, inter=0, gremio=0, empate=0;
    do {
        contador++;
        cin >> golinter >> golgremio;
        if (golinter > golgremio) {
            inter++;
        } else if (golgremio > golinter) {
            gremio++;
        } else {
            empate++;
        }
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> resposta;
    } while (resposta == 1);

    cout << contador << " grenais\n" <<  \
    "Inter:" << inter << "\n" << \
    "Gremio:" << gremio << "\n" << \
    "Empates:" << empate << '\n';
    
    if (inter > gremio) {
        cout << "Inter venceu mais\n";
    } else if (gremio > inter) {
        cout << "Gremio venceu mais\n";
    } else {
        cout << "Nao houve vencedor\n";
    }    
}