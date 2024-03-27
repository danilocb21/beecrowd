#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
const int N=1'000'005;
#define INF 0x3fffffff
const int mod=(1e9)+7;
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

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(arr, n)
#endif

void solve()
{
    ll n; cin >> n;
    v32 arr(n);
    for (auto& x : arr) {
        cin >> x;
    }
    v32 arrows((int)1e6);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (arrows[arr[i]] > 0) {
            arrows[arr[i]]--;
            arrows[arr[i]-1]++;
        }
        else {
            arrows[arr[i]-1]++;
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast_cin();
    solve();
}