#include<bits/stdc++.h>
using namespace std;
int  Minimum(int arr[],int index){
 if(index==0)return arr[index] ;
 return min(arr[index], Minimum(arr,index-1));

}
int main(){
int arr[]={12,6,23,15,33};
int n=5;
cout<<"Minimum element of array:"<<Minimum(arr,n-1)<<endl;

return 0;
}

