#include <bits/stdc++.h>
using namespace std;
int first,last;
int closest_pair(int ara1[],int ara2[],int n,int m,int t){
      int i=0;
      int j=m-1;
      int ans= INT_MAX;
      while(i<n && j>=0){
          int sum=ara1[i]+ara2[j];
          if(ans>abs(sum-t)){first=ara1[i],last=ara2[j];ans=abs(sum-t);}
          if(sum==t)break;
          else if(sum>t)j--;
          else i++;
      }
      return ans;
      
}
int main(){
    int n,m;
    cin>>n>>m;
    int ara1[n],ara2[m];
    cout<<"ARRAY1 : ";
    for(int i=0;i<n;i++)cin>>ara1[i];
    cout<<"ARRAY2 : ";
    for(int i=0;i<m;i++)cin>>ara2[i];
    cout<<"TARGET : ";
    int t;
    cin>>t;
    sort(ara1,ara1+n);
    sort(ara2,ara2+m);
    int ans=closest_pair(ara1,ara2,n,m,t);
    cout<<ans<<" "<<first<<" "<<last<<endl;
}