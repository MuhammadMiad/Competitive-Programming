#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int cnt=0;
    vector<int>v;
    if(s1.size()<s2.size()){
        for(int i=0;i<=s1.size();i++){
            if(s1[i]==s2[i]){
                cnt++;
            }
            else {
            if(cnt>1)v.push_back(cnt);
            cnt=0;
            }
    }
    }
    else{
        for(int i=0;i<s2.size();i++){
            if(s1[i]==s2[i]){
                cnt++;
            }
            else {
            if(cnt>1)v.push_back(cnt);
            cnt=0;
            }
    }
    }
    int sum=0;
    int co=0;
    for(auto it:v){
        co++;
        sum+=it;
    }

    int totalsum=0;
    totalsum+=s1.size()-sum;
    totalsum+=s2.size()-sum;
    totalsum+=sum+co;
    cout<<totalsum<<endl;

return 0;
}
