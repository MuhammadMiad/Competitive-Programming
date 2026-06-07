#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  n;
    cin>>n;
 set<char>st;
 for(int i=0;i<n.size();i++){
    st.insert(n[i]);
 }

    if( st.size()%2==1 ){
             cout<<"IGNORE HIM!"<<endl;
    }

    else cout<<"CHAT WITH HER!"<<endl;

return 0;
}
