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
    int n; cin >> n;
    double price = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
        double f; cin >> f;
        price += f;

        string s;
        getline(cin>>ws, s);

        string t;
        int cont = 0;

        for (auto c : s) {
            if (c == ' ') {
                cont++;
                t = "";
            } else {
                t += c;
            }
        }
        if (sz(t)) cont++;
        total += cont;

        printf("day %d: %d kg\n", i+1, cont);
    }
    printf("%.2lf kg by day\n", (double) total/n);
    printf("R$ %.2lf by day\n", (double) price/n);
}

int main() {
    fast_cin();
    solve();
}