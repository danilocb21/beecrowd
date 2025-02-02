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
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define INF INT_MAX
#define LLINF LLONG_MAX
#define PI 3.14159265358979323846
#define endl '\n'
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define pb push_back
#define fast_cin()                    \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
template<class T> using ordered_set = 
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int n;
void solve() {
    v32 v(n), tr(n);
    iota(all(v), 1);

    while (cin>>tr[0] && tr[0]) {
        for (int i = 1; i < n; i++)
            cin >> tr[i];
        
        bool ok = true;
        stack<int> stk;
        int px = 0, py = 0;
        while (px < n && py < n) {
            stk.push(v[px++]);
            while (sz(stk) && stk.top() == tr[py]) {
                stk.pop();
                py++;
            }
        }
        while (!stk.empty()) {
            if (stk.top() == tr[py]) {
                stk.pop();
                py++;
            } else {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << endl;
    }
    cout << endl;
}

int main() {
    fast_cin();
    while(cin>>n&&n) solve();
}