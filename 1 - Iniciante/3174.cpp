#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
    unordered_map<string, int> grupos = {
        {"bonecos", 8},
        {"arquitetos", 4},
        {"musicos", 6},
        {"desenhistas", 12}
    };

    int n; cin >> n;
    int total = 0;
    int bonecos=0, arquitetos=0, musicos=0, desenhistas=0;
    while (n--) {
        string nome, emprego;
        int horas;
        cin >> nome >> emprego >> horas;
        if (emprego == "bonecos") bonecos += horas;
        else if (emprego == "arquitetos") arquitetos += horas;
        else if (emprego == "musicos") musicos += horas;
        else desenhistas += horas;
    }
    total += bonecos / grupos["bonecos"];
    total += arquitetos / grupos["arquitetos"];
    total += musicos / grupos["musicos"];
    total += desenhistas / grupos["desenhistas"];
    cout << total << "\n";

    return 0;
}