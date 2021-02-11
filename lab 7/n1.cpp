#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,sum=0;
cin >> a >> b;
int arr[a];
int r[a];
int used[a];
for(int i=0;i<a;i++){
    cin >> arr[i];
    r[i]=arr[i];
}
sort(arr,arr+a);for(int i=0;i<a;i++){
       used[i]=abs(arr[i]-r[i]);
       sum+=used[i];
       }
       if(sum==0){
           cout << "no";
       }else{
           cout <<"cheater";
       }}