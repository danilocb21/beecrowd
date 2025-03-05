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
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define INF 0x3fffffff
#define LLINF 0x3fffffffffffffff
#define PI 3.14159265358979323846
#define endl '\n'
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

const int N = 5001;
int n, m;
vector<string> g(N);
vector vis(N, vector<bool>(N));
vector res(N, vector<bool>(N));

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

bool isOk(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y) {
    stack<pii> q;
    q.push({x,y});

    while (!q.empty()) {
        auto [cx, cy] = q.top();
        q.pop();

        vis[cx][cy] = true;
        if (cx == 0 || cx == n-1 || cy == 0 || cy == m-1)
            res[cx][cy] = true;

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
    
            if (!isOk(nx, ny)) continue;
            if (g[nx][ny] == '.')
                res[cx][cy] = true;
            else if (g[nx][ny] == '#' && !vis[nx][ny])
                q.push({nx,ny});
        }
    }

}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> g[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '#' && !vis[i][j])
                dfs(i,j);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (res[i][j] == true)
                ans++;
                
    cout << ans << endl;
}

int main() {
    fast_cin();
    solve();
}