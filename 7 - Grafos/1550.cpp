#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
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
using PII = pair<ll, ll>;
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

ll pw(ll a, ll b)
{
    if (b == 0)
        return 1;

    if (b % 2) {
        ll t = pw(a, (b-1)/2);
        return (1ll * a * t * t);
    }
    else {
        ll t = pw(a, b/2);
        return (1ll * t * t);
    }
}

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(arr, n)
#endif

const int N = 1e5+1;

int inv(int n)
{
    int x = 0;
    int pow = 0;
    v32 digs;
    while (n > 0) {
        digs.pb(n%10);
        n /= 10;
    }
    for (int i = sz(digs)-1; i >= 0; i--) {
        x += digs[i] * pw(10, pow++);
    }
    return x;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    v32 dist(N, INF);
    dist[n] = 0;
    queue<int> q;
    q.push(n);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        if (v == k)
            break;
        if (v+1 < N-1 && dist[v+1] == INF) {
            dist[v+1] = dist[v] + 1;
            q.push(v+1);
        }
        int x = inv(v);
        if (x > 0 && x < N-1 && dist[x] == INF) {
            dist[x] = dist[v] + 1;
            q.push(x);
        }
    }

    cout << dist[k] << endl;
}

int main()
{
    fast_cin();
    int t; cin >> t;
    while(t--) solve();
}