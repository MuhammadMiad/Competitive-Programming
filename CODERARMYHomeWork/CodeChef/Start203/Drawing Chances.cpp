#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        int one=0,zero=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1')one++;
            else zero++;
        }
        int  len=n-m;
        int dif=abs(one-zero);
        if(dif>len)cout<<"No"<<endl;
        else if((len-dif)%2==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

return 0;
}
