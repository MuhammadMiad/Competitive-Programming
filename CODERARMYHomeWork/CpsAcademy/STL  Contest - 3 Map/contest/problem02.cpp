#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<5;i++){
            vector<int>temp;
        for(int j=0;j<4;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    vector<vector<int>>ans;
    vector<long long int>times;
    int x=n;
    while(n--){
        long long int time;
        cin>>time;
        times.push_back(time);
        vector<int>ar;
        for(int i=0;i<20;i++){
            int x;
            cin>>x;
            ar.push_back(x);
        }
        ans.push_back(ar);

    }

     long long int sum,mini,price=0,ti;
     vector<int>ttt;
    for(int i=0;i<5;i++){
          mini=INT_MAX;
          ti=INT_MIN;
       for(int j=0;j<x;j++){
            sum=0;
          // cout<<"OUTPUT= ";
        for(int k=0;k<4;k++){
            sum+=ans[j][arr[i][k]-1];

           // cout<<ans[j][arr[i][k]]<<" ";
        }
        //cout<<endl;

        mini=min(mini,sum);
        ti=max(ti,times[j]);
       }

       ttt.push_back(ti);
       price+=mini;
      // cout<<"mini="<<mini<<endl;

    }

    sort(ttt.begin(),ttt.end());
    cout<<ttt.back()<<endl;
    price+=ttt.back();
    cout<<price<<endl;

 }

return 0;
}
