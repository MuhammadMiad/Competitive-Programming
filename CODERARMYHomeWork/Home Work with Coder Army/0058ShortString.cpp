#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>arr(26,0);
    for(int i=0;i<str.size();i++){
        arr[str[i]-'a']++;
    }
    int i=0;
    while(i<26){
        char ch='a'+i;
        while(arr[i]--){
            cout<<ch;
        }
        i++;
    }



return 0;
}
