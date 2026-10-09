//Time complexity:O(n)
//Space complexityO(1)



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
      int n;cin>>n;
     vector<pair<int,int>>arr;
      for(int i=0;i<n;i++){
         int a,b;cin>>a>>b;
         arr.push_back({b,a});
      }
      sort(begin(arr),end(arr));
      int last=arr[0].first;
      int cnt=1;
      for(int i=1;i<n;i++){
          if(last<=arr[i].second){
            last=arr[i].first;
            cnt++;
          }
      }

      cout<<cnt<<endl;

return 0;
}
