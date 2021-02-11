#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x;

    cin >> n;
    
    multiset<int> s1, s2;

    for(int i = 0; i < n; i++){
        cin >> x;

        if(x % 2 == 0){
            s1.insert(x);
        }
        else{
            s2.insert(x);
        }
    }

    multiset<int> :: reverse_iterator rit;

    for(rit = s1.rbegin(); rit != s1.rend(); rit++) cout << *rit << " ";

    multiset<int> :: iterator it;

    for(it = s2.begin(); it != s2.end(); it++) cout << *it << " ";

    return 0;
}