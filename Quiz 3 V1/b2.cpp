#include <iostream>
#include <vector>

using namespace std;

int Unique(vector<string> v, string s){

  for(int i = 0; i < v.size(); i++){
    if(v[i] == s){
      return i;
    }
  }
  return -1;
}
int main() {
    int n;

    cin >> n;

    vector<string> v;

    string s;

    int count = 0;

    vector<int> v1;

    for(int i = 0; i < n; i++){

    cin >> s;

    if(Unique(v, s) != -1){

        if(!v1[Unique(v, s)]){
            cout << s << endl;
            count++;
            v1[Unique(v, s)]++;
            }
        }
        else {
        v.push_back(s);
        v1.push_back(0);
        }  
    }

    if(count == 0){
        cout << "Understandable, have a great day";
  }
}