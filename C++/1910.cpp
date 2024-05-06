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

const int NN = 1e5+5;

ll n, m, k;
v32 dist;

void solve()
{
    dist.assign(NN, INF);
    while(k--) {
        int x;
        cin >> x;
        dist[x] = -1;
    }

    queue<int> q;
    q.push(n);
    dist[n] = 0;
    while(!q.empty()) {
        int v = q.front();
        q.pop();

        if (v-1 >= 0 && dist[v-1] != -1 && dist[v-1] == INF) {
            dist[v-1] = dist[v] + 1;
            q.push(v-1);
        }
        if (v+1 <= 1e5 && dist[v+1] != -1 && dist[v+1] == INF) {
            dist[v+1] = dist[v] + 1;
            q.push(v+1);
        }
        if (v*2 <= 1e5 && dist[v*2] != -1 && dist[v*2] == INF) {
            dist[v*2] = dist[v] + 1;
            q.push(v*2); 
        }
        if (v*3 <= 1e5 && dist[v*3] != -1 && dist[v*3] == INF) {
            dist[v*3] = dist[v] + 1;
            q.push(v*3); 
        }
        if (v%2==0 && v/2 >= 0 && dist[v/2] != -1 && dist[v/2] == INF) {
            dist[v/2] = dist[v] + 1;
            q.push(v/2);
        }
    }

    cout << ((dist[m]==-1||dist[m]==INF)?-1:dist[m]) << endl;
}

int main()
{   
    fast_cin();
    while (cin>>n>>m>>k && (n||m||k)) solve();
}