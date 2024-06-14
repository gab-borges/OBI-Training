#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cont = 0;

    for(int i=0; i<6; i++) {
        char c;
        cin >> c;
        cin.ignore();

        if(c=='V')
            cont++;
    }

    if(cont>=5)
        cout << 1 << "\n";
    else if(cont>=3)
        cout << 2 << "\n";
    else if(cont>=1)
        cout << 3 << "\n";
    else
        cout << -1 << "\n";

    return 0;
}