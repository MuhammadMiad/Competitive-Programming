#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2){
            cout<<n<<endl;
            continue;
        }
        string str;
        int i=1;
        while(n>0){
            if(i%2){
                n--;
                n--;
                str+='2';
            }
            else{
                n--;
                str+='1';
            }
            if(n==-1){
                str.pop_back();
                string s=str;
                str.clear();
                str+='1';
                str+=s;
            }
            i++;
        }
        cout<<str<<endl;
    }

return 0;
}
