#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v,v1;
vector<string >v3;
while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    int co=0,c=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%2==0) co++;
        if(arr[i]%2==1) c++;
    }
    if(n==co||n==c){
        v3.push_back("YES");
    }
    else if(n!=co){
        for(int i=1;i<=n;i++){
            if(i%2==1){
                v.push_back(arr[i]+1);
                v1.push_back(arr[i]);
            }
            else if(i%2==0){
                  v.push_back(arr[i]);
                  v1.push_back(arr[i]+1);
            }
        }


     co=0;c=0;
     int coo=0,cc=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0 )co++;
        if(v1[i]%2==0 )coo++;
        if(v[i]%2==1)c++;
        if(v1[i]%2==1)cc++;
    }
    if(co==n||c==n) v3.push_back("YES");
    else if(coo==n||cc==n) v3.push_back("YES");
    else v3.push_back("NO");
    }

v.clear();
v1.clear();

}
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<endl;
}
return 0;
}
