#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    int max = 0;

    for(int i = 0; i < s.size() - 1; i++){

        for(int j = i + 1; j < s.size(); j++){

            int count = 0;

            for(int k = i; k <= j; k++, count++){

                if(s[k] != s[j - count]){
                    
                    if(max < j - i + 1){
                        max = j - i + 1;
                    } break;
                }
            }
        }
    }

    cout << max;
    
    return 0;
}