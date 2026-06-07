#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),temp;
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(begin(arr),end(arr));
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                temp.push_back(arr[r--]);
            }
            else{
                temp.push_back(arr[l++]);
            }
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(temp[i]-temp[(i+1)%n]);
        }

        cout<<sum<<endl;

    }

return 0;
}
