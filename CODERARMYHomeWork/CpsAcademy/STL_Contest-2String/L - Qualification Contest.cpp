#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<string>arr;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(i<k){
            arr.push_back(str);
        }

    }
    sort(begin(arr),end(arr));
    for(int i=0;i<k;i++){
        cout<<arr[i]<<endl;
    }



return 0;
}
