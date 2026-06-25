#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n),brr(n),crr(n);
    for(int i=0;i<n;i++)cin>>brr[i];
    for(int i=0;i<n;i++){
        cin>>crr[i];
        arr[i]=i+1;
    }


    vector<int>ans;
     if(arr==brr)ans.push_back(1);
     if(arr==crr)ans.push_back(1);

    int cnt=2;
    while(next_permutation(begin(arr),end(arr))){
            int c=0,cc=0;
            for(int i=0;i<n;i++){
                if(brr[i]==arr[i])c++;
                if(crr[i]==arr[i])cc++;
            }

            if(c==n)ans.push_back(cnt);
            if(cc==n)ans.push_back(cnt);
            cnt++;

    }
     cout<<abs(ans[0]-ans[1])<<endl;

return 0;
}
