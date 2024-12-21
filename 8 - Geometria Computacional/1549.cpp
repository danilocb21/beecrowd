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

const double pi = 3.14159;

int n;
double l, ba, bb, h;

void solve()
{   
    cin >> n >> l;
    cin >> ba >> bb >> h;
    
    double q = l/n, a = 0, b = h, pivo;
    double bab = bb-ba;
    double hipo = sqrt(bab*bab + h*h);
    while (abs(a-b) > 1e-5) {
        pivo = (a+b)/2;
        double bx;
        if (ba == bb)
            bx = bb;
        else {
            double lh = pivo*hipo/h;
            double k = sqrt(lh*lh-pivo*pivo);
            bx = ba + k;
        }
        double nv = pivo/3*pi * (bx*bx + bx*ba + ba*ba);
        if (abs(nv-q) < 1e-5)
            break;
        if (nv < q)
            a = pivo;
        if (nv > q)
            b = pivo;
    }
    cout << fixed << setprecision(2) << pivo << endl;
}

int main()
{
    fast_cin();
    int t; cin >> t;
    while (t--) solve();
}