#include <iostream>
#include <string>

using namespace std;

int res = 0;

int NoE(string x){

    if(x == "") return res;

    else{
        if(x[x.size() - 1] % 2 == 0) res++;
        x.pop_back();
        return NoE(x);
    }
}

int main(){
    
    string n;

    cin >> n;

    cout << NoE(n);

    return 0;
}