#include <bits/stdc++.h>
using namespace std;
void triplet_solve(int ara[],int n,int t){
    int count=0;
    for(int i=0;i<n-2;i++){
         unordered_set<int>s;
         int k=i+2;
        for(int j=i+1;j<n-1;j++,k++){
          int sum=t-(ara[i]+ara[j]+ara[k]);
          if(s.find(sum)!=s.end()){
             count++;
             cout<<"( "<<sum<<" , "<<ara[i]<<" , "<<ara[j]<<" , "<<ara[k]<<" )"<<endl;
          }
          else s.insert(ara[j]);
        }
        s.clear();
    }
     cout<<"TOTAL = "<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    int t;
    cin>>t;
    triplet_solve(ara,n,t);
}