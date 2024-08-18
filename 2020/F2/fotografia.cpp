#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int A, L;
	cin >> A >> L;

	int N;
	cin >> N;

	int areaMin = INT_MAX;
	int areaMinIdx = -1;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		if (A <= x && L <= y) {
			if (x*y - A*L < areaMin) {
				areaMin = x*y - A*L;
				areaMinIdx = i+1;
			}
		}

		else if (A <= y && L <= x) {
			if (x*y - A*L < areaMin) {
				areaMin = x*y - A*L;
				areaMinIdx = i+1;
			}
		}
	}

	cout << areaMinIdx << '\n';

	return 0;
}
