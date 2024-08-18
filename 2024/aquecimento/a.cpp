#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, x;
	cin >> n >> x;

	vector<int> A(n), B(n);

	vector<pair<int, int>> paired;

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = 0; i < n; i++) {
		cin >> B[i];
		paired.push_back({A[i], B[i]});
	}

	sort (paired.begin(), paired.end());

	ll count = 0, exp = 0;
	int ok = 1;

	for (int i = 0; i < n; i++) {
		count++;
		exp += paired[i].first;

		if (exp > x) {
			count--;
			break;
		}

		if (paired[i].second == 1) {
			if (ok)
				ok = 0;

			else {
				count--;
				exp -= paired[i].first;
			}
		}
	}

	cout << count << '\n';

	return 0;
}

