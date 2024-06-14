#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, U;
    cin >> N >> K >> U;

    vector<vector<int>> V(N);

    for(int i=0; i<N; i++) {
        vector<int> vctr;

        for(int j=0; j<K; j++) {
            int a;
            cin >> a;
            vctr.push_back(a);
        }
        V[i] = vctr;
    }

    map<int, int> nums;
    for(int i=0; i<U; i++) {
        int a;
        cin >> a;
        nums[a] = i;
    }

    //Achar o maior de cada um
    map<int, int> m;

    int menor = INT_MAX;

    for(int i=0; i<N; i++) {
        int maior = -INT_MAX;

        for(int j=0; j<K; j++)
            if(nums[V[i][j]] > maior)
                maior = nums[V[i][j]];

        m[i+1] = maior;
        if(maior < menor)
            menor = maior;
    }

    vector<int> ans;
    for(auto itr=m.begin(); itr!=m.end(); ++itr) {
        if(itr->second==menor)
            ans.push_back(itr->first);
    }

    sort(ans.begin(), ans.end());

    for(int i:ans)
        cout << i << " ";
    cout << "\n";

    return 0;
}