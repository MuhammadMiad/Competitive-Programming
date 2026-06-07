#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    int k=n-1;

         for(int i=0;i<n;i++){
        if(i%2==0){
            v.push_back(arr[j]);
            j++;
        }
        else if(i%2!=0){
            v.push_back(arr[k]);
            k--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
    v.clear();
    }

return 0;
}
