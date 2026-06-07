#include<bits/stdc++.h>
using namespace std;
int Search(int arr[4][4],int n,int key){
 int l=0;
 int r=n-1;
 while(l<n&&r>=0){
    if(arr[l][r]==key){
        cout<<"Find Value:"<<l<<" "<<r<<endl;
        return 0;
    }
    else if(arr[l][r]>key)r--;
    else l++;
 }
 cout<<"Not found"<<endl;

}
int main(){
int arr[4][4]={{10,20,30,40},
               {15,25,35,45},
               {27,29,37,48},
               {32,33,39,50}
                };
   int key=29;
  Search(arr,4,key);

return 0;
}
