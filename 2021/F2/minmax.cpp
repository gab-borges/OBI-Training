#include <iostream>
using namespace std;

int sumDigits(int n) {
    int cont = 0;
    while(n) {
        cont += n%10;
        n /= 10;
    }
    return cont;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int S, A, B;
    cin >> S >> A >> B;

    int menor;
    for(int i=A; i<=B; i++) {
        if(sumDigits(i) == S) {
            menor = i;
            break;
        }
    }

    int maior;
    for(int i=B; i>=A; i--) {
        if(sumDigits(i) == S) {
            maior = i;
            break;
        }
    }

    cout << menor << "\n" << maior << "\n";

    return 0;
}