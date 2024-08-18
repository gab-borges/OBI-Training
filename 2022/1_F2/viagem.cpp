#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
int dest, custoMax, chegou = 0;
int tempoCaminho = 0, preçoCaminho = 0;
int tempoMinimo = INT_MAX;

void dfs (vector<vector<vector<int> > >& graph, int node) {
	if (node == dest) {
		if (preçoCaminho <= custoMax) {
			chegou = 1;
			tempoMinimo = min(tempoMinimo, tempoCaminho);
		}

		return;
	}

	visited[node] = true;

	for (auto viz : graph[node]) {
		if (!visited[viz[0]]) {
			tempoCaminho += viz[1];
			preçoCaminho += viz[2];

			cout << node << " -> " << viz[0] << endl;
			dfs (graph, viz[0]);

			tempoCaminho -= viz[1];
			preçoCaminho -= viz[2];
		}
	}
}

int main() {
	int n, e;

	cin >> custoMax >> n >> e;

	vector<vector<vector<int> > > graph(n+1);

	visited.assign(n+1, false);

	while (e--) {
		int a, b, t, p;

		cin >> a >> b >> t >> p;
		
		graph[a].push_back({b, t, p});
		graph[b].push_back({a, t, p});
	}

	int x;
	cin >> x >> dest;
	
	dfs (graph, x);
	cout << endl;
	if (!chegou)
		cout << -1 << '\n';

	else
		cout << tempoMinimo << '\n';

	return 0;
}
