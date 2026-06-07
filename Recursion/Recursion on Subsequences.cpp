#include<bits/stdc++.h>
using namespace std;
void PrintF(int i,vector<int>&ds,int arr[],int n){
if(n==i){
    for(auto it:ds){
        cout<<it<<" ";
    }
    if(ds.size()==0)cout<<"{}";
    cout<<endl;
    return ;
}
PrintF(i+1,ds,arr,n);
ds.push_back(arr[i]);
PrintF(i+1,ds,arr,n);
ds.pop_back();

}
int main(){
int arr[]={3,1,2};
int n=3;
vector<int>ds;
PrintF(0,ds,arr,n);

return 0;
}
