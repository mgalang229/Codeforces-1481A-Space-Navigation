#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		string s;
		cin >> x >> y >> s;
		int u = 0;
		int d = 0;
		int l = 0;
		int r = 0;
		for (int i = 0; i < (int) s.length(); i++) {
			if (s[i] == 'U') {
				u++;
			} else if (s[i] == 'R') {
				r++;
			} else if (s[i] == 'D') {
				d++;
			} else {
				l++;
			}
		}
		if (x > 0 && r >= x) {
			x = 0;
		}
		if (x < 0 && l >= -x) {
			x = 0;
		}
		if (y > 0 && u >= y) {
			y = 0;
		}
		if (y < 0 && d >= -y) {
			y = 0;
		}
		cout << ((!x && !y) ? "YES" : "NO") << '\n';
	}
	return 0;
}
