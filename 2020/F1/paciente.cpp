#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, C;
    cin >> N >> C;

    vector<int> v(N+1, -1);

    for(int i=0; i<C; i++) {
        int a;
        cin >> a;
        int idx=a;
        if(v[a]>0)
            idx = v[a];
        else
            v[a] = 0;

        int t;
        cin >> t;
        for(int j=0; j<t; j++) {
            int b;
            cin >> b;
            v[b] = idx;
        }
    }

    for(int i=1; i<=N; i++)
        if(v[i]==0)
            cout << i << "\n";

    return 0;
}