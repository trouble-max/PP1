#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    int x = 0, y = 0;

    int a[5][5]{0};

    a[0][0] = 1;

    for(int i = 0; i < s.size(); i++){

        if(s[i] == 'B'){
            a[x - 1][y] = 1;
            x = x - 1;
        }

        else if(s[i] == 'F'){
            a[x + 1][y] = 1;
            x = x + 1;
        }

        else if(s[i] == 'L'){
            a[x][y - 1] = 1;
            y = y - 1;
        }

        else if(s[i] == 'R'){
            a[x][y + 1] = 1;
            y = y + 1;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] == 1) cout << "*";
            else cout << "-";
        } cout << endl;
    }

    return 0;
}