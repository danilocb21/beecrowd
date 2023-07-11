#include <iostream>

using namespace std;

int main() 
{
    int dia1, dia2, hora1, minuto1, segundo1, hora2, minuto2, segundo2, total1, total2, tempo, resto;
    string dia = "Dia ";
    string ponto = " : ";
    cin >> dia >> dia1;
    cin >> hora1 >> ponto >> minuto1 >> ponto >> segundo1;
    cin >> dia >> dia2;
    cin >> hora2 >> ponto >> minuto2 >> ponto >> segundo2;

    total1 = (dia1 * 24 * 3600) + (hora1 * 3600) + (minuto1 * 60) + segundo1;
    total2 = (dia2 * 24 * 3600) + (hora2 * 3600) + (minuto2 * 60) + segundo2;
    tempo = total2 - total1;
    if (tempo < 0) {
        tempo = 60;
    }
    dia2 = tempo / 86400;
    resto = tempo % 86400;
    hora2 = resto / 3600;
    resto = resto % 3600;
    minuto2 = resto / 60;
    segundo2 = resto % 60;
    cout << dia2 << " dia(s)\n" << hora2 << " hora(s)\n" << minuto2 << " minuto(s)\n" << segundo2 << " segundo(s)" << endl;

    return 0;
}