#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll n;
	cin >> n;

	if (n % 2 == 0) {
		ll res = (n - n/2) * (n - n/2);
		cout << res << '\n';
	}

	else {
		ll res = (n - n/2 - 1)*(n - n/2); 
		cout << res << '\n';
	}

	return 0;
}

