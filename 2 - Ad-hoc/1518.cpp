#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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

struct avx {
    int x,y;
    char c;
    bool operator<(const avx& a) const {
        if (x != a.x) return x < a.x;
        if (y != a.y) return x < a.y;
        return c < a.c;
    }
};

int x,y;
void solve()
{
    cin>>x>>y;
    vector<avx> v(3);
    for (int i = 0; i < 3; i++) {
        int a,b;
        char c;
        cin>>a>>b>>c;
        v[i] = {a,b,c};
    }
    sort(all(v));
    int ans = INF;
    while (next_permutation(all(v))) {
        int a = x, b = y;
        for (int i = 0; i < 3; i++) {
            int dx = abs(a-v[i].x);
            int dy = abs(b-v[i].y);
            
        }
    }
    cout << ans << endl;
}

int main()
{
    fast_cin();
    while (cin>>x>>y && (x || y)) solve();
}