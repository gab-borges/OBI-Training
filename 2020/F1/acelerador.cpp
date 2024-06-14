#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    cout << ((n-2) % 8) - 3 << "\n";
p
    return 0;
}