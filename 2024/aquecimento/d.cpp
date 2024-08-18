#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll n, d;
	cin >> n >> d;

	if (d % 2)
		cout << n << '\n';

	else {
		cout << n - n/(d+1) << '\n';
	}

	return 0;
}

