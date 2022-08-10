#include <iostream>
using namespace std;
 
int main() 
{
    int n = 0, c = 0, e = 0, guarda_casa = 0, guarda_escritorio = 0;
    string sd, sn;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sd, cin >> sn;
        if (sd == "chuva") {
            c++;
            if (guarda_casa > 0) c--;
            guarda_casa--;
            guarda_escritorio++;
            if (guarda_casa < 0) guarda_casa = 0;
            if (sn == "chuva") {
                guarda_escritorio--;
                guarda_casa++;
            }
        } 
        else if (sd == "sol") {
            if (sn == "chuva") {
                e++;
                if (guarda_escritorio > 0) e--;
                guarda_escritorio--;
                guarda_casa++;
                if (guarda_escritorio < 0) guarda_escritorio = 0;
            }
        }
    }
    cout << c << " " << e << endl;
    return 0;
}
