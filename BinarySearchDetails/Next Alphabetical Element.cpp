#include<bits/stdc++.h>
using namespace std;
char NextAlpabet(char arr[],int n,char target){
int l=0;
int h=n-1;
char res=0;
if(arr[h]<target)return '#';
while(l<=h){
    int mid=l+(h-l)/2;
    if(arr[mid]==target)l=mid+1;
    else if(arr[mid]>target){
        res=arr[mid];
        h=mid-1;
    }
    else if(arr[mid]<target)l=mid+1;
}
return res;

}
int main(){
char arr[]={'c','d','f','k','n'};
char key='e';
int n=sizeof(arr)/sizeof(arr[0]);
char ans=NextAlpabet(arr,n,key);
cout<<ans<<endl;

return 0;
}
