#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
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
#define pb push_back
#define fast_cin()                    \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
template<class T> using ordered_set = 
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

void solve() {
    int a[2], b[2];
    char c;
    cin >> a[0] >> c >> b[0];
    cin >> b[1] >> c >> a[1];

    bool win_a = a[0]+a[1] > b[0]+b[1];
    bool draw = a[0]+a[1] == b[0]+b[1];

    if (win_a) 
        cout << "Time 1";
    else if (!draw)
        cout << "Time 2";
    else if (a[1] > b[0])
        cout << "Time 1";
    else if (b[0] > a[1])
        cout << "Time 2";
    else
        cout << "Penaltis";
    
    cout << endl;
    
}

int main() {
    fast_cin();
    int t; cin >> t;
    while(t--) solve();
}