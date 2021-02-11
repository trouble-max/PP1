#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s, t;

    int n = 0;

    cin >> s >> t;

    do{
        if(s == t){
            cout << n;
            return 0;
        }
        rotate(s.begin(), s.begin() + s.size() - 1, s.end());
        n++;
    }while(n != s.size());

    cout << "Understandable have a nice day";

    return 0;
}