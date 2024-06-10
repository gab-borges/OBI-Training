#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    char status[101];
    int tempo[101];

    fill(status, status+101, 'A');
    fill(tempo, tempo+101, 0);

    char ant = 'A';
    for(int i=0; i<n; i++) {
        char letra;
        int num;
        cin >> letra >> num;
        cin.ignore();

        if(i!=0 && letra!='T' && ant!='T') {
            for(int j=0; j<101; j++)
                if(status[j]=='R')
                    tempo[j]++;
        }

        if(letra=='T') {
            for(int j=0; j<101; j++)
                if(status[j]=='R')
                    tempo[j] += num;
        }

        else if(letra=='R')
            status[num] = 'R';

        else if(letra=='E')
            status[num] = 'E';

        ant = letra;
    }

    for(int i=0; i<101; i++)
        if(status[i]!='A') {
            if(status[i]=='E')
                cout << i << " " << tempo[i] << "\n";
            else
                cout << i << " " << -1 << "\n";
        }

    return 0;
}