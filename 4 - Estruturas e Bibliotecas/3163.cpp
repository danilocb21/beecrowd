#include <complex>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <bitset>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

deque<string> n, s, o, l;
void choose(string cod, char p)
{
    switch (p) {
        case '1':
            o.push_back(cod);
            break;
       case '2':
            s.push_back(cod);
            break;
        case '3':
            n.push_back(cod);
            break;
        case '4':
            l.push_back(cod);
            break;
    }
}

int main()
{
    string m; char t;
    while (true) {
        cin >> m;
        if (m == "0") break;
        if (m == "-1" || m == "-2" || m == "-3" || m == "-4") t = m[1];
        else choose(m, t);
    }
    vector<string> res;
    while(!o.empty() || !n.empty() || !s.empty() || !l.empty()) {
        if (!o.empty()) {
            res.push_back(o.front()); 
            o.pop_front();
        }
        if (!n.empty()) {
            res.push_back(n.front()); 
            n.pop_front();
        }
        if (!s.empty()) {
            res.push_back(s.front()); 
            s.pop_front();
        }
        if (!l.empty()) {
            res.push_back(l.front()); 
            l.pop_front();
        }
    }
    for (int i = 0; i < (int) res.size(); i++) {
        if (i == res.size()-1) cout << res[i] << "\n";
        else cout << res[i] << " ";
    }
}