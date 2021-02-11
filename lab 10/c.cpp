#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    string s;

    cin >> s;

    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '6' && st.top() == '1') st.pop();
        if(s[i] == '5' && st.top() == '2') st.pop();
        if(s[i] == '6' && st.top() == '3') st.pop();
        if(s[i] == '9' && st.top() == '4') st.pop();
        if(s[i] == '4' && st.top() == '6') st.pop();
        if(s[i] == '1' && st.top() == '8') st.pop();
        else st.push(s[i]);
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }

    return 0;
}