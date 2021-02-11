#include <iostream>

using namespace std;

int main(){
    int x, y, a, b, c, d, e;

    bool check = false;

    cin >> x >> y;

    while(x <= y){
        if(x / 10000 != 0){
            a = x / 10000;
            b = x / 1000 % 10;
            c = x / 100 % 10;
            d = x / 10 % 10;
            e = x % 10;
            if(a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e){
                check = true;
                break;
            }
            x++;
        }
        else{
            a = x / 1000 % 10;
            b = x / 100 % 10;
            c = x / 10 % 10;
            d = x % 10;
            if(a != b && a != c && a != d && b != c && b != d && c != d){
                check = true;
                break;
            }
            x++; 
        }
    }

    if(check == true) cout << x;
    else cout << "Understandable, have a great day";

    return 0;
}