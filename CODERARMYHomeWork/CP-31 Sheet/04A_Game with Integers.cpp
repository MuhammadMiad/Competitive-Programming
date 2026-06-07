#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0)cout<<"Second"<<endl;
        else{
                int cnt=0;
            while(1){
                n++;
                cnt++;
                if(n%3==0){
                    cout<<"First"<<endl;
                    break;
                }
                if(cnt>10){
                    cout<<"Second"<<endl;
                    break;
                }
            }
        }
    }

return 0;
}
