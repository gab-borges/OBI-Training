#include <bits/stdc++.h>
using namespace std;

#define N 112345

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, m;
	cin >> n >> m;

	int A[N];
	vector<int> naipes(m+1, 0);

	int tamMax = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> A[i];

		naipes[A[i]]++;
				
		tamMax = max(tamMax, naipes[A[i]]);
	}

	cout << n - tamMax << '\n';

	return 0;
}
