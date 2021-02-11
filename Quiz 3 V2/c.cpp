#include <iostream>
#include <map>
#include <vector>
#include <iterator> 

using namespace std;

void F(map<string, int> m, vector<char> c, int n){
    map<string, int> :: iterator it;

    int x;

    for(it = m.begin(); it != m.end(); next(it, 2)){
        if(c[distance(c.begin(), it)] == '+'){
            cout << (*it).second + (*(next(it, 1))).second;
        }
    }
}

int main(){
    map<string, int> m;

    vector<char> c;

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        int a, e;
        string b, d;
        cin >> c[i * 2];
        cin >> b >> a;
        m.insert(pair<string,int>(b, a));
        cin >> d >> e;
        m.insert(pair<string,int>(d, e));
    }

    F(m, c, n);
    
    return 0;
}