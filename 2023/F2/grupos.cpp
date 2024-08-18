#include <bits/stdc++.h>
using namespace std;

#define E 1123456

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int e, m, d;	
	cin >> e >> m >> d;

	vector<vector<pair<int, int> > > graph(e+1);
	
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back({v, 1});
		graph[v].push_back({u, 1});
	}

	for (int i = 0; i < d; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back({v, 0});
		graph[v].push_back({u, 0});
	}

	ll count = 0;

	for (int k = 0; k < e / 3; k++) {
		int A[3];
		cin >> A[0] >> A[1] >> A[2];

		unordered_set<int> set;
		set.insert(A[0]);
		set.insert(A[1]);
		set.insert(A[2]);

		for (int i = 0; i < 3; i++) {
			for (auto j : graph[A[i]]) {
				if (set.find(j.first) != set.end()) {
					if (j.second == 0)
						count++;
				}

				else if (j.second == 1) {
					count++;
				}
			}
		}
	}

	cout << count /  2 << '\n';

	return 0;
}
