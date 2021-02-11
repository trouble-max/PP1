#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x, z = 1001;
        int m = 1000;
        cin >> x;
        vector<int> v;
        for(int j = 0; j < x; j++){
            int l;
            cin >> l;
            v.push_back(l);
        }
        for(int j = 0; j < x; j++){
            for(int k = 0; k < x; k++){
                if(j != k && v[j] == v[k]){
                    v[j] = 1001;
                    v[k] = 1001;
                }
            }
            if(v[j] < m){
                m = v[j];
                z = j;
            }
        }
        if(z != 1001) cout << z + 1 << endl;
        else cout << "ZA WARUDO" << endl;

    return 0;
}