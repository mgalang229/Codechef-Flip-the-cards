#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	cout << min(x, n - x) << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}
