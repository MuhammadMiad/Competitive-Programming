#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n),brr(m);
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<m;i++)cin>>brr[i];

        sort(begin(arr),end(arr));
        sort(begin(brr),end(brr));
        priority_queue<int>pq;
        n--;
        ll sum=0;
        for(int i=0;i<m;i++){
            int x=brr[i];
            while(x-- and n>=0){
                pq.push(arr[n--]);
            }
            if(brr[i]==pq.size()){
                while(pq.size()>1){
                    sum+=pq.top();
                    pq.pop();
                }
                 while(!pq.empty()){
                    pq.pop();
                }
            }
            else{
                while(!pq.empty()){
                    sum+=pq.top();
                    pq.pop();
                }
            }

        }
        if(n>=0){
            for(int i=0;i<=n;i++)sum+=arr[i];
        }

        cout<<sum<<endl;

    }



return 0;
}
