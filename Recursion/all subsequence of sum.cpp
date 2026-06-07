//#include<bits/stdc++.h>
//using namespace std;
//void PrintS(int i,vector<int>&ds,int s,int sum,int arr[],int n){
//if(n==i){
//        if(sum==s){
//            for(auto it:ds)cout<<it<<" ";
//            cout<<endl;
//    }
//
//    return ;
//}
//ds.push_back(arr[i]);
//s+=arr[i];
//PrintS(i+1,ds,s,sum,arr,n);
//s-=arr[i];
//ds.pop_back();
//PrintS(i+1,ds,s,sum,arr,n);
//}
//int main(){
//int arr[]={1,1,2};
//int n=3;
//int sum=2;
//vector<int>ds;
//PrintS(0,ds,0,sum,arr,n);
//
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int PrintS(int i,int s,int sum,int arr[],int n){
if(n==i){
    if(sum==s){
     return 1;
    }
    else return 0;
}
s+=arr[i];
int l=PrintS(i+1,s,sum,arr,n);
s-=arr[i];
int r=PrintS(i+1,s,sum,arr,n);

return l+r;
}
int main(){
int arr[]={1,1,2};
int n=3;
int sum=2;
cout<<"Number of subsequence that sum: "<<PrintS(0,0,sum,arr,n)<<endl;

return 0;
}



