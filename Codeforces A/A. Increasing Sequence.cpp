#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
         int n;cin>>n;
         vector<int >arr(n);
         for(int i=0;i<n;i++)cin>>arr[i];

         int x=1;
         for(int i=0;i<n;i++){
            if(arr[i]!=x){
                arr[i]=x;
                x++;
            }
            else{
                  while(arr[i]==x){
                    x++;
                  }
                  arr[i]=x;
                  x++;
            }
         }

         cout<<arr[n-1]<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

