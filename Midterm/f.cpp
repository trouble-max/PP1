#include <iostream>

using namespace std;

int main(){

    int x, y, z;

    int count = 0;

    cin >> x >> y >> z;

    int a[x][y];

    for(int i = 0; i < x; i++){

        for(int j = 0; j < y; j++){

            cin >> a[i][j];
        }
    }

    for(int i = 0; i < x; i++){

        for(int j = 0; j < y; j++){

            if(a[i][j] == z){

                count++;
                
                break;
            }
        }
    }

    cout << count;

    return 0;
}