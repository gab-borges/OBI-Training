#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int C[13], E[13], U[13], P[13];

    for(int i=0; i<13; i++) {
        C[i] = 0;
        E[i] = 0;
        U[i] = 0;
        P[i] = 0;
    }
    
    int n = s.size() / 3;

    int rc=0, re=0, ru=0, rp=0;

    for(int i=0; i<n; i++) {
        int num = 10*(s[3*i]-'0') + (s[3*i+1]-'0') - 1;
        char naipe = s[3*i + 2];

        if(naipe == 'P') {
            P[num]++;
            rp++;
            if(P[num]>1)
                rp = -500;
        }

        else if(naipe == 'C') {
            C[num]++;
            rc++;
            if(C[num]>1)
                rc = -500;
        }
        else if(naipe == 'E') {
            E[num]++;
            re++;
            if(E[num]>1)
                re = -500;
        }
        else if(naipe == 'U') {
            U[num]++;
            ru++;
            if(U[num]>1)
                ru = -500;
        }
    }

    if(rc<0)
        cout << "erro\n";
    else
        cout << 13 - rc << "\n";
    
    if(re<0)
        cout << "erro\n";
    else
        cout << 13 - re << "\n";

    if(ru<0)
        cout << "erro\n";
    else
        cout << 13 - ru << "\n";

    if(rp<0)
        cout << "erro\n";
    else
        cout << 13 - rp << "\n";

    return 0;
}