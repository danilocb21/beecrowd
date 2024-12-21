#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define sz(x) (ll)(x).size()

void solve() {
	string s;
	getline(cin, s);
	
	string ans, temp;
	for (auto c : s) {
		if (c == ' ' && sz(temp)) {
			ans += temp[0];
			temp = "";
		} else if (c != ' ') {
			temp += c;
		}
	}
	if (sz(temp) != 0) {
		for (auto c : temp) {
			if (c != ' ') {
				ans += c;
				break;
			}
		}
	}
	
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	cin.ignore();
	while (t--) solve();
}