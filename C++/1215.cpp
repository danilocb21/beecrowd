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

char alpha(char c)
{
    if ((int) c < 65 || ((int) c > 90 && (int) c < 97) || (int) c > 122) return ' ';
    else return c;
}

set<string> palavras;
void solve(string &s) 
{
    string r;
    for (int i = 0; i < (int) s.size(); i++) {
        if (alpha(s[i]) == ' ') {
          if (!r.empty()) {
              palavras.emplace(r);
              r.clear();
          }
        }
        else r += (char) tolower(s[i]);
    }
    if (!r.empty()) palavras.emplace(r);
}

void display(set<string> s)
{
    set<string>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << "\n";
    }
}

int main()
{
    fast_cin();
    string s;
    while (cin >> s) {
        if (!s.empty()) {
          solve(s);
        }
    }
    display(palavras);
}