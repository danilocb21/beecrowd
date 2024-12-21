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

int posX[] = {-1, 0, 0, 1};
int posY[] = {0, -1, 1, 0};

int isValid(int x, int y, vector<v32>& g)
{
    return !((x < 0 || x >= 5) || (y < 0 || y >= 5)) && !g[x][y];
}

int dfs(int x, int y, vector<v32>& g)
{
    if (x == 4 && y == 4)
        return true;

    g[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        if (isValid(x + posX[i], y + posY[i], g)) {
            if (dfs(x + posX[i], y + posY[i], g))
                return true;
        }
    }
    g[x][y] = 0;
    return false;
}

void solve()
{
    vector<v32> g(5, v32(5));
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> g[i][j];
        }
    }

    if (dfs(0, 0, g))
        cout << "COPS" << endl;
    else
        cout << "ROBBERS" << endl;

}

int main()
{
    fast_cin();
    int t; cin >> t;
    while(t--) solve();
}