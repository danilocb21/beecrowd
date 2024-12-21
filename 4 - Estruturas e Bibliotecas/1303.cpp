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

int n, tt=1;
void solve()
{
    if (tt>1) cout << endl;
    cout << "Instancia " << tt++ << endl;
    vector<array<int,4>> at(n);
    for (int i = 0; i < n; i++)
        at[i][0] = i;
    for (int i = 0; i < n*(n-1)/2; i++) {
        int a,b,c,d;
        cin>>a>>c>>b>>d;
        a--, b--;
        if (c > d) {
            at[a][1] += 2;
            at[b][1]++;
        }
        else {
            at[b][1] += 2;
            at[a][1]++;
        }
        at[a][2] += c;
        at[a][3] += d;
        at[b][2] += d;
        at[b][3] += c;
    }

    sort(all(at), [&](array<int,4>& a, array<int,4>& b) {
        double ax,bx;
        if (a[3] == 0) ax = (double) a[2];
        else ax = (double) a[2]/a[3];
        if (b[3] == 0) bx = (double) b[2];
        else bx = (double) b[2]/b[3];

        if (a[1] != b[1]) return a[1] > b[1];
        if (abs(ax-bx) >= 1e-9) return ax > bx;
        if (a[2] != b[2]) return a[2] > b[2];
        return a[0] < b[0];
    });
    for (int i = 0; i < n; i++) {
        if (i == n-1) cout << at[i][0]+1 << endl;
        else cout << at[i][0]+1 << " ";
    }
}

int main()
{
    fast_cin();
    //int t; cin >> t;
    while(cin>>n&&n) solve();
}