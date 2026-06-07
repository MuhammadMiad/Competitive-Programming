#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
string s;
cin>>n;
while(1){
    n++;
    s=to_string(n);
    set<char>st;
    for(int i=0;i<4;i++){
        st.insert(s[i]);
    }
if(st.size()==4){
    cout<<n<<endl;
 break;

}

}

return 0;
}
