#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
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
#define pb push_back
#define fast_cin()                    \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
template<class T> using ordered_set = 
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

double str_to_num(string &s) {
    double num = 0;
    ll pw = 1;
    for (int i = 0; i < sz(s); i++) {
        int k = s[i]-'0';
        num += k * pw;
        pw *= 10;
    }
    return num;
}

double str_to_dec(string &s) {
    double num = 0;
    ll pw = 10;
    for (int i = 0; i < sz(s); i++) {
        int k = s[i]-'0';
        num += (double) k/pw;
        pw *= 10;
    }
    return num;
}

void solve() {
    string a,b;
    cin >> a >> b;

    int ct = 0;
    string cpf, num1, num2, dec1, dec2;
    bool pt1 = false, pt2 = false;
    for (auto c : a) {
        int k = c-'0';
        if (ct < 11 && k >= 0 && k <= 9) {
            ct++;
            cpf += c;
        } else if (k >= 0 && k <= 9) {
            if (!pt1)
                num1 += c;
            else if (pt1 && sz(dec1) < 2) 
                dec1 += c;
            else 
                break;
        } else if (c == '.')
            pt1 = true;
    }
    for (auto c : b) {
        int k = c-'0';
        if (k >= 0 && k <= 9) {
            if (!pt2)
                num2 += c;
            else if (pt2 && sz(dec2) < 2)
                dec2 += c;
            else 
                break;
        } else if (c == '.')
            pt2 = true;
    }

    double n1 = 0, n2 = 0;
    reverse(all(num1));
    reverse(all(num2));

    n1 += str_to_num(num1);
    n1 += str_to_dec(dec1);

    n2 += str_to_num(num2);
    n2 += str_to_dec(dec2);

    cout << "cpf " << cpf << endl;
    cout << fixed << setprecision(2) << n1+n2 << endl;
}

int main() {
    fast_cin();
    solve();
}