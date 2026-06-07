//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        if(n%7==0){
//            cout<<n<<endl;
//            continue;
//        }
//        int x,y;
//        x=n%7;
//        y=(7-x);
//        int num1,num2;
//        num1=n-x;
//        num2=n+y;
//        string sn1,sn2,so;
//        so=to_string(n);
//        sn1=to_string(num1);
//        sn2=to_string(num2);
//        int cnt1=0,cnt2=0;
//        for(int i=0;i<so.size();i++){
//            if(so[i]!=sn1[i])cnt1++;
//        }
//        for(int i=0;i<so.size();i++){
//            if(so[i]!=sn2[i])cnt2++;
//        }
//        if(cnt1<cnt2)cout<<num1<<endl;
//        else cout<<num2<<endl;
//    }
//
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
        if(n%7==0)v.push_back(n);
        else{
            int x=7-(n%7);
            if(x+n%10<10)
            v.push_back(n+x);
            else v.push_back(n-n%7);
        }
    }
  for(int it:v)cout<<it<<endl;
return 0;
}

