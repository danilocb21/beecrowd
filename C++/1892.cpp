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

ll mergeinv(vector<string>& arr, int l, int mid, int r)
{
    vector<string> temp(r-l+1);
    int i = l, j = mid, k = 0;
    ll inv = 0;

    while (i <= mid-1 && j <= r) {
        if (arr[i] > arr[j]) {
            inv += mid-i;
            temp[k++] = arr[j++];
        }
        else
            temp[k++] = arr[i++];
    }
    while (i <= mid-1)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    for (i = l, k = 0; i <= r; i++, k++)
        arr[i] = temp[k];
    
    return inv;
}

ll inver(vector<string>& arr, int l, int r)
{
    if (l == r)
        return 0;

    int mid = l+(r-l)/2;
    ll inv = 0;
    inv += inver(arr, l, mid);
    inv += inver(arr, mid+1, r);
    inv += mergeinv(arr, l, mid+1, r);

    return inv;
}

void solve()
{   
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << inver(arr, 0, n-1) << endl;
}

int main()
{
    fast_cin();
    while (cin >> n) solve();
}