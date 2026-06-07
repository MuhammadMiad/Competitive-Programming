#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,cou=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>k;
    arr[i]=k;

}

for(int i=0;i<n;i++){
    if(arr[i]!=arr[i+1]){
        cou++;
    }


}
cout<<cou<<endl;


return 0;
}
