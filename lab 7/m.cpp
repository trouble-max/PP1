#include <iostream>

using namespace std;

void Print(int x , int i){

    if(i >= 0){
        cout << x - i << " ";
        Print(x, i - 1);
    }
}

int main(){

    int x;

    cin >> x;
    
    int i = x - 1;

    Print(x, i);

    return 0;
}