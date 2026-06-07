#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        if(is_sorted(begin(arr),end(arr))){
            for(auto it:arr)cout<<it<<" ";
            cout<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            int mn=INT_MAX;
            int index=-1;
            for(int j=i+1;j<n;j++){
                if(mn>arr[j]){
                    mn=arr[j];
                    index=j;
                }
            }
            if(index!=-1 and mn<arr[i]){
                int l=i;
                int r=index;
                while(l<r){
                    swap(arr[l++],arr[r--]);

                }
                break;
            }

        }
        for(auto it:arr)cout<<it<<" ";
        cout<<endl;
    }


return 0;
}





