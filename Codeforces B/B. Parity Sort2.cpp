#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string>v1;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        vector<bool>isOdd(n,false);
        vector<int>odd,even;
        for(int i=0;i<n;i++){
            if(v[i]%2==1){
                isOdd[i]=true;
                odd.push_back(v[i]);
            }
            else even.push_back(v[i]);
        }

        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end(),greater<int>());

 for(int i=0;i<n;i++){
    if(isOdd[i]){
        v[i]=odd.back();
        odd.pop_back();
    }
    else{
        v[i]=even.back();
        even.pop_back();
    }
 }

if(is_sorted(v.begin(),v.end())) v1.push_back("YES");
else v1.push_back("NO");

isOdd.clear();
even.clear();
odd.clear();
    }
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}

return 0;
}
