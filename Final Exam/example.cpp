#include <iostream>
#include <sstream>
#include <stack>
#include <vector>

using namespace std;

string Fn(string s, string s1, vector<string> *v){
    if(s == "") return v;
    for(int i = 0; i < s.size(); i++){
        if(s[s.size() - 1] >= '0' && s[s.size() - 1] <= '9'){
            s1.insert(s[s.size() - 1]);
            s.pop_back();
            return Fn(s, s1, v);
        }
        else{
            if(s1 != ""){
                v.insert(s1);
            }
            s.pop_back();
            return Fn(s, s1, v);
        }
    }
}

int main(){
    string s, x;

    vector<string> v;

    stack<string> st;

    cin >> st;

    /*for(int i = 0;i < st.size(); i++){
        if(st.top() >= '0' && st.top() <= '9')
    }*/

    /*istringstream input(s);

    while(input >> x){
        if(x)
    }*/

    return 0;
}