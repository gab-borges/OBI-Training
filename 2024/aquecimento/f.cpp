#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll p, x;
	cin >> p >> x;

	ll i = 2;
	while (1) {
		if (i % x)
			break;

		i++;
	}

	cout << i * p << '\n';

	return 0;
}

