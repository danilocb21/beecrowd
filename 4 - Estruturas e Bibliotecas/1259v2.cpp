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

int n;

void solve()
{   
    cin >> n;
    v32 arr(n);

    for (auto &x : arr) {
        cin >> x;
    }

    sort(all(arr), [](int a, int b){
        if (a%2==0 && b%2==0) return a < b;
        else if (a%2==1 && b%2==1) return a > b;
        return a % 2 == 0;
    });

    for (auto &x : arr) {
        cout << x << endl;
    }
}

int main()
{
    fast_cin();
    solve();
}