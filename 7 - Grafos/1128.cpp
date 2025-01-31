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

const int N = 2001;
int n, m;
vector<v32> g(N);
void solve() {
    g.assign(N, v32());
    for (int i = 0; i < m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        g[a].pb(b);
        if (c == 2)
            g[b].pb(a);
    }

    for (int i = 1; i <= n; i++) {
        vector<bool> vis(n+1);
        vis[i] = true;
        queue<int> q;
        q.push(i);
        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int x : g[u]) {
                if (!vis[x]) {
                    q.push(x);
                    vis[x] = true;
                }
            }
        }
        for (int j = 1; j <= n; j++) {
            if (!vis[j]) {
                cout << 0 << endl;
                return;
            }
        }
    }

    cout << 1 << endl;
}

int main() {
    fast_cin();
    while(cin>>n>>m && (n||m)) solve();
}