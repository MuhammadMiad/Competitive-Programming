#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>st;
    int x=n;
    while(n--){
       string str;
       cin>>str;
       st.push_back(str);
    }

    for(int i=x-1;i>=0;i--){
        cout<<st[i]<<endl;
    }


return 0;
}
