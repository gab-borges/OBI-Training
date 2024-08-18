#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	vector<int> A(4);

	cin >> A[0] >> A[1] >> A[2] >> A[3];

	sort (A.begin(), A.end());

	cout << abs((A[0] + A[3]) - (A[1] + A[2])) << '\n';

	return 0;
}
