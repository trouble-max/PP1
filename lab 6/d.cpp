#include <iostream>

using namespace std;

int a[10000];

int n;

int x;

bool check = true;

void ID(){
    for(int i = 0; i < n; i++){
        if(a[i] != x) check = false;

        else{
            check = true;

            break;
        }
    }
}

void inp(){

    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    cin >> x;
}

int main(){
    inp();

    ID();

    if(check == true) cout << "YES";

    else cout << "NO";

    return 0;
}