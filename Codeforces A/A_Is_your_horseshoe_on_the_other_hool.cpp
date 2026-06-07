#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[4];
    set<int>st;
    for(int i=0;i<4;i++){
            cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<4;i++){
    st.insert(arr[i]);
    }
    cout<<4-st.size()<<endl;

return 0;
}
