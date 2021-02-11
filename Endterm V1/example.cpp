#include <iostream>

using namespace std;

int main(){
    string s;

    int k, j;

    cin >> s;

    cin >> k;

    for(int i = 0; i < s.size(); i++){
        j = 1;
        while(j <= k){
        if(s[i] == 'z'){
            s[i] = 'a';
        }
        else s[i] = 1 + s[i];
        j++;
        }
    }

    cout << s;

    return 0;
}