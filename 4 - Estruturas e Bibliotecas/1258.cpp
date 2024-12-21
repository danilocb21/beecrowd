#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
const int N=1000005;
#define INF 0x3fffffff
const int mod=1e9+7;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
using PII = pair<ll, ll>;
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define pb push_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(arr, n)
#endif

int n, z = 0;

void solve()
{   
    if (z++) cout << endl;
    vector<pair<string, pair<string, char>>> arr;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        string s; getline(cin, s);
        string c; char tam; cin >> c >> tam;
        arr.push_back(mp(s, mp(c,tam)));
    }

    sort(all(arr), [](pair<string, pair<string, char>> a, pair<string, pair<string, char>> b){
        if (a.S.F != b.S.F) return a.S.F < b.S.F;
        if (a.S.S != b.S.S) return a.S.S > b.S.S;
        return a.F < b.F;
    });
    for (auto& x : arr) {
        cout << x.S.F << " " << x.S.S << " " << x.F << endl;
    }
}

int main()
{
    fast_cin();
    while (cin >> n && n) solve();
}