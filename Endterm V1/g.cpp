#include <iostream>
#include <algorithm>

using namespace std;

int x = 0, y = 0;

int Upper(string s, int n){
    for(int i = 0; i < n + 1; i++){
        if(s[i] >= 'a' && s[i] <= 'z') y++;
    }
    return y;
}

int Lower(string s, int n){
    for(int i = 0; i < n + 1; i++){
        if(s[i] >= 'A' && s[i] <= 'Z') x++;
    }
    return x;
}

int main(){
    string s;

    int a, b, c, d, n;

    cin >> n >> a >> b >> s;
    
    c = Lower(s, n);

    d = Upper(s, n);

    cout << min(b * d,a * c);
    
    return 0;
}