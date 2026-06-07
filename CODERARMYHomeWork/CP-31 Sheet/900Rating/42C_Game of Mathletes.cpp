/**                                       In the name of Allah
                                                 Miad
                                          handle:muhammadmiad
                                          muhammadmiad25@gmail.com


*/#include<bits/stdc++.h>
using namespace std;
#define Faster   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
 Faster;
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(begin(arr),end(arr));
    int i=0;
    int j=n-1;
    int cnt=0;
    while(i<j){
        if(arr[i]+arr[j]==k){
            cnt++;
            i++,j--;
        }
        else if(arr[i]+arr[j]<k)i++;
        else j--;
    }
    cout<<cnt<<endl;

 }

return 0;
}
