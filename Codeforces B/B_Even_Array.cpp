#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int co=0,c=0;
    for(int i=0;i<n;i++){
        if(i%2==0&&arr[i]%2!=0){
            co++;
        }
        else if(i%2==1&&arr[i]%2!=1){
            c++;
        }
    }
    if(co==c&&co>0){
        v.push_back(co);
    }
    else if(co==c&&co==0){
        v.push_back(0);
    }
    else
        v.push_back(-1);

        arr[n]={0};
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<< endl;
}
return 0;
}
