#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int ans;
    if(a*2<=b){
        v.push_back(n*a);
    }
    else if(a*2>=b){
            if(n%2==0){
                ans=n/2;
                v.push_back(ans*b);
            }
        else{
            ans=n/2;
            v.push_back((ans*b)+a);
        }

    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
