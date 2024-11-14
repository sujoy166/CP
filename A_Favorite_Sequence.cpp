#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &i:v)cin>>i;
        int l=ceil(n/2);
        map<int,int>m;
        int j=1;
        for(int i=0;i<l;i++){
            m[j]=v[i];
            j+=2;
        }
        j=2;
        for(int i=n-1;i>=l;i--){
            m[j]=v[i];
            j+=2;
        }
        for(auto i:m)cout<<i.second<<" ";
        cout<<endl;
    }
}