#include <bits/stdc++.h>
using namespace std;

int completed(map<string, int>& mp) {
    for(auto itr=mp.begin(); itr!=mp.end(); ++itr) {
        if(itr->second == INT_MIN)
            return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Input
    int L, C;
    cin >> L >> C;

    vector<vector<string>> M;
    vector<int> somaLinha;
    vector<int> somaColuna;

    for(int i=0; i<L; i++) {
        vector<string> m;
        for(int j=0; j<C; j++) {
            string s;
            cin >> s;
            m.push_back(s);
        }
        M.push_back(m);

        int n;
        cin >> n;
        somaLinha.push_back(n);
    }

    for(int i=0; i<C; i++) {
        int n;
        cin >> n;
        somaColuna.push_back(n);
    }

    //Loop Principal
    map<string, int> var;
    var[M[0][0]] = INT_MIN; //pra inicializar o loop

    while(!completed(var)) {

        //Passada Horizontal
        for(int i=0; i<L; i++) {
            map<string, int> vistos;
            int cont = 0;

            int j;
            for(j=0; j<C; j++) {
                
                //Se não tiver registro, fazer o registro inicial com INT_MIN
                if(var.find(M[i][j]) == var.end()) {
                    var[M[i][j]] = INT_MIN;
                }

                //Se for INT_MIN e não tiver contado, incrementa cont
                if(var[M[i][j]]==INT_MIN && vistos.find(M[i][j]) == vistos.end()) {
                    cont++;
                    vistos.insert({M[i][j], 1});
                }
            }

            // Se for uma linha decifrável, i.e. com apenas uma variável desconhecida
            if(cont == 1) {
                int quant=0, soma=0;
                string nova;

                for(int j=0; j<C; j++) {
                    if(var[M[i][j]]==INT_MIN) {
                        quant++;
                        nova = M[i][j];
                    }

                    else
                        soma += var[M[i][j]];
                }

                var[nova] = (somaLinha[i] - soma) / quant;
            }
        }

        //Passada Vertical
        for(int i=0; i<C; i++) {
            map<string, int> vistos;
            int cont = 0;

            int j;
            for(j=0; j<L; j++) {

                //Se não tiver registro, fazer o registro inicial com INT_MIN
                if(var.find(M[j][i]) == var.end()) {
                    var[M[j][i]] = INT_MIN;
                }

                //Se for INT_MIN e não tiver contado, incrementa cont
                if(var[M[j][i]]==INT_MIN && vistos.find(M[j][i])==vistos.end()) {
                    cont++;
                    vistos[M[j][i]] = 1;
                }
            }

            // Se for uma coluna decifrável, i.e. com apenas uma variável desconhecida
            if(cont == 1) {
                int quant=0, soma=0;
                string nova;

                for(int j=0; j<L; j++) {
                    if(var[M[j][i]]==INT_MIN) {
                        quant++;
                        nova = M[j][i];
                    }

                    else
                        soma += var[M[j][i]];
                }

                var[nova] = (somaColuna[i] - soma) / quant;
            }
        }
    }

    //Output
    for(auto itr=var.begin(); itr!=var.end(); ++itr)
        cout << itr->first << " " << itr->second << "\n";

    return 0;
}

