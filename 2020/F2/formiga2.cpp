#include <bits/stdc++.h>
using namespace std;

int s, t, p;
vector<vector<int>> graph(212);
vector<int> dp(212, -1);

int dfs (int node) {
	if (dp[node] != -1)
		return dp[node];

	int maxPath = 0;

	for (auto viz : graph[node]) {
		maxPath = max(maxPath, dfs(viz) + 1);
	}

	return dp[node] = maxPath;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	cin >> s >> t >> p;

	vector<int> alturas(s+1);

	for (int i = 1; i <= s; i++)
		cin >> alturas[i];

	for (int i = 0; i < t; i++) {
		int u, v;
		cin >> u >> v;
	
		if (alturas[u] > alturas[v])
			graph[u].push_back(v);

		else if (alturas[v] > alturas[u])
			graph[v].push_back(u);
	}

	cout << dfs (p) << '\n';

	return 0;
}
