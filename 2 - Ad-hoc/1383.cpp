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

const int n = 9;
int zz;
vector<v32> g(n, v32(n));

bool validSudoku() {
    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = 0; j < n; j++) {
            int x = g[i][j];
            if (s.find(x) != s.end())
                return false;
            s.insert(x);
        }
        for (int j = 1; j <= 9; j++) {
            if (s.find(j) == s.end())
                return false;
        }
    }
    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = 0; j < n; j++) {
            int x = g[j][i];
            if (s.find(x) != s.end())
                return false;
            s.insert(x);
        }
        for (int j = 1; j <= 9; j++) {
            if (s.find(j) == s.end())
                return false;
        }
    }
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {        
            set<int> s;
            for (int i = k*3; i < (k*3)+3; i++) {
                for (int j = l*3; j < (l*3)+3; j++) {
                    int x = g[i][j];
                    if (s.find(x) != s.end())
                        return false;
                    s.insert(x);
                }
            }
            for (int j = 1; j <= 9; j++) {
                if (s.find(j) == s.end())
                    return false;
            }
        }
    }
    return true;
}

void solve() {
    cout << "Instancia " << zz++ << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
            cin >> g[i][j];
    cout << ((validSudoku())?"SIM":"NAO") << endl << endl;
}

int main() {
    fast_cin();
    zz = 1;
    int t; cin >> t;
    while(t--) solve();
}