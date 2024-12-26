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
    string s; cin >> s;
    int ans = 0;
    for (auto c : s) {
        if (c == 'D') ans++;
        else ans--;
        if (ans < 0) ans += 4;
        else ans %= 4;
    }
    if (ans == 0)
        cout << 'N';
    else if (ans == 1)
        cout << 'L';
    else if (ans == 2)
        cout << 'S';
    else
        cout << 'O';
    cout << endl;
}

int main() {
    fast_cin();
    while(cin >> n && n) solve();
}