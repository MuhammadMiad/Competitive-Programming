#include<bits/stdc++.h>
using namespace std;
///Approach-1--TC(n^3)
// int maxPoints(vector<vector<int>>& points) {
//        int n=points.size();
//        if(n<=2)return n;
//        int ans=2;
//        for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                int count=2;
//                for(int k=0;k<n;k++){
//                    if(k!=j and k!=i){
//                      if((points[k][1]-points[j][1])*(points[j][0]-points[i][0])==(points[k][0]-points[j][0])*(points[j][1]-points[i][1]))
//                         count++;
//                    }
//                }
//                ans=max(ans,count);
//            }
//        }
//        return ans;
//    }

///Approach-2--TC(n^2)
 int maxPoints(vector<vector<int>>& points) {
      int n=points.size();
      if(n<=2)return n;
      int ans=0;

      for(auto &it1:points){
        map<double,int>mp;
        for(auto &it2:points){
            if(it1==it2)continue;
            double x1=it1[0],y1=it1[1];
            double x2=it2[0],y2=it2[1];
            double slop;
            if(x1-x2==0){
                slop=INT_MAX; /// slope is infinity for vertical line
            }
            else{
               slop=(y2-y1)/(x2-x1);
            }
           mp[slop]++;
           ans=max(ans,mp[slop]);
        }

      }
     return ans+1; //including point i
    }
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
     int ans=maxPoints(arr);
     cout<<ans<<endl;

return 0;
}
