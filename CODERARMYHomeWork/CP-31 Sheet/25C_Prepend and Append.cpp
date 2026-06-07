#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        if(n==1)cout<<1<<endl;
        else if(arr[0]==arr[n-1])cout<<n<<endl;
        else{
            int left=0;
            int right=n-1;
            while(left<right){
                if(arr[left]==arr[right]){
                    break;
                }
                else left++,right--;

            }
            cout<<right-left+1<<endl;
        }

    }

return 0;
}
