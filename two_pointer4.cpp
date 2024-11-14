#include <bits/stdc++.h>
using namespace std;
void triplet_solve(int ara[],int n,int t){
    int count=0;
    for(int i=0;i<n-1;i++){
         unordered_set<int>s;
        for(int j=i+1;j<n;j++){
          int sum=t-(ara[i]+ara[j]);
          if(s.find(sum)!=s.end()){
             count++;
             cout<<"( "<<sum<<" , "<<ara[i]<<" , "<<ara[j]<<" )"<<endl;
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