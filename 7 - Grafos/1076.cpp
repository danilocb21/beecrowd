#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
const int N=1'000'005;
#define INF 0x3fffffff
const int mod=(1e9)+7;
#define yes cout<<"YES"<<endl
#define Yes cout<<"Yes"<<endl
#define no cout<<"NO"<<endl
#define No cout<<"No"<<endl
#define endl '\n'
using PII = pair<ll, ll>;
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(arr, n)
#endif

int n, v, a;
int ans;

void dfs(int n, v32 g[], v32& vis)
{
    //debug(n, ans);
    vis[n] = 1;
    ans++;
    for (int nd : g[n]) {
        if (!vis[nd]) {
            dfs(nd, g, vis);
        }
    }
}


void solve()
{
    v32 g[100];
    v32 vis(100);
    ans = 0;

    cin >> n >> v >> a;
    for (int i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(n, g, vis);
    ans--;
    cout << ans*2 << endl;
}

int main()
{
    fast_cin();
    int t; cin >> t;
    while(t--) solve();
}