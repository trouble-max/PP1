#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;

    cin >> a;

    int arr[a];

    for(int i = 0; i < a; ++i) cin >> arr[i];

    int b, i, cnt = 0;

    cin >> b;

    bool c = true;

    for(int i = 0; i < a; i++){
        if(arr[i] > b){
            c = true;
            for(int j = 2; j < sqrt(arr[i]); j++){
                if(arr[i] % j == 0){
                    c = false;
                    break;
                }
            }
            if(c == true) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}