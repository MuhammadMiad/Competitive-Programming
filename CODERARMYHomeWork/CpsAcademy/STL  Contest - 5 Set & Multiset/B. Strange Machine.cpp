#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    vector<int>arr(q);
    for(int i=0;i<q;i++)cin>>arr[i];
    int aa=count(begin(str),end(str),'A');
    if(aa==n){
       for(int i=0;i<q;i++){
        cout<<arr[i]<<endl;
       }
       continue;
    }
    for(int i=0;i<q;i++){
          int  cnt=0;
             int j=0;
            while(1){
            char ch=str[j++%n];
            if(ch=='A'){
                cnt++;
                arr[i]-=1;
            }
            else{
                cnt++;
                arr[i]/=2;
            }
            if(arr[i]==0)break;
        }
        cout<<cnt<<endl;
    }
}


return 0;
}
