#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[],int n,int k){
      priority_queue<int>pq;
      for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k)pq.pop();

      }
      return pq.top();
}
int main(){
 int arr[] = { 12, 3, 5, 7, 19 };
 int k=4;
 int n=sizeof(arr)/sizeof(arr[0]);
 int ans=kthSmallest(arr,n,k);
 cout<<k<<" th smallest element: "<<ans<<endl;

return 0;
}
