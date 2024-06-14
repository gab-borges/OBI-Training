#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, C;
    cin >> N >> M >> C;

    map<int, int> map;

    for(int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;

        if(map.find(b)==map.end()) {
            map[b] = a;
        }
    }

    int cont=0, atual=-1;

    if(map.find(C)!=map.end()) {
        atual = map[C];
        map[C] = -5;
        cont++;
    }

    while(map.find(atual)!=map.end() && map[atual]!=-5) {
        int ant = atual;
        atual = map[atual];
        map[ant] = -5;
        cont++;
    }

    if(map.find(atual)==map.end())
        cout << cont << "\n";
    else
        cout << -1 << "\n";

    return 0;
}