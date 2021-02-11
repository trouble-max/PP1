#include <iostream>
#include <string>

using namespace std;

int m = 0;

int SoD(string x){

    if(x == "") return m;

    else{ 
        if(m < (x[x.size() - 1] - 48)){
            m = x[x.size() - 1] - 48;
        }
        x.pop_back();
        return SoD(x);
    }
}

int main(){
    
    string n;

    cin >> n;

    cout << SoD(n);

    return 0;
}