#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0' and str[i+1]=='1' and str[i+2]=='0' and i+2<n){
                cnt++;
                i++;
            }
            else if(str[i]=='0' and str[i+1]=='0' and i+1<n ){
                cnt+=2;
            }
        }
        cout<<cnt<<endl;
    }


return 0;
}
