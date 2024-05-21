#include <ext/pb_ds/assoc_container.hpp>
#include <bits/stdc++.h>
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

int n;
v32 a;

int merge(int l, int m, int r) {
    v32 tz;
    int i = l, j = m, x = 0;
    while (i <= m-1 && j <= r) {
        if (a[i] > a[j]) {
            tz.pb(a[j++]);
            x += m-i;
        }
        else {
            tz.pb(a[i++]);
        }
    }
    while (i <= m-1) {
        tz.pb(a[i++]);
    }
    while (j <= r) {
        tz.pb(a[j++]);
    }
    int k;
    for (i = l, k=0; i <= r; i++) {
        a[i] = tz[k++];
    }
    return x;
}

int inv(int l, int r) {
    if (l==r)
        return 0;

    int m = l+(r-l)/2;
    int x = 0;
    x += inv(l, m);
    x += inv(m+1, r);
    x += merge(l, m+1, r);
    return x;
}

void solve()
{
    cin >> n;
    a = v32(n);
    for (auto& x : a)
        cin >> x;
    
    int ans = inv(0, n-1);
    cout << "Optimal train swapping takes " << ans << " swaps.\n";
}

int main()
{
    fast_cin();
    int t; cin >> t;
    while(t--) solve();
}