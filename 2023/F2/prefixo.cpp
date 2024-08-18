#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	string p;
	cin >> p;

	int m;
	cin >> m;

	string s;
	cin >> s;

	int menor = min(n, m);

	for (int i = 0; i < menor; i++) {
		if (p[i] != s[i]) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << menor << '\n';

	return 0;
}
