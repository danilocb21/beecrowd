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

int n;

void solve()
{   
    cin >> n;
    vector<pair<string, pair<int, pair<int,int>>>> med(n);
    for (auto& x : med) {
        string a;
        int b, c, d;
        cin >> a >> b >> c >> d;
        x = mp(a, mp(b,mp(c,d)));
    }
    sort(all(med), [](pair<string, pair<int, pair<int,int>>> a, pair<string, pair<int, pair<int,int>>> b){
        int g1 = a.S.F, g2 = b.S.F;
        int p1 = a.S.S.F, p2 = b.S.S.F;
        int b1 = a.S.S.S, b2 = b.S.S.S;
        if (g1 != g2) return g1 > g2;
        if (p1 != p2) return p1 > p2;
        if (b1 != b2) return b1 > b2;
        return a.F < b.F;
    });

    for (auto& x : med) {
        cout << x.F << " " << x.S.F << " " << x.S.S.F << " " << x.S.S.S << endl;
    }
}

int main()
{
    fast_cin();
    solve();
}