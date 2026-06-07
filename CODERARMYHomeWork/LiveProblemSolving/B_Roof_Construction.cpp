#include<bits/stdc++.h>
using namespace std;
int check(int x){
    return log2(x);
}
void solve(){
     int n;cin>>n;
        if(n==2){
            cout<<1<<" "<<0<<endl;
            return;
        }
        else{
            int current_value=n-1;
            while(current_value>1){
                cout<<current_value<<" ";
                if(check(current_value)!=check(current_value-1)){
                    break;
                }
 
                current_value--;
            }
            for(int i=0;i<current_value;i++)cout<<i<<" ";
            cout<<endl;
        }
   
}
int main(){
    int t;cin>>t;while(t--)solve();
    return 0;
}