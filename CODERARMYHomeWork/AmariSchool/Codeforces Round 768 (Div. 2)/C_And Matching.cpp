#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,pair<int,int>>>ans;
        vector<pair<int,int>>ans2;
        set<int>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x=i+j;
                ans.push_back({x,{i,j}});
            }
        }
        sort(begin(ans),end(ans));
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
        }

        int left=0;
        int right=ans.size()-1;
        while(left<right){
          if(ans[left].first+ans[right].first==k){
            ans2.push_back({ans[left].second.first,ans[left].second.second});
            ans2.push_back({ans[right].second.first,ans[right].second.second});
//            st.insert(ans[left].second.first);
//            st.insert(ans[left].second.second);
//            st.insert(ans[right].second.first);
//            st.insert(ans[right].second.second);
         left++,right--;
          }
          else if(ans[left].first+ans[right].first>k){
            right--;
          }
          else left++;
        }
         vector<pair<int,int>>aa;
         st.insert(ans2[0].first);
         st.insert(ans2[0].second);
         aa.push_back({ans2[0].first,ans2[0].second});
         for(int i=0;i<ans2.size();i++){
            auto x=st.find(ans2[i].first);
            auto y=st.find(ans2[i].second);
            if((x!=st.empty()) && (y!=st.empty())){
                aa.push_back({ans2[i].first, ans2[i].second});
            }
         }


//        if(ans.size()){
//             for(auto it:ans)cout<<it.first<<" "<<it.second<<endl;
//             for(int i=1;i<n;i++){
//                if(ans[0].first!=i and ans[0].second!=i){
//                    cout<<0<<" "<<i<<endl;
//                    break;
//                }
//             }
//        }
//
//        else cout<<-1<<endl;
    }



return 0;
}
