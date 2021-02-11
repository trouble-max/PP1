#include <iostream>
#include <algorithm>

using namespace std;

bool Pol(string a){
    bool check = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != a[a.size() - 1 - i]) check = false;
    }
    if(check) return true;
    else return false;
}

int main(){
    string a; cin >> a;

    int x = 0;

    sort(a.begin(), a.end());

    do{
    if(Pol(a)) x++;
    }while (next_permutation(a.begin(), a.end() ) );

    if(x != 0) cout << "ZA WARUDO TOKI WO TOMARE";
    else cout << "JOJO";

    return 0;
}