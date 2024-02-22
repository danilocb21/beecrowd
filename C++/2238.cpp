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


void solve()
{   
    ull a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b || c == d || c%a!=0) {
        cout << -1 << endl;
    }
    else {
        for (ull i = a; i <= c+1; i += a) {
            if (i%b!=0 && d%i!=0 && c%i==0) {
                cout << i << endl;
                break;
            }
        }
    }
    
}

int main()
{
    fast_cin();
    solve();
}