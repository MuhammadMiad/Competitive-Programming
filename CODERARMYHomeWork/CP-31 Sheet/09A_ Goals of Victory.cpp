#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            cnt=cnt+x;
        }
        if(cnt<0)cout<<abs(cnt)<<endl;
        else cout<<-cnt<<endl;
    }

return 0;
}
