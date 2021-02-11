#include <iostream>
#include <sstream>

using namespace std;

string xnary(int n, int x, string res){
    if(n == 0 && res != "") return res;
    if(n == 0 && res == "") return "0";
    return xnary(n / x, x, char(n % x + 48) + res);
}

string corr(string s){

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 58) s[i] += 7;
    }
    return s;
}

int main(){

    int n, x;

    string s;

    stringstream ss;

    cin >> n >> x;

    ss << xnary(n, x, "");

    ss >> s;

    cout << corr(s);

    return 0;
}