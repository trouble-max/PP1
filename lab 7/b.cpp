#include <iostream>

using namespace std;

string binary(int n, string res){
    if(n == 0 && res != "") return res;
    if(n == 0 && res == "") return "0";
    return binary(n / 2, char(n % 2 + 48) + res);
}

int main(){

    int n;

    cin >> n;

    cout << binary(n, "");

    return 0;
}