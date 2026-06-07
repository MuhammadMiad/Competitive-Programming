#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v1,v2,v;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int co=0;
     v1.push_back(arr[0]);
    for(int i=1;i<n;i++){  co++;

   if(co<=2){

            v2.push_back(arr[i]);
        }
        else if(co<=4){
            v1.push_back(arr[i]);
            if(co==4)  co=0;

        }
    }

    v.push_back(v1[v1.size()-1] +v2[v2.size()-1]);
    v1.clear();
    v2.clear();
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
