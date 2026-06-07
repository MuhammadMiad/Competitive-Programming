#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int sum=0;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(abs(x)==1 and abs(y)==1){
              sum+=2;
            }
            else{
            sum+=abs(x)*2;
            sum+=abs(y)*2;
            }

        }
        cout<<sum<<endl;
    }


return 0;
}
