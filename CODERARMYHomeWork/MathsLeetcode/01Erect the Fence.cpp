#include<bits/stdc++.h>
using namespace std;
int checkEquationValue(pair<int,int>&a,pair<int,int>&b,pair<int,int>c){
 int x1=a.first;
 int x2=b.first;
 int x3=c.first;

 int y1=a.second;
 int y2=b.second;
 int y3=c.second;

 return (y3-y2)*(x2-x1)-(x3-x2)*(y2-y1);


}
vector<vector<int>>outerTrees(vector<vector<int>>&trees) {
         int n=trees.size();
         vector<vector<int>>result;
         sort(begin(trees),end(trees));

         deque<pair<int,int>>upper,lower;
         for(auto &point:trees){
                int l=lower.size();
                int r=upper.size();
            while(l>=2 and checkEquationValue(lower[l-2],lower[l-1],{point[0],point[1]})<0){
                l--;
                lower.pop_back();

            }
            while(r>=2 and checkEquationValue(upper[r-2],upper[r-1],{point[0],point[1]})>0){
                r--;
                upper.pop_back();

            }

            lower.push_back({point[0],point[1]});
            upper.push_back({point[0],point[1]});
         }

         set<pair<int,int>>store;
         for(auto &point:lower){
            store.insert(point);
         }
         for(auto &point:upper){
            store.insert(point);
         }
         for(auto &it:store){
           result.push_back({it.first,it.second});
         }

         return result;

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

    vector<vector<int>>ans=outerTrees(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }

return 0;
}
