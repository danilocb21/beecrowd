#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
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

int search(vector<v32> &bloco, int x, int y)
{
  if (x == 4 && y == 4)
    return true;
  
  int movX[] = {-1, 1};
  int movY[] = {-1, 1};

  for (int i = 0; i < 2; i++) {
    if (x + movX[i] < 0 || x + movX[i] >= 5)
      continue;
    if (bloco[x + movX[i]][y] == 1)
      continue;
    
    bloco[x][y] = 1;
    if (search(bloco, x + movX[i], y))
      return true;
    bloco[x][y] = 0;
  }
  for (int i = 0; i < 2; i++) {
    if (y + movY[i] < 0 || y + movY[i] >= 5)
      continue;
    if (bloco[x][y + movY[i]] == 1)
      continue;
    
    bloco[x][y] = 1;
    if (search(bloco, x, y + movY[i]))
      return true;
    bloco[x][y] = 0;
  }
  
  return false;
}

void solve()
{
  vector<v32> bloco(5, v32(5, 0));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> bloco[i][j];
    }
  }
  if (search(bloco, 0, 0)) {
    cout << "COPS\n";
  } else {
    cout << "ROBBERS\n";
  }
}

int main()
{
  int n; cin >> n;
  while (n--) {
    solve();
  }
}