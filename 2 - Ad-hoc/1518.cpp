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
using pi = pair<int, int>;
using pl = pair<ll, ll>;
#define INF 0x3fffffff
#define LLINF 0x3fffffffffffffff
#define PI 3.14159265358979323846
#define endl '\n'
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define pb push_back
#define fast_cin()               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
template<class T> using ordered_set = 
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

struct Point {
    int x,y;
    char c;
    bool operator<(const Point& a) const {
        if (x != a.x) return x < a.x;
        return y < a.y;
    }
};

int x,y;
void solve() {
    vector<Point> v(3);
    for (int i = 0; i < 3; i++) {
        int a,b;
        char c;
        cin>>a>>b>>c;
        v[i] = {a,b,c};
    }
    sort(all(v));
    int ans = INF;
    do {
        int a = x, b = y;
        int cur = 0;
        for (int i = 0; i < 3; i++) {
            for (int add = 1; add < 1e5; add++) {
                int nx = (v[i].c == 'D' ? v[i].x+cur+add : v[i].x);
                int ny = (v[i].c == 'C' ? v[i].y+cur+add : v[i].y);

                int dx = abs(nx-a);
                int dy = abs(ny-b);
                int t_need = min(dx,dy) + (abs(dx-dy)+1)/2;
                if (t_need <= add) {
                    cur += add;
                    a = nx;
                    b = ny;
                    break;
                }
            }
            
        }
        ans = min(ans,cur);
    } while (next_permutation(all(v)));
    cout << ans << endl;
}

int main() {
    fast_cin();
    while (cin>>x>>y && (x || y)) solve();
}