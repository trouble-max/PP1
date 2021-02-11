#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s, u, v;

    getline(cin, s);

    string :: size_type maxs;

    maxs = 0;

    istringstream input(s);

    while (input >> u){
        if(maxs < u.size()){
            maxs = u.size();
            v = u;
        }
    }

    cout << v;

    return 0;
}