#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll num=n;
    ll cnt=0;
    set<int>st;
    while(num){
        cnt++;
        ll rem=num%10;
        st.insert(rem);
        num/=10;
    }
    if(cnt%2==1 || st.size()>1){
        cout<<0<<endl;
        continue;
    }
    int value;
    for(auto it:st)value=it;

    ll x=cnt/2;
    vector<int>v;
    v.push_back(x);
    for(int i=x-1;i>=1;i--){
        if(cnt%i==0){
           if((cnt/i)%2==0) v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        bool flag=true;
        int co=(cnt/v[i])-1;
        while(co--){
            if(flag){
             for(int j=0;j<v[i];j++)cout<<value;
             flag=!flag;
            }
            else{
              for(int j=0;j<v[i];j++)cout<<0;
               flag=!flag;
            }

        }
        cout<<" ";

        }
        cout<<endl;
    }


return 0;
}

