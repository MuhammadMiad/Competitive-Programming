#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int c=6;
        while(next_permutation(begin(str),end(str))){
            cout<<str<<endl;
        }
 vector<int>arr={1,2,3};
 while(next_permutation(begin(arr),end(arr))){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }



return 0;
}
