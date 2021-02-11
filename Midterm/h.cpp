#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    char c;

    cin >> c;

    string s;

    cin >> s;

    s.erase(remove(s.begin(), s.end(), c), s.end());

    cout << s;

    return 0;
}