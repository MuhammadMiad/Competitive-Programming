#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;
vector<int>v,v1;
while(t--){
    int n;
    cin>>n;
 int   arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int co=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            v.push_back(arr[j]);
        }
        sort(v.begin(),v.end());
        if(v.size()==1&& v[0]==0){
           co++;
        }
        else if(v.size()==1&&v[0]>0){
             co=0;
        }
        else{
                ll sum=0;
             for(int k=0;k<v.size()-1;k++ ){
                sum+=v[k];
             }
             if(sum==v[v.size()-1]){
                co++;
             }
        }

        v.clear();


    }
    v1.push_back(co);
      co=0;
}
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}

return 0;
}
