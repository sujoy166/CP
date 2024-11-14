#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    vector<int>v(test);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int s,d;
    s=d=0;
    for(int i=0;i<test;i++){
           if(i%2==1)d+=v[i];
           else s+=v[i];
    }
    cout<<s<<" "<<d<<endl;
}