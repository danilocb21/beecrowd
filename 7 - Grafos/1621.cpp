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

int n, m;

int ans, sts;
pair<int,int> pp;

int posX[] = {-1, 0, 0, 1};
int posY[] = {0, -1, 1, 0};

int isP(int x, int y, vector<string>& g)
{
    return !((x < 0 || x >= n) || (y < 0 || y >= m)) && g[x][y] == '.';
}

int dfs(int x, int y, vector<string>& g, int steps)
{
    if (steps > ans) {
        ans = steps;
        pp = {x,y};
    }
    g[x][y] = '#';
    for (int i = 0; i < 4; i++) {
        if (isP(x+posX[i], y+posY[i], g)) {
            dfs(x+posX[i], y+posY[i], g, steps+1);
        }
    }
    return ans;
}

void solve()
{
    vector<string> g;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        g.pb(s);
    }
    vector<string> sol = g;
    for (int i=0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '.') {
                dfs(i,j, g, 0);
                sts = min(sts, dfs(pp.F, pp.S, sol, 0));
            }   
        }
    }
    cout << sts << endl;
}

int main()
{
    fast_cin();
    while(cin >> n >> m && (n || m)) {
        ans = 0;
        sts = INF;
        pp = {0,0};
        solve();
    }
}