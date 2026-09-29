#include<bits/stdc++.h>
using namespace std;
void solve(){
            int n;char c;
            cin>>n>>c;
         string str;cin>>str;
         int i=0,j=n-1;
         int cnt=0;
         while(i<j){
            if(str[i]!=str[j]){
                if(str[i]!=c)cnt++;
                if(str[j]!=c)cnt++;
            }
            i++,j--;
         }


         cout<<cnt<<endl;

}
int main(){
int t;cin>>t;while(t--)solve();


}
