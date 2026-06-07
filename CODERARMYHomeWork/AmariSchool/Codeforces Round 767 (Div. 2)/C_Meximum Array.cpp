#include<bits/stdc++.h>
using namespace std;
#define in_range(i,x,y) for(int i=x;i<=y;i++)
#define in_range_back(i,x,y) for(int i=y;i>=x;i--)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        map<int,queue<int>>index;
        for(int i=0;i<n;i++){
            index[arr[i]].push(i);
        }
        vector<int>ans;
        int current_index=0;
        while(current_index!=n){
        ///Find Max
        int mx;
        for(int i=0;i<=n;i++){
            if(index[i].empty()){
                mx=i;
                ans.push_back(i);
                break;
            }
        }
        ///gather indexes
        int mx_index=current_index;
        for(int i=0;i<mx;i++){
            mx_index=max(mx_index,index[i].front());
        }

        ///index remove
        for(int i=0;i<mx;i++){
            while(!index[i].empty() and index[i].front()<=mx_index){
                index[i].pop();
            }
        }
        current_index=mx_index+1;

        }

        cout<<ans.size()<<endl;
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;


//        for(int i=0;i<=mx;i++){
//            cout<<i<<"->";
//            while(!index[i].empty()){
//                cout<<index[i].front()<<" ";
//                index[i].pop();
//            }
//            cout<<endl;
//        }

    }

return 0;
}
