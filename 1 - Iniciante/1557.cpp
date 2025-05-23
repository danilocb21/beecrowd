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

int n;
void solve() {
    vector<v32> g(n, v32(n));

    g[0][0] = 1;
    for (int i = 1; i < n; i++)
        g[0][i] = g[0][i-1] * 2;
    
    for (int i = 1; i < n; i++) 
        for (int j = 0; j < n; j++) 
            g[i][j] = g[i-1][j] * 2;
    
    int max = g[n-1][n-1];
    int digs = 0;
    while (max > 0) {
        max /= 10;
        digs++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(digs) << g[i][j];
            if (j != n-1) cout << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    fast_cin();
    while(cin>>n&&n) solve();
}