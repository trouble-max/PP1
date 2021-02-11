#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, a = 0;

    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int max = v[n - 1];

    for(int i = n - 2; i >= 0; i--){
        if(v[i] > max){
            max = v[i];
            a++;
        }
    }

    cout << a + 1;

    return 0;
}