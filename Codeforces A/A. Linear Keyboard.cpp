#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        string s,s1;
        cin>>s>>s1;
        int sum=0;
        if(is_sorted(s.begin(),s.end())){
        for(int i=0;i<s1.size()-1;i++){
            sum+=abs(s1[i+1]-s1[i]);
        }
       v.push_back(sum);
    }
    else{
            int c=0,co=0;
            for(int i=0;i<s1.size()-1;i++){
         int l=0;
         int r1=s.size();
         while(l!=r1){
            if(s1[i]==s[l]){
                c=l+1;
            }

            if(s1[i+1]==s[l]){
                    co=l+1;
            }
            l++;
         }
         sum+=abs(co-c);

    }
  v.push_back(sum);
            }



    }
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }
return 0;
}
