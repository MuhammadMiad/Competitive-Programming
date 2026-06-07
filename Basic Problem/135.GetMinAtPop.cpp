#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,6,3,4,1,2,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    stack<int>st;
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        st.push(arr[i]);
    }
    int Mn=INT_MAX;
    while(!st.empty()){
        Mn=min(Mn,st.top());
        st.pop();
        s.push(Mn);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

return 0;
}
