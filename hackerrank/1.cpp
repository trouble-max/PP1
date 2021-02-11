#include <iostream>

using namespace std;

int main(){
    
    int n, x, count = 0;
    
    cin >> n;
    
    int a[100]{0};
    
    for(int i = 0; i < n; i++){
        cin >> x;
        a[x - 1]++;
    }
    
    for(int i = 0; i < 100; i++){
        if(a[i] % 2 >= 0 && a[i] != 0 && a[i] != 1) count += a[i] / 2;
    }
    
    cout << count;
    
    return 0;
}