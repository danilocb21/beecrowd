#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstring>
#include <complex>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
 
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

unordered_map<char, int> digits;
int is_prime[(int)1e5+1];

void solve(string &n)
{
    reverse(n.begin(), n.end());
    int num = 0;
    for (int i = 0; i < (int)n.size(); i++) {
        num += digits[n[i]] * (pow(10,i));
    }

    bool super = false;
    if (is_prime[num]) {
        bool temp = true;
        for (char x : n) {
            if (x != '2' && x != '3' && x != '5' && x != '7') {
                temp = false;
                break;
            }
        }
        if (temp) super = true;
    }

    if (super) cout << "Super\n";
    else if (is_prime[num]) cout << "Primo\n";
    else cout << "Nada\n";
}

int main()
{
    memset(is_prime, true, sizeof is_prime);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p*p <= 1e5+1; p++) {
        for (int i = p*p; i <= 1e5+1; i+=p) {
            is_prime[i] = false;
        }
    }
    
    char c = '0';
    for (int i = 0; i <= 9; i++) {
        digits[c++] = i;
    }

    string n;
    while (cin >> n) {
        solve(n);
    }
}