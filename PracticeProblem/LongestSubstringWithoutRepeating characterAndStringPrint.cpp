#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout<<"Enter String:"<<endl;
cin>>str;

vector<int>store(256,0);
int first=0,second=0;
string ss;
int len=-1;
while(second<str.size()){
    while(store[str[second]]){
        store[str[first]]=0;
        first++;
    }
     store[str[second]]=1;
     int temp=second-first+1;

     if(len<temp){
        len=temp;
        ss="";
        for(int i=first;i<=second;i++){
            ss+=str[i];
        }
       // ss=str.substr(first,second);
     }
     second++;

}
cout<<"Length:"<<len<<endl;
cout<<"String: "<<ss<<endl;
return 0;
}
