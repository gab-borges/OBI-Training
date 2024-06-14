#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int p=0, m=0;
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        if(a==1)
            p++;
        else
            m++;
    }

    int P;
    cin >> P;
    int M;
    cin >> M;

    if(P==p && M==m)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}