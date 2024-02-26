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
double aa;

void solve()
{   
    v64 arr(n);
    ll sum=0;
    ll mx=-1;
    for (auto& x : arr) {
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }
    if (sum == aa) {
        cout << ":D\n";
        return;
    }
    if (sum < aa) {
        cout << "-.-\n";
        return;
    }
    double mid, a=0, b=mx;
    while (abs(a-b) > 1e-6) {
        mid = (a+b)/2;
        double na = 0;
        for (auto& x : arr) {
            if (mid <= x) na += x - mid;
        }
        if (abs(na-aa) < 1e-6)
            break;
        if (na < aa)
            b = mid;
        if (na > aa)
            a = mid;
    }
    cout << fixed << setprecision(4) << mid << endl;
}

int main()
{
    fast_cin();
    while (cin >> n >> aa && (n || aa)) solve();
}