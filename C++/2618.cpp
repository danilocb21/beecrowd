#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

void divide_by_2(string& a){
    int add = 0;
    for (int i = sz(a)-1; i >= 0; i--) {
        int num = a[i]-'0';
        int digit = (num >> 1) + add;
        add = ((num & 1) * 5);
        a[i] = digit+'0';
    }
    while(sz(a) > 1 && a.back() == '0')
        a.pop_back();
}

const int MOD = 86400;
void solve()
{
    string n;
    cin>>n;
    reverse(all(n));
    ll res = 1, x = 2;
    while (n != "0") {
        int first = n[0]-'0';
        if (first & 1)
            res = (res*x) % MOD;
        divide_by_2(n);
        x = (x*x) % MOD;
    }
    res--;
    int h = res / 3600;
    res %= 3600;
    int m = res / 60;
    res %= 60;
    printf("%02d:%02d:%02d\n",h,m,res);
}

int main()
{
    fast_cin();
    solve();
}