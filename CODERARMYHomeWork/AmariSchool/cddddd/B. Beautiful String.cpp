#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string& str) {
        int left = 0;
        int right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
int main(){
    int t;cin>>t;while(t--){
     int n;cin>>n;
     string str;
     cin>>str;
     vector<int>ans;
     if(isPalindrome(str)){
        cout<<0<<endl<<endl;
        continue;

     }
     else{
       for(int i=0;i<str.size();i++){
        if(str[i]=='0')ans.push_back(i+1);
       }
       cout<<ans.size()<<endl;
       for(auto &it:ans)cout<<it<<" ";
       cout<<endl;

       }

    }
return 0;
}

