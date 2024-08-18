#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	int A[110][110];

	if (n == 1) {
		cout << "1\n";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j <= n - 1 - i; j++){
			A[i][j] = i+1;
			A[j][n-1-i] = i+1;
			A[n-1-i][j] = i+1;
			A[j][i] = i+1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << A[i][j] << " ";
		cout << '\n';
	}

	return 0;
}
