#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,7,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    int i=0;
    while(!st.empty()){
        arr[i]=st.top();
        st.pop(),i++;

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
