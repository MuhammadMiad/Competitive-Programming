#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>ans;
        int index=max_element(begin(arr),end(arr))-begin(arr);
        long long mx=arr[index];

        while(m--){

            int x,y;
            char ch;
            cin>>ch>>x>>y;
            if(mx<=y and mx>=x){
                if(ch=='-'){
                    mx--;
                    ans.push_back(mx);
                }
                else {
                    mx++;
                    ans.push_back(mx);
                }
            }
            else ans.push_back(mx);

        }

        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }


return 0;
}
