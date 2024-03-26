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

int posX[] = {-1, 0, 0, 1};
int posY[] = {0, -1, 1, 0};

int isValid (int x, int y, vector<string>& g)
{
    if ((x < 0 || x >= n) || (y < 0 || y >= m))
        return false;    
    if (g[x][y] != '.')
        return false;
    return true;
}

void dfs(int x, int y, vector<string>& g)
{
    stack<pair<int,int>> s;
    s.push({x,y});
    while (!s.empty()){
        pair<int,int> tt = s.top();
        s.pop();
        int xx = tt.F;
        int yy = tt.S;
        g[xx][yy] = '*';
        for (int i = 0; i < 4; i++) {
            if (isValid(xx + posX[i], yy + posY[i], g)) {
                s.push({xx + posX[i], yy + posY[i]});
            }
        }
    }

}

void solve()
{
    cin >> n >> m;

    vector<string> g;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        g.pb(s);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '.') {
                ans++;
                dfs(i, j, g);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fast_cin();
    solve();
}