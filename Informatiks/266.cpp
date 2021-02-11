#include <iostream>

using namespace std;

int main(){

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a > 0){
        if(b > 0){
            if(c > 0){
                if(d > 0) cout << "YES";
                else cout << "NO";
            }
            else cout << "NO";
        }
        else{
            if(c > 0){
                if(d > 0) cout << "NO";
                else cout << "YES";
            }
            else cout << "NO";
        }
    }
    else{
        if(b > 0){
            if(c < 0){
                if(d > 0) cout << "YES";
                else cout << "NO";
            }
            else cout << "NO";
        }
        else{
            if(c < 0){
                if(d > 0) cout << "NO";
                else cout << "YES";
            }
            else cout << "NO";
        }
    }

    return 0;
}