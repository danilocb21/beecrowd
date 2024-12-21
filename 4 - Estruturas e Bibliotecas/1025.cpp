#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

ll cont = 1;

ll binary_Search (vector<ll> v, ll x) {
    ll a = 0;
    ll b = v.size()-1;
    while (a <= b) {
        ll k = (a+b)/2;
        if (v[k] > x) b = k-1;
        else if (v[k] < x) a = k+1;
        else if (v[k] == x) {
            while (v[k] == x) k--;
            return k+1;
        }
    }
    return -1;
}

void solved(ll a, ll b) {
    vector<ll> v;
    for (ll i = 0; i < a; i++) {
        ll p; cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    cout << "CASE# " << cont << ":\n";
    for (ll i = 0; i < b; i++) {
        ll x; cin >> x;
        ll res = binary_Search(v, x);
        if (res >= 0) cout << x << " found at " << res+1 << "\n";
        else cout << x << " not found\n";
    }
    cont++;
    
}
signed main() {
    ll a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        solved(a, b);
    }
}