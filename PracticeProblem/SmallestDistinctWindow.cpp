#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout<<"Enter String:"<<endl;
cin>>str;

vector<int>store(256,0);
int diff=0,first=0,second=0;
while(second<str.size()){
    if(store[str[second]]==0)diff++;

    store[str[second]]++;
    second++;
}
for(int i=0;i<store.size();i++){
    store[i]=0;
}

second=0;
int len=str.size(),temp;
string ss;
while(second<str.size()){

    while(diff&&second<str.size()){
        if(store[str[second]]==0){
            diff--;
        }
        store[str[second]]++;
        second++;
    }
     if(len>temp){
      len=temp;
      ss=str.substr(first,second-1);
     }
    while(diff!=1){
    temp=second-first;
    if(len>temp){
      len=temp;
      ss=str.substr(first,second-1);
     }
    store[str[first]]--;
    if(store[str[first]]==0)diff++;

     first++;
    }
}
cout<<"Length: "<<len<<endl;
cout<<"String: "<<ss<<endl;
return 0;
}
