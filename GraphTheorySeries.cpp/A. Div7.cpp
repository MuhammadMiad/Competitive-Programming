#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    string s;
    cin>>s;
    int q=stoi(s);
    if(q%7==0){
       cout<<q<<endl;
    }
    else{
          for(int i=s.size()-1;i>=0;i--){
        int x=int (s[i])-'0';
        if(x%7!=0){
            while(x%7!=0){
                x++;
            }
           v.push_back(x);
            break;
        }
    v.push_back(x);
    }

    }
    if(q%7!=0){
         for(int i=v.size()-1;i>=0;i--){
    cout<<v[i];
}
cout<<endl;

    }
    v.clear();

}

return 0;
}
