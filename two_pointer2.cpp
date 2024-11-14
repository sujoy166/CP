#include <bits/stdc++.h>
using namespace std;
int first,last;
int closest_pair(int ara[],int n,int t){
      int i=0;
      int j=n-1;
      int ans= INT_MAX;
      while(i<j){
          int sum=ara[i]+ara[j];
          if(ans>abs(sum-t)){first=ara[i],last=ara[j];ans=abs(sum-t);}
          if(sum==t)break;
          else if(sum>t)j--;
          else i++;
      }
      return ans;
      
}
int main(){
    int n;
    cin>>n;
    int ara[n];
    cout<<"ARRAY : ";
    for(int i=0;i<n;i++)cin>>ara[i];
    cout<<"TARGET : ";
    int t;
    cin>>t;
    sort(ara,ara+n);
    int ans=closest_pair(ara,n,t);
    cout<<ans<<" "<<first<<" "<<last<<endl;
}