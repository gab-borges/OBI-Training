#include <bits/stdc++.h>
using namespace std;

bool ehAnagrama(vector<string>& v) {
    string s = v[0];
    vector<int> letras(26);
    for(int i=0; i<s.size(); i++)
        letras[s[i]-'a']++;

    for(string p: v) {
        vector<int> pLetras(26);
        for(int i=0; i<p.size(); i++)
            pLetras[p[i]-'a']++;

        for(int i=0; i<26; i++)
            if(letras[i] != pLetras[i])
                return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool finished = false;
    string ans;
    for(int i=n; i>1; i--) {
        if(n%i==0) {
            int tam = n/i;
            vector<string> v(i);

            for(int j=0; j<n; j++) {
                v[j/tam] += s[j];
            }

            if(ehAnagrama(v)) {
                cout << v[0] << "\n";
                finished = true;
                break;
            }
        }
    }

    if(!finished)
        cout << "*\n";
    
    return 0;
}