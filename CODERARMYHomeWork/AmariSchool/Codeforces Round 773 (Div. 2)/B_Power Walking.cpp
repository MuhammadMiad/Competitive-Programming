#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++){
            cin>>x;
            st.insert(x);
        }
        if(st.size()==n){
            for(int i=0;i<n;i++){
                cout<<n<<" ";
            }
            cout<<endl;
            continue;
        }
        int xx=st.size();
        for(int i=1;i<=xx;i++){
            cout<<xx<<" ";
        }
        for(int i=xx+1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
    }


return 0;
}
