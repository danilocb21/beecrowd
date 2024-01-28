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

int primes[(int)1e6+1];

void generatePrimes()
{
  memset(primes, 1, sizeof primes);
  primes[0] = primes[1] = 0;
  for (int i = 2; i * i <= (int)1e6+1; i++) {
    if (primes[i]) {
      for (int j = i*i; j <= (int)1e6+1; j+=i) {
        primes[j] = 0;
      }
    }
  }
}

int main()
{
  generatePrimes();
  int n; cin >> n;
  int cont=0, velo=0;
  const int dist = 6e7; // 60M km
  
  while(cont < 10) {
    if (primes[n]) {
      velo += n;
      cont++;
    }
    n++;
  }

  int horas = dist/velo;
  int dias = horas/24;
  printf("%d km/h\n", velo);
  printf("%d h / %d d\n", horas, dias);
}