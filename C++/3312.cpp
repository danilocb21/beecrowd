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

bool isPrime(int n) {
    if (n <= 2 || n%2==0)
        return n == 2;
    for (int i = 3; i*i <= n; i+=2) {
        if (n%i==0) return false;
    }
    return true;
}

string numToStr(int x) {
    string num;
    while (x > 0) {
        int digit = x%10;
        x /= 10;
        num += digit+'0';
    }
    return num;
}

void multiply_bigint(string& num, int x) {
    int n = sz(num);
    vector<int> v(n + 3);
    for (int i = 0; i < n; i++) {
        int digit = num[i]-'0';
        v[i] += digit*x;
    }
    num.resize(sz(v));
    for (int s, i = 0, t = 0; i < sz(v); i++) {
        s = t + v[i];
        v[i] = s % 10;
        t = s / 10;
        num[i] = v[i]+'0';
    }
    while (sz(num) > 1 && num.back() == '0') {
        num.pop_back();
    }
}

void solve()
{
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        if (isPrime(x)) {
            string fact = numToStr(x);
            int k = x;
            while (k>2) multiply_bigint(fact, --k);
            reverse(all(fact));
            cout << x << "! = " << fact << endl;
        }
    }   
}

int main()
{
    fast_cin();
    solve();
}