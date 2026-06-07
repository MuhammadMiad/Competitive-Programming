#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n =stoi(s);
    if(n%7==0){
       // v.push_back(n);
       cout<<n<<endl;
    }
    else{
         int p=0;
        while(1){
                p++;

         if(stoi(s[s.size()-1])<=9){
               s[s.size()-1]++;
         if(stoi(s)%7==0) {
            cout<<s<<endl;
            break;
         }
         }

        }
    }



  }


return 0;
}
