#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;

    int sum = 0;

    cin >> s;

    vector<int> v;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            v.push_back(s[i] - 48);
        }
    }

    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    cout << sum;

    return 0;
}