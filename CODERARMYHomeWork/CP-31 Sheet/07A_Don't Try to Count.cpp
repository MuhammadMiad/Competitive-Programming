//#include<bits/stdc++.h>
//using namespace std;
//bool Match(string temp,string s){
//    int n=temp.size(),m=s.size();
//    for(int i=0;i<n;i++){
//       int  first=i,second=0;
//       while(second<m){
//        if(temp[first]!=s[second])break;
//        else first++,second++;
//       }
//       if(second==m)return 1;
//    }
//return 0;
//
//}
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        string x,s;
//        cin>>x>>s;
//        if(x==s)cout<<0<<endl;
//        else{
//            string temp;
//            temp=x;
//            int repeat=0;
//            while(temp.size()<s.size()){
//                temp+=temp;
//                repeat++;
//            }
//            int flag=0;
//            if(Match(temp,s)==1){
//                cout<<repeat<<endl;
//                flag=1;
//            }
//            else{
//                temp+=temp;
//                if(Match(temp,s)==1){
//                        cout<<repeat+1<<endl;
//                        flag=1;
//                }
//
//            }
//            if(flag==0)cout<<-1<<endl;
//
//
//        }
//
//    }
//
//
//return 0;
//}
#include<bits/stdc++.h>
using namespace std;
void LPS(vector<int>&lps,string s){
 int pre=0,suf=1;
 while(suf<s.size()){
  ///matched
  if(s[pre]==s[suf]){
    lps[suf]=pre+1;
    suf++,pre++;
  }
  ///Not Matched
  else{
     if(pre==0){
        lps[suf]=0;
        suf++;
     }
     else{
        pre=lps[pre-1];
     }
  }
 }
}
bool Match(string temp,string s){
 vector<int>lps(s.size(),0);
 LPS(lps,s);
 int first=0,second=0;
 while(first<temp.size() and second<s.size()){
    if(temp[first]==s[second]){
        first++,second++;
    }
    else{
        if(second==0)first++;
        else second=lps[second-1];
    }
    if(second==s.size()){
        return 1;
        break;
    }
 }
 return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        if(x==s)cout<<0<<endl;
        else{
            string temp;
            temp=x;
            int repeat=0;
            while(temp.size()<s.size()){
                temp+=temp;
                repeat++;
            }
            int flag=0;
            if(Match(temp,s)==1){
                cout<<repeat<<endl;
                flag=1;
            }
            else{
                temp+=temp;
                if(Match(temp,s)==1){
                        cout<<repeat+1<<endl;
                        flag=1;
                }

            }
            if(flag==0)cout<<-1<<endl;


        }

    }


return 0;
}
