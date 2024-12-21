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


unordered_map<ull, char> algs;

void nums()
{
  // 48 = 0 -- ASCII
  // 65 = A -- ASCII
  char t1 = 48, t2 = 65;
  for (int i = 0; i < 10; i++) {
    algs[i] = t1++;
  }
  for (int i = 10; i < 32; i++) {
    algs[i] = t2++;
  }
}

void solve(ull n)
{
  ull q=n, R;
  string res;

  while (q >= 1) {
    q = n/32;
    R = n%32;
    n = q;
    res += algs[R];
  }
  reverse(res.begin(), res.end());
  cout << res << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  nums();
  ull n;
  while (true) {
    cin >> n;
    if (n == 0) {
      cout << "0\n";
      break;
    }
    solve(n);
  }
}