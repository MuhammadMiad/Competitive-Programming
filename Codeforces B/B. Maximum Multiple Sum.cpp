#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    if(n==2){
        v.push_back(2);
    }
    else if(n==3){
        v.push_back(3);
    }
    else{
        v.push_back(2);
    }

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
