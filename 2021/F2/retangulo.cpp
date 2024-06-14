#include <iostream>
#include <vector>
using namespace std;

void advance(vector<int>& L) {
    int aux = L[0];
    L.erase(L.begin());
    L.push_back(aux);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> L;
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        L.push_back(a);
    }

    bool finished = false;
    int inicial = L[0];

    // ! ! ! primeira iteração fora ! ! !
    advance(L);

    while(!finished && (L[0]!=inicial)) {
        //urgente: erase() é O(N)... e 4 <= N <= 10^5. Uma opção é colocar uma variável apontando para o ínicio, fazer ele incrementar de um em um e ir adicionando
        //com push_back (O(1)) no final. Desse jeito, fica ótimo. Mas depois faço isso.

        

        advance(L);
    }

    return 0;
}