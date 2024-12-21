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

void solve(int n)
{
    deque<int> pilha;
    v32 descartadas;
    for (int i = n; i > 0; i--) pilha.push_back(i);

    while (pilha.size() >= 2) {
        descartadas.push_back(pilha.back());
        pilha.pop_back();
        pilha.push_front(pilha.back());
        pilha.pop_back();
    }
    cout << "Discarded cards: ";
    for (int i = 0; i < (int) descartadas.size(); i++) {
        if (i < descartadas.size()-1) cout << descartadas[i] << ", ";
        else cout << descartadas[i] << "\n";
    }
    cout << "Remaining card: " << pilha.back() << "\n";
}

int main()
{
    int n;
    while (true) {
        cin >> n;
        if (!n) break;
        solve(n);
    }
}