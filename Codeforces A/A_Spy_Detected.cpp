#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v,v1;
set<int>st;
while(t--){
    int n,k;
    cin>>n;
    int arr[2];
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
        st.insert(k);
    }
    int i=0;
    for(auto it:st){
        arr[i]=it;
        i++;
    }
    int co=0;
    int c=0;
    for(int i=0;i<v.size();i++){
        if(arr[0]==v[i]){
            co++;
        }
        else if(arr[1]==v[i]){
            c++;
        }
    }
    if(c==1){
        for(int i=0;i<v.size();i++){
            if(arr[1]==v[i]){
                v1.push_back(i+1);
            }
        }
    }
    else{
        for(int i=0;i<v.size();i++){
            if(arr[0]==v[i]){
                v1.push_back(i+1);
            }
        }
    }
    v.clear();
    st.clear();
}

for(int i=0;i<v1.size();i++){
 cout<<v1[i]<<endl;
}
return 0;
}
