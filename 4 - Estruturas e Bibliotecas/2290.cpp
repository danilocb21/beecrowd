#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
#define INF 0x3fffffff
#define LLINF 0x3fffffffffffffff
#define PI 3.14159265358979323846
#define endl '\n'
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define pb push_back
#define fast_cin()               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
template<class T> using ordered_set = 
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int n;
void solve() {
    v64 v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];
    
    sort(all(v));
    vector<bool> ok(n);
    for (int i = 0; i < n; i++) {
        if (ok[i]) continue;
        if (i < n-1 && v[i] == v[i+1]) {
            ok[i] = true;
            ok[i+1] = true;
        }
    }
    int ct = 0;
    for (int i = 0; i < n; i++) {
        if (!ok[i])
            cout << v[i] << " \n"[++ct==2];
    }
    if (ct < 2) cout << endl;
}

int main() {
    fast_cin();
    while(cin>>n && n) solve();
}