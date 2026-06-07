#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    set<int>st;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        v.push_back(st.size());
        st.clear();



    }
    for(int it:v)cout<<it<<endl;
return 0;
}
