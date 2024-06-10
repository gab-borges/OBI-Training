#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int *L = new int[n];
    for(int i=0; i<n; ++i)
        cin >> L[i];

    int com=0, fim=n-1;
    ll cont = 0;

    while(com<fim) {
        if(L[com]==L[fim]) {
            ++com;
            --fim;
        }

        else if(L[com] < L[fim]) {
            L[com+1] += L[com];
            ++com;
            ++cont;
        }

        else {
            L[fim-1] += L[fim];
            --fim;
            ++cont;
        }
    }

    cout << cont << "\n";

    return 0;
}