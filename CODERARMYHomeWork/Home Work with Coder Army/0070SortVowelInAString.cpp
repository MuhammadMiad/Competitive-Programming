#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            lower[str[i]-'a']++;
            str[i]='#';
        }

        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            upper[str[i]-'A']++;
            str[i]='#';
        }

    }
    string lo,up;
    for(int i=0;i<26;i++){
        char ch='a'+i;
        while(lower[i]--){
            lo+=ch;
        }
        char ch1='A'+i;
        while(upper[i]--){
            up+=ch1;
        }
    }
    int index=0;
    int i=0;
    while(index<up.size()){
        if(str[i]=='#')str[i]=up[index++];
        i++;
    }
    i=0;
    index=0;
    while(index<lo.size()){
        if(str[i]=='#')str[i]=lo[index++];
        i++;
    }
    cout<<str<<endl;

return 0;
}
