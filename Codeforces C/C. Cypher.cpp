#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    string s;
    vector<int>v1;
    vector<string >v;
    for(int i=0;i<n;i++){
            cin>>k;
           cin>>s;
           v.push_back(s);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]=='D'){
                arr[i]++;

                if(arr[i]==10) arr[i]=0;
            }
            else if (v[i][j]=='U'){
                arr[i]--;
                if(arr[i]==-1) arr[i]=9;
            }

           if(j==v[i].size()-1)   v1.push_back(arr[i]);
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v.clear();
    v1.clear();

}

return 0;
}
