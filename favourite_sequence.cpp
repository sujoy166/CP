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
        int i=0;
        int j=n-1;
        for(int k=0;k<n;k++){
            if(k%2==0) {cout<<v[i]<<" ";i++;}
            else {cout<<v[j]<<" ";j--;}
        }
        cout<<endl;

    }
}