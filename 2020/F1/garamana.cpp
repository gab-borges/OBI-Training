#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string P, A;
    cin >> P >> A;

    vector<int> letras1('z'-'a'+1), letras2('z'-'a'+1);

    for(int i=0; i<P.size(); i++)
        letras1[P[i]-'a']++;

    for(int i=0; i<A.size(); i++)
        if(A[i]!='*')
            letras2[A[i]-'a']++;

    int res = 1;
    for(int i=0; i<'z'-'a'; i++)
        if(letras1[i]<letras2[i]) {
            res = 0;
            break;
        }

    if(res)
        cout << "S\n";
    else
        cout <<"N\n";

    return 0;
}