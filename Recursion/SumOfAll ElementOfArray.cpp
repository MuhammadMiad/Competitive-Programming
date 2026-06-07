#include<bits/stdc++.h>
using namespace std;
int  Array(int arr[],int index){
 if(index<0)return 0;

 return arr[index]+Array(arr,index-1);

}
int main(){
int arr[]={12,6,23,15,33};
int n=5;
cout<<"Sum of all element of array:"<<Array(arr,n-1)<<endl;

return 0;
}

