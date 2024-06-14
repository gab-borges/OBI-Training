#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    cin >> T >> N;

    vector<int> X;
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        X.push_back(a);
    }

    sort(X.begin(), X.end());

    double fa=0, fd;
    double dist, menor = INT_MAX;

    for(int i=0; i<N-1; i++) {
        fd = (X[i]+X[i+1]) / 2.0;
        dist = fd - fa;

        if(dist < menor)
            menor = dist;

        fa = fd;
    }
    fd = T;

    dist = fd - fa;
    if(dist < menor)
        menor = dist;

    cout << fixed << setprecision(2) << menor << "\n";

    return 0;
}