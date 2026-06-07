#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<char>arr;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]=='n' and str[i+1]=='a'){
            arr.push_back(str[i]);
            arr.push_back('y');
            arr.push_back(str[i+1]);
            i++;
        }
        else arr.push_back(str[i]);
    }
    if(str[n-2]!='n' || str[n-1]!='a')arr.push_back(str[n-1]);
    for(auto it:arr)cout<<it;
    cout<<endl;

return 0;
}
