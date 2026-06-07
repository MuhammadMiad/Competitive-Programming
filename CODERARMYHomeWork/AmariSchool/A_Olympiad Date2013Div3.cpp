#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int zero=0,one=0,two=0,three=0,five=0,cnt=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]==0)zero++;
            else if(arr[i]==1)one++;
            else if(arr[i]==2)two++;
            else if(arr[i]==3)three++;
            else if(arr[i]==5)five++;
            if(zero>=3 and one>=1 and two>=2 and three>=1 and five>=1){
                cnt=i+1;
                break;
            }
        }
        cout<<cnt<<endl;


    }

return 0;
}
