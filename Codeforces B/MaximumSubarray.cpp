#include<bits/stdc++.h>
using namespace std;
int maxMidArraySum(int arr[],int l,int m,int h){
 int suml,sumr;
 suml,sumr=INT_MIN;
 int sum=0;
 for(int i=m+1;i<=h;i++){
        sum+=arr[i];
    if(sum>sumr)sumr=sum;
 }
  sum=0;
 for(int i=m;i>=l;i--){
     sum+=arr[i];
    if(sum>suml)suml=sum;
 }
 return (suml+sumr);
}
int maxSubArraySum(int arr[],int low,int high) {
        if(low ==high)return arr[low];
        int mid=(low+high)/2;
        int leftsum=maxSubArraySum(arr,low,mid);
        int rightsum=maxSubArraySum(arr,mid+1,high);
        int midsum=maxMidArraySum(arr,low,mid,high);

        return max(leftsum,max(rightsum,midsum));
    }
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
cout<<maxSubArraySum(arr,0,n-1)<<endl;


}




