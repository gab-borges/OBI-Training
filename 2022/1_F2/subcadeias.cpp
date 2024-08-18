#include <bits/stdc++.h>
using namespace std;

bool ehPalindromo (string s, int in, int fim) {
	while (in < fim)
		if (s[in++] != s[fim--])
			return false;

	return true;
}

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int maior = 1;

	for (int inicio = 0; inicio < n; inicio++)
		for (int fim = inicio; fim < n; fim++)
			if (ehPalindromo(s, inicio, fim))
				maior = max(fim-inicio+1, maior);

	cout << maior << endl;

	return 0;
}
