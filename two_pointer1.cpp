#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int ara[]={4,2,4,5,6,7,4,2,29,64,2,4,56,7,88,854,24,556,224,532,12};
        int n=(sizeof(ara)/sizeof(ara[0]));
        sort(ara,ara+n);
        for(auto i:ara)cout<<i<<" ";
        cout<<endl;
        int i=0;
        int j=n-1;
        int target =10;
        while(i<j){
            if(ara[i]+ara[j]==target) {cout<<"YES "<<ara[i]<<" "<<ara[j]<<endl; break;}
            else if(ara[i]+ara[j]>target)j--;
            else i++;
        }
    }
}