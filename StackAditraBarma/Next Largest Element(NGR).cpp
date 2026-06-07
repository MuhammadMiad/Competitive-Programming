#include<bits/stdc++.h>
using namespace std;
void NGR(int arr[],int n){
     vector<int>v;
     stack<int>st;
     for(int i=n-1;i>=0;i--){
        if(st.size()==0){
            v.push_back(-1);
        }
        else if(st.size()>0&&st.top()>arr[i]){
            v.push_back(st.top());
        }
        else if(st.size()>0&&st.top()<=arr[i]){
            while(st.size()&&st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()==0){
            v.push_back(-1);
           }
           else{
            v.push_back(st.top());
           }
        }
        st.push(arr[i]);
     }

     for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<< " ";
     }
     cout<<endl;

}
int main(){

int arr[]={4,5,2,25 };
int n=sizeof(arr)/sizeof(arr[0]);
NGR(arr,n);

return 0;
}
