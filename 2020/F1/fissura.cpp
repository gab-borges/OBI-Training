#include <iostream>
#include <vector>
using namespace std;

void paint(vector<string>& M, int i, int j, int target) {
    if(j+1<M.size() && M[i][j+1]!='*' && M[i][j+1]-'0'<=target) {
        M[i][j+1] = '*';
        paint(M, i, j+1, target);
    }

    if(i+1<M.size() && M[i+1][j]!='*' && M[i+1][j]-'0'<=target) {
        M[i+1][j] = '*';
        paint(M, i+1, j, target);
    }

    if(j-1>=0 && M[i][j-1]!='*' && M[i][j-1]-'0'<=target) {
        M[i][j-1] = '*';
        paint(M, i, j-1, target);
    }
    
    if(i-1>=0 && M[i-1][j]!='*' && M[i-1][j]-'0'<=target) {
        M[i-1][j] = '*';
        paint(M, i-1, j, target);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, F;
    cin >> N >> F;

    vector<string> M;

    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        M.push_back(s);
    }

    if(F>=M[0][0]-'0')
        paint(M, 0, 0, F);

    for(string i:M)
        cout << i << "\n";

    return 0;
}