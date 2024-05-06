#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
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

ll pw(ll a, ll b)
{
    if (b == 0)
        return 1;

    if (b % 2) {
        ll t = pw(a, (b-1)/2);
        return (1ll * a * t * t);
    }
    else {
        ll t = pw(a, b/2);
        return (1ll * t * t);
    }
}

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(arr, n)
#endif

struct pais {
    string n;
    int o, s, b;
    const bool operator<(const pais& ss) {
        if (o != ss.o) return o > ss.o;
        if (s != ss.s) return s > ss.s;
        if (b != ss.b) return b > ss.b;
        return n < ss.n;
    }
    pais(string nn, int oo, int ss, int bb) {
        n = nn;
        o = oo;
        s = ss;
        b = bb;
    }
};

void solve()
{
    int n; cin >> n;
    vector<pais> v;
    while (n--) {
        string n;
        int o, s, b;
        cin >> n >> o >> s >> b;
        v.pb(pais(n, o, s, b));
    }
    sort(all(v));
    for(auto& x : v) {
        cout << x.n << " " << x.o << " " << x.s << " " << x.b << endl;
    }
}

int main()
{
    fast_cin();
    solve();
}