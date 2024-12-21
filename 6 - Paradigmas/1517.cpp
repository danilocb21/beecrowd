#include <complex>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <bitset>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int dp[21][21][2002];
int matriz[21][21][2002];

int mb(int n, int m, int x, int y, int c, int k)
{
    if (dp[x][y][c] != -1)
        return dp[x][y][c];

    if (c == k+1)
        return 0;

    int cont;
    (matriz[x][y][c] == 1) ? cont=1 : cont=0;
    
    int movesX[] = {0,-1,-1,-1,0,0,1,1,1};
    int movesY[] = {0,-1,0,1,-1,1,-1,0,1};
    
    int maior = -1;
    for (int i = 0; i < 9; i++) {
        if (x+movesX[i] < 1 || x+movesX[i] > n)
            continue;
        if (y+movesY[i] < 1 || y+movesY[i] > m)
            continue;

        int r = cont + mb(n, m, x+movesX[i], y+movesY[i], c+1, k);

        if (maior < r)
            maior = r;
    }
    dp[x][y][c] = maior;
    return dp[x][y][c];
}

void solve(int n, int m, int k) 
{
    memset(dp, -1, sizeof dp);
    memset(matriz, 0, sizeof matriz);
    
    int a, b, c;
    for (int i = 0; i < k; i++) {
        cin >> a >> b >> c;
        matriz[a][b][c] = 1;
    }
    int x, y; cin >> x >> y;
    cout << mb(n, m, x, y, 0, c) << "\n";
}

int main()
{
    int n, m, k;
    while (true) {
        cin >> n >> m >> k;
        if (!n && !m && !k) break;
        solve(n,m,k);
    }
}