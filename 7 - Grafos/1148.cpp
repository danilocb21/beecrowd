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
#define INF INT_MAX
#define LLINF LLONG_MAX
const int mod=(1e9)+7;
#define PI 3.14159265358979323846
#define yes cout<<"YES"<<endl
#define Yes cout<<"Yes"<<endl
#define no cout<<"NO"<<endl
#define No cout<<"No"<<endl
#define endl '\n'
using pii = pair<int, int>;
using pll = pair<ll, ll>;
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

int n, e;
void solve() {
    vector<v32> g(n+1, v32(n+1, INF));
    for (int i = 0; i < e; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        g[a][b] = c;
        if (g[a][b] != INF && g[b][a] != INF) {
            g[a][b] = 0;
            g[b][a] = 0;
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (g[i][k] != INF && g[k][j] != INF)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    int k;
    cin>>k;
    while(k--) {
        int a,b;
        cin>>a>>b;
        if (g[a][b] != INF) {
            cout << g[a][b];
        } else {
            cout << "Nao e possivel entregar a carta";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    fast_cin();
    while(cin >> n >> e && (n||e)) solve();
}