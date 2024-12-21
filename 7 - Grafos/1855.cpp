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

void solve()
{
    int n, m;
    cin >> n >> m;
    
    vector<string> mat;
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        mat.pb(s);
    }

    int x = 0, y = 0;
    char tt = mat[x][y];
    while (true) {
        if ((y < 0 || y >= n) || (x < 0 || x >= m)) {
            cout << '!' << endl;
            return;
        }
        if (mat[x][y] == '*') {
            cout << '*' << endl;
            return;
        }
        if (mat[x][y] == '$') {
            cout << '!' << endl;
            return;
        }
        char xz = mat[x][y];
        mat[x][y] = '$';
        if (xz == '>' || xz == 'v' || xz == '<' || xz == '^')
            tt = xz;
        switch(tt) {
            case '>':
                y++;
                break;
            case 'v':
                x++;
                break;
            case '<':
                y--;
                break;
            case '^':
                x--;
                break;
        }
    }

}

int main()
{
    fast_cin();
    solve();
}