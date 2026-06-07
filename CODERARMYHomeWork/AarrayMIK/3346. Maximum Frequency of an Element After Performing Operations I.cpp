#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,op;cin>>n>>k>>op;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    int mx=*max_element(begin(arr),end(arr))+k;
    vector<int>freq(mx+1,0);

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=1;i<=mx;i++){
        freq[i]+=freq[i-1];
    }
    int result=0;
    for(int target=1;target<=mx;target++){
        int l=max(0,target-k);
        int r=min(mx,target+k);

        int totalcount=freq[r]-(l>0?freq[l-1]:0);

        int targetcount=freq[target]-freq[target-1];

        int needconversion=totalcount-targetcount;

        int totalpossible=targetcount+min(op,needconversion);

        result=max(totalpossible,result);
    }

    cout<<result<<endl;

return 0;
}
