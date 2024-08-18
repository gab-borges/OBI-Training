#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	vector<int> A(n);

	for(int i = 0; i < n; i++)
		cin >> A[i];
	
	unordered_map<int, int> map;
	
	int l = 0;
	int tamMax = INT_MIN;
	for (int r = 0; r < n; r++) {
		if (map.find(A[r]) != map.end()) {
			if (map[A[r]] >= l) {
				l = map[A[r]] + 1;
			}
		}

		tamMax = max(tamMax, r - l + 1);
		map[A[r]] = r;
	}

	cout << tamMax << '\n';

	return 0;
}
