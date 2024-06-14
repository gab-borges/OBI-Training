#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> stack;

    int soma = 0;

    for(int k=0; k<n; k++) {
        int num;
        cin >> num;

        if(num != 0) {
            stack.push(num);
            soma += num;
        }
            
        else if(!stack.empty()) {
            soma -= stack.top();
            stack.pop();
        }
    }

    cout << soma << "\n";

    return 0;
}