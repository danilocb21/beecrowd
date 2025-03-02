#include <bits/stdc++.h>

#define F first
#define S second

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(nullptr);
    int n, m, cont = 1;
    while (cin>>n>>m && (n||m)) {
        cout << "Teste " << cont++ << '\n';
        vector<pair<int,int>> v(m);
        for(auto& x : v)
            cin >> x.F >> x.S;
        sort(v.rbegin(),v.rend());
        int x = v[m-1].F, y = v[m-1].S;
        for (int i = m-2; i >= 0; i--) {
            if (v[i].F <= y) {
                y = max(y,v[i].S);
            } 
            else {
                cout << x << " " << y << '\n';
                x = v[i].F;
                y = v[i].S;
            }
        }
        cout << x << " " << y << "\n\n";
    }
    return 0;
}