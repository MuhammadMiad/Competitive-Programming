#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    for(int i=0;i<s1.size();i++){
        char ch1=tolower(s1[i]);
        char ch2=tolower(s2[i]);

        if(ch1>ch2){
          cnt=1;
          break;
        }
        else if(ch1<ch2){
            cnt=-1;
            break;
        }
    }
    cout<<cnt<<endl;

return 0;
}
