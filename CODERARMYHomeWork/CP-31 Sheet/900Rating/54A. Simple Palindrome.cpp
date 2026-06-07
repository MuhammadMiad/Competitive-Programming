#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[]={'a','e','i','o','u'};
        int n;
        cin>>n;
        if(n<=5){
            for(int i=0;i<n;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
        else{
            int x=n/5;
            int y=n%5;
           for(int i=0;i<y;i++){
             for(int j=0;j<=x;j++)cout<<arr[i];
           }
           for(int i=y;i<5;i++){
                for(int j=0;j<x;j++)cout<<arr[i];
           }
           cout<<endl;
        }


    }


return 0;
}
