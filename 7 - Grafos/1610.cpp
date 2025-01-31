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

int n, m;
const int N = 1e4+1;
vector<v32> g;
vector<bool> vis(N), rec(N);

bool dfs(int x) {
    if (!vis[x]) {
        vis[x] = true;
        rec[x] = true;

        for (int u : g[x]) {
            if (!vis[u] && dfs(u))
                return true;
            else if (rec[u])
                return true;
        }
    }
    rec[x] = false;
    return false;
}

void solve() {
    bool ans = false;

    g.assign(N, v32());
    vis.assign(N, false);

    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;

        g[a].pb(b);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i] && dfs(i)) {
            ans = true;
            break;
        }
    }
    cout << (ans ? "SIM" : "NAO") << endl;
}

int main() {
    fast_cin();
    int t; cin >> t;
    while(t--) solve();
}