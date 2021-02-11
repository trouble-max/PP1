#include <iostream>

using namespace std;

int main() {

    string s;

    cin >> s;

    int x = 0, y = 0;

    for(int i = 0; i < s.size(); i++){

        if(s[i] == 'B'){
        x -= 1;
        }

        else if(s[i] == 'F'){
        x += 1;
        }

        else if(s[i] == 'L'){
        y -= 1;
        }

        else if(s[i] == 'R'){
        y += 1;
        }
    }

    if(x == 0 && y == 0) cout << "Chill Yelnur";

    while(x > 0){
        cout << 'B';
        x--;
    }

    while(x < 0){
        cout << 'F';
        x++;
    }

    while(y > 0){
        cout << 'L';
        y--;
    }

    while(y < 0){
        cout << 'R';
        y++;
    }

    return 0;
}