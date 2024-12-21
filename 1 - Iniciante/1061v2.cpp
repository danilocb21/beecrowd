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

void solve()
{
    int d1, d2;
    string s;
    int h1, m1, s1, h2, m2, s2;
    char c;

    cin >> s >> d1;
    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> s >> d2;
    cin >> h2 >> c >> m2 >> c >> s2;

    int d3=d2-d1, h3=h2-h1, m3=m2-m1, s3=s2-s1;
    if (s3 < 0) {
        s3 += 60;
        m3--;
    }
    if (m3 < 0) {
        m3 += 60;
        h3--;
    }
    if (h3 < 0) {
        h3 += 24;
        d3--;
    }

    cout << d3 << " dia(s)\n";
    cout << h3 << " hora(s)\n";
    cout << m3 << " minuto(s)\n";
    cout << s3 << " segundo(s)\n";
}

int main()
{
    fast_cin();
    solve();
}