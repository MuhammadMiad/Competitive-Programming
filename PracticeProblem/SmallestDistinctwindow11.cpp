#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;

vector<int>store(256,0);
int first=0,second=0,len=str.size(),distinct=0;
for(int i=0;i<str.size();i++){
    if(store[str[i]]==0)distinct++;

    store[str[i]]++;
}
for(int i=0;i<256;i++){
    store[i]=0;
}

string ss;
while(second<str.size()){
    while(distinct&&second<str.size()){
        if(store[str[second]]==0)distinct--;

        store[str[second]]++;
        second++;
    }

    int temp=second-first;
    if(temp<len){
        len=temp;
        ss=str.substr(first,second-1);
    }

    while(distinct!=1){
        int temp=second-first;
        if(temp<len){
            len=temp;
            ss=str.substr(first,second-1);
        }
        store[str[first]]--;
        if(store[str[first]]==0)distinct++;

        first++;
    }
}
cout<<len<<endl;
cout<<ss<<endl;

return 0;
}
