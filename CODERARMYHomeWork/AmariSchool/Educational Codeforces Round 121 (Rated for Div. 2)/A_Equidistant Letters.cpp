#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        sort(begin(str),end(str));
        cout<<str<<endl;
    }

return 0;
}
