#include<iostream>
using namespace std;
int main(){
    int n1,n2,c=0;
    cin>>n1>>n2;
    int arr[100];
for(int i=0;i<n1;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n1;i++){
        if((arr[i]>arr[n1-1])&&arr[i]>0){
            c++;
        }

    }

cout<<c<<endl;
return 0;
}
