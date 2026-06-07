#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>cnt(256,0);
    int first=0,second=0,diff=0,len=str.size();
    while(second<str.size()){
            if(cnt[str[second]]==0)diff++;
       cnt[str[second]]++;
       second++;

    }
    for(int i=0;i<256;i++)cnt[i]=0;
    second=0;

    while(second<str.size()){
        while(diff && second<str.size()){
            if(cnt[str[second]]==0){
                diff--;
            }
            cnt[str[second]]++;
            second++;
        }
        len=min(len,second-first);

        while(diff!=1){
            len=min(len,second-first);
            cnt[str[first]]--;
            if(cnt[str[first]]==0){
                diff++;
            }
            first++;
        }
    }
   cout<<len<<endl;



return 0;
}
