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

string s;
void solve() {
    string l1 = "`1234567890-=",
    l2 = "QWERTYUIOP[]\\",
    l3 = "ASDFGHJKL;'",
    l4 = "ZXCVBNM,./";

    string ans;
    for (auto c : s) {
        if (c == ' ') {
            ans += c;
            continue;
        }

        auto k1 = l1.find(c);
        auto k2 = l2.find(c);
        auto k3 = l3.find(c);
        auto k4 = l4.find(c);

        if (k1 != string::npos) {
            if (k1 == 0) {
                ans += l1[0];
                continue;
            }
            ans += l1[k1-1];
        }
        if (k2 != string::npos) {
            if (k2 == 0) {
                ans += l2[0];
                continue;
            }
            ans += l2[k2-1];
        }
        if (k3 != string::npos) {
            if (k3 == 0) {
                ans += l3[0];
                continue;
            }
            ans += l3[k3-1];
        }
        if (k4 != string::npos) {
            if (k4 == 0) {
                ans += l4[0];
                continue;
            }
            ans += l4[k4-1];
        }
    }

    cout << ans << endl;
}

int main() {
    fast_cin();
    while(getline(cin, s)) solve();
}