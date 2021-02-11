#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int p = 0;
int k;

unsigned long long power(){
    k = 1;
    for(int i = 0; i < p; i++){
        k *= p;
    }
    p++;
    return k;
}

int main(){
    int n;

    cin >> n;

    vector<unsigned long long> v(n + 1);

    generate(v.begin(), v.end(), power);

    for(int i = 0; i <= n; i++) cout << v[i] << " ";

    return 0;
}