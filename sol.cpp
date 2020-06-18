#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	int l = 0, r = 0;
	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == '1') {
			l = i;
			break;
		}
	}
	for (int i = l; i < (int)s.size(); i++) {
		if (s[i] == '1') {
			r = i;
		}
	}
	int cnt = 0;
	for (int i = l; i < r; i++) {
		if (s[i] == '0') cnt++;
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
