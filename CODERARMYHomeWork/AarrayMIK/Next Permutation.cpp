#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 vector<int>arr(n);
 for(int i=1;i<=n;i++)arr[i-1]=i;


 for(int i=0;i<pow(2,n)+8;i++){
    int first=-1;
    for(int j=n-1;j>0;j--){
        if(arr[j-1]<arr[j]){
            first=j-1;
            break;
        }
    }
        int swap_index=first;
        if(first!=-1){
            for(int j=n-1;j>=first;j--){
                if(arr[first]<arr[j]){
                    swap_index=j;
                    break;
                }
            }
            swap(arr[first],arr[swap_index]);
    }

    reverse(begin(arr)+first+1,end(arr));
    for(auto &p:arr)cout<<p<<" ";
    cout<<endl;

 }
return 0;
}
