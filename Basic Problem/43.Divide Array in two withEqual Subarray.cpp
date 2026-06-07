#include<bits/stdc++.h>
using namespace std;
bool canSplit(vector<int>&arr) {

        int totalsum=0;
        for(int i=0;i<arr.size();i++)totalsum+=arr[i];

        int prefix=0;
        for(int i=0;i<arr.size()-1;i++){
            prefix+=arr[i];
            int ans=0;
            ans=totalsum-prefix;
            if(ans==prefix)
            return true;
        }
         return false;
    }
int main(){
 vector<int>arr={1,2,3,4,5,5};
 if(canSplit(arr))cout<<"True,Equal sum possible."<<endl;
 else cout<<"NO.Equal Sum Not Possible."<<endl;

return 0;
}
