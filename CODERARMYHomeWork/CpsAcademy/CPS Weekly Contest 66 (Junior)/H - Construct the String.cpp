#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,a,b;cin>>n>>a>>b;
        string str;
        if(a==b){
            for(int i=0;i<a;i++){
                char ch='a'+i;
                str+=ch;
            }
        }
        else{
            int sam=a-b+1;
            int un=a-sam;
            for(int i=0;i<un;i++){
                char ch='a'+i;
                str+=ch;
            }
            str=str+string(sam,'z');

        }
        int i=0;
        while(i<n){
            cout<<str[i%a];
            i++;
        }
        cout<<endl;



    }

return 0;
}
