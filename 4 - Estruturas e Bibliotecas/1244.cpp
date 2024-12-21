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

bool comp(string a, string b) {
    return a.size() > b.size();
}
void insertionSort(vector<string> &V) {
    int n = V.size();

    for (int i = 0; i < n; ++i)
    {
        int j = i, k = j - 1;

        while (k > -1 && comp(V[j], V[k]))
        {
            swap(V[k], V[j]);
            --j, --k;
        }
    }
}
void solved(string s) {
    vector<string> v;
    string t;
    for (auto x : s) {
        if (x == ' ') {
            v.push_back(t);
            t = "";
        }
        else t += x;
    }
    v.push_back(t); 
    insertionSort(v);
    for (int i = 0; i < (int)v.size();i++) {
        if (i == (int)v.size()-1) cout << v[i] << "\n";
        else cout << v[i] << " ";
    }
}

signed main() {
    int n; cin >> n;
    cin.ignore();
    while (n--) {
        string s; getline(cin, s);
        solved(s);
    }
}