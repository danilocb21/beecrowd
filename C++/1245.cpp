#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (cin >> n) {
        vector<vector<char>> v(61);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            char c;
            cin >> x >> c;
            v[x].push_back(c);
        }
        for (int i = 30; i <= 60; i++) {
            int l=0, d=0;
            for (char c : v[i]) {
                if (c == 'E')
                    l++;
                else d++;
            }
            ans += min(l,d);
        }
        
        cout << ans << "\n";
    }
    return 0;
}
