#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string str;
    cin>>str;
    int num=0,letter=0;
    string ss="";
    int flag=0;
    for(int i=0;i<str.size();i++){
        if(str[i]>='0' and str[i]<='9'){
            num++;
            ss+=str[i];
        }
        else{
            letter++;
        }
    }
    if(letter==2 and num==6){
        int value=stoi(ss)/100000;
        if(value>0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;

return 0;
}
