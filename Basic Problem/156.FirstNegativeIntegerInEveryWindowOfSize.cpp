#include<bits/stdc++.h>
using namespace std;
int Display(queue<int>q){
    while(!q.empty()){
         if(q.front()<0)return q.front();
        q.pop();
    }
    return 0;
}
int main(){
int arr[]={-8,2,3,-6,10};
int n=sizeof(arr)/sizeof(arr[0]);  ///TimeComplexity:O(n*k)And Space Com:O(k)
int k=2;
queue<int>q;
for(int i=0;i<k-1;i++){
    q.push(arr[i]);
}
vector<int>ans;
for(int i=k-1;i<n;i++){
    q.push(arr[i]);
   ans.push_back(Display(q));
     q.pop();
 }
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}

