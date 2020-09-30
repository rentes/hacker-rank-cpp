#include<bits/stdc++.h>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	stack<long long int> s;
	int n; cin >> n;
	int z = n;

	while (n--) {

		int a; cin >> a;
		long long int b;

		if (a == 1) {
			cin >> b;
			if (s.empty()) {
				s.push(b);
			} else {
				s.push(max(s.top(), b));
			}
		} else if (a == 2) {
			if (!s.empty()) {
				s.pop();
			}

		} else {
			cout << s.top() << '\n';
		}
	}

}
