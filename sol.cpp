#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int px, py;
		string s;
		cin >> px >> py >> s;
		// use the concept of manhattan distance
		int up = 0;
		int down = 0;
		int right = 0;
		int left = 0;
		// count the occurrences of every direction (i.e., up, down, etc...)
		for (char ch : s) {
			if (ch == 'U') {
				up++;
			} else if (ch == 'D') {
				down++;
			} else if (ch == 'R') {
				right++;
			} else if (ch == 'L') {
				left++;
			}
		}
		// check if the Right's and Left's can accommodate the point-x (px)
		bool vertical = ((py > 0 && up >= abs(py)) || (py < 0 && down >= abs(py)));
		// check if the Up's and Down's can accommodate going to point-y (py)
		bool horizontal = ((px > 0 && right >= abs(px)) || (px < 0 && left >= abs(px)));
		// this condition checks if point-x (px) is 0
		bool extra_condition1 = (px == 0 && vertical);
		// this condition checks if point-y (py) is 0
		bool extra_condition2 = (horizontal && py == 0);
		// if one of the two previous conditions or both of them are true
		// then print "YES" and go to the next test case
		if (extra_condition1 || extra_condition2) {
			cout << "YES\n";
			continue;
		}
		// otherwise, print "YES" if the first two boolean expressions are true
		// and print "NO" if one of them is false
		cout << (horizontal && vertical ? "YES" : "NO") << '\n';
	}
	return 0;
}
