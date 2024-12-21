#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    while (true) {
        string frase, palavra="";
        bool vdd = true;
        vector<string> frases;
        getline(cin, frase);
        if (frase == "*") break;
        for (int i = 0; i < frase.size(); ++i) {
            if (frase[i] == ' ') {
                frases.push_back(palavra);
                palavra = "";
            } else if (i == frase.size()-1) {
                palavra += frase[i];
                frases.push_back(palavra);
            } else {
                palavra += frase[i];
            }
        }
        char primeiro = tolower(frase[0]);
        char segundo = toupper(frase[0]);
        for (int i = 0; i < frases.size(); ++i) {
            if (frases[i][0] != primeiro && frases[i][0] != segundo) vdd = false;
        }
        if (vdd) {
            cout << "Y\n";
        } else cout << "N\n";
    }
}