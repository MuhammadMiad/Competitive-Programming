#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ans=0;
        int index;
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]!='0'){
                index=i;
                break;
            }else ans++;
        }
        for(int i=0;i<index;i++){
            if(str[i]!='0')ans++;
        }

        cout<<ans<<endl;

    }


return 0;
}
