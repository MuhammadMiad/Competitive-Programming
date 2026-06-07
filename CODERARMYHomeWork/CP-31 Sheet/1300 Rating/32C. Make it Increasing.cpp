#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int>a,pair<int,int>b){
 if(a.first!=b.first) return a.first>b.first;
 else return a.second<b.second;
}
int main(){

        int n;
        cin>>n;
        vector<int>arr(n),brr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i;
        for(i=n-1;i>=0;i--){
            if(arr[i]<=arr[i-1])break;
        }
        if(i==-1){
            cout<<n<<endl;
            return 0;
        }
        vector<pair<int,int>>mp;
        for(int j=0;j<i;j++){
            mp.push_back({arr[j],j});
        }
        sort(begin(mp),end(mp),comparator);
        int index=i;
        int cnt=0;
        int c=0,j=0;
        while(j<index){
             int store=mp[c].second;
           while(j<=store){
            int ss=mp[c].first/arr[j];
            if(ss*arr[j]==mp[c].first){
                j++;cnt+=ss;
            }
            else if(ss*arr[j]<mp[c].first){

             if((ss+1)*arr[j]>mp[c-1].first)
                cnt+=ss+2;
             }
             else cnt+=ss+1;

             j++;
           }
           c++;

        }
        cnt+=n-i;

        cout<<cnt<<endl;




return 0;
}
