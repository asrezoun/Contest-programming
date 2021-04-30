#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <numeric>
#include <set>
#include <queue>
using namespace std;
typedef long long ll;

void solve() {
	int n, m; cin >> n >> m;
	vector<string> v(n);
	for (auto &i : v)cin >> i;
	string cur = v[0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 26; j++) {
			cur[i] = char('a' + j);
			bool ok = 1;
			for (int k = 1; k < n; k++) {
				int cnt = 0;
				string yay = v[k];
				for (int z = 0; z < m; z++)cnt += (yay[z] != cur[z]);
				if (cnt > 1)ok = 0;
			}
			if (ok) {cout << cur << endl; return ;}
			cur = v[0];
		}
	}
	cout << -1 << endl; return ;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();

	}


}
