#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef unsigned long long ull;
using i64 = long long;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
const int N=1000005;
#define INF 0x3fffffff
const int mod=1e9+7;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
using PII = pair<ll, ll>;
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define pb push_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(arr, n)
#endif

int n, m, z=1;

void solve()
{   
    v32 arr(n);
    cout << "CASE# " << z++ << ":\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    for (int i =0; i < m; i++) {
        int x; cin >> x;
        bool isX = binary_search(all(arr), x);
        if (isX) {
            auto it = lower_bound(all(arr), x);
            cout << x << " found at " << it-arr.begin()+1 << endl;
        }
        else 
            cout << x << " not found\n";
    }
}

int main()
{
    fast_cin();
    while (cin >> n >> m && (n || m)) solve();
}