#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,p,k;
cin>>n;
cin>>p;
set<int>st;
for(int i=0;i<p;i++){
    cin>>k;
    st.insert(k);
}
cin>>a;
for(int i=0;i<a;i++){
        cin>>k;
    st.insert(k);
}
 if(st.size()==n)
    cout<< "I become the guy."<<endl;
else
    cout<<"Oh, my keyboard!" <<endl;



return 0;
}
