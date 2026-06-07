#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    set<int>st;
    vector<int>v;
    while(t--){
        int n,x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            st.insert(x);
        }
        if(st.size()==1&&n%2==0)v.push_back(0);
        else if(st.size()==1&&n%2==1)v.push_back(1);
        else if(st.size()%2==0&&n%2==0)v.push_back(st.size());
        else if(st.size()%2==1&&n%2==1)v.push_back(st.size());
        else if(n==st.size())v.push_back(st.size());
        else if((n-st.size())%2==1)v.push_back(st.size()-1);

        st.clear();
    }

 for(int it:v)cout<<it<<endl;
return 0;
}
