#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];
 stack<int>st;
 st.push(-1);
 for(int i=0;i<n;i++){
        //cout<<arr[i]<<endl;
    if(st.empty()){
        st.push(arr[i]);
    }
    else if(st.size()>0 and st.top()!=arr[i]){
        st.push(arr[i]);
    }
    else{
        int x=arr[i];
        while(st.top()==x){
            st.pop();
            x++;
          }
        st.push(x);
    }
 }
 cout<<st.size()-1<<endl;



return 0;
}
