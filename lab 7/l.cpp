#include <iostream>
#include <string>

using namespace std;

int x = 0;

bool Pcheck(string s){
    if(x == s.size()) return true;
    if(s[x] == s[s.size() - 1 - x]){
        x++;
        return Pcheck(s);
    }
    else return false;
}
int main(){

    string s;

    cin >> s;

    if(Pcheck(s) == true) cout << "Yes";
    else cout << "No";

    return 0;
}