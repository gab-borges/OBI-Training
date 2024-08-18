#include <bits/stdc++.h>
using namespace std;

#define N 1123

vector<vector<int>> graph(N);
vector<bool> visited;
int L, E, S, found;

typedef long long ll;

void dfs (int node) {
	if (node == E) {
		found = 1;
		return;
	}

	visited[node] = true;

	for (auto viz : graph[node])
		if (!visited[viz])
			dfs (viz);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, q;
	cin >> n >> q;

	for (int i = 0; i < n-1; i++) {
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	while (q--) {
		cin >> L >> E >> S;		

		found = 0;

		visited.assign(n+1, false);

		visited[S] = true;

		dfs (L);

		if (found)
			cout << "SIM\n";
		else
			cout << "NAO\n";
	}

	return 0;
}

