#include <bits/stdc++.h>
using namespace std;

int S, T, P;
int ans = 0;
vector<int> alturas;
vector<vector<int>> grafo;
vector<int> dp;

int dfs(int node) {
	if (dp[node] != -1)
		return dp[node];

	int max_path = 0;

	for (int viz : grafo[node])
		max_path = max(max_path, 1 + dfs(viz));

	return dp[node] = max_path;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	cin >> S >> T >> P;

	alturas.resize(S+1);

	for (int i = 1; i <= S; i++)
		cin >> alturas[i];

	grafo.resize(S+1);

	for (int i = 0; i < T; i++) {
		int u, v;
		cin >> u >> v;
		
		if (alturas[u] > alturas[v])		
			grafo[u].push_back(v);

		else if (alturas[v] > alturas[u])
			grafo[v].push_back(u);
	}

	dp.resize(S+1, -1);

	cout << dfs (P) << '\n';

	return 0;
}
