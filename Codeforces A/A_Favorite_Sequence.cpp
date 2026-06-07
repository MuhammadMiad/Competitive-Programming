#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>k;
            v.push_back(k);
        }
        int a=0,b=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[a++]=v[i];
            }
            else{
                arr[b--]=v[i];
            }
        }

        for(int  i=0;i<n;i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
           arr[n]={0};
           v.clear();
    }

return 0;
}
