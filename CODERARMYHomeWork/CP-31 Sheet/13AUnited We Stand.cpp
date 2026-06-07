#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),temp1,temp2;
        set<int>st;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        if(st.size()==1)cout<<-1<<endl;
        else{
            sort(begin(arr),end(arr));
        temp1.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(temp1[0]==arr[i])temp1.push_back(arr[i]);
            else temp2.push_back(arr[i]);
        }

        cout<<temp1.size()<<" "<<temp2.size()<<endl;
        for(int i=0;i<temp1.size();i++)cout<<temp1[i]<<" ";
        cout<<endl;
        for(int i=0;i<temp2.size();i++)cout<<temp2[i]<<" ";
        cout<<endl;
        }

    }

return 0;
}
