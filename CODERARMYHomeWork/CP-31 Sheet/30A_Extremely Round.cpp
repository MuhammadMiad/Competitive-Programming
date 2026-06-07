#include<bits/stdc++.h>
using namespace std;
int main(){
//    int arr[]={1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,20000,30000,40000,50000,60000,70000,80000,90000,100000,200000,300000,400000,500000,600000,700000,800000,900000};
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        string str=to_string(n);
//        for(int i=1;i<str.size();i++){
//            str[i]='0';
//        }
//        int x=stoi(str);
//        for(int i=0;i<54;i++){
//            if(arr[i]==x){
//                cout<<i+1<<endl;
//                break;
//            }
//        }
//    }

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(i<=9)cnt++;
        else{
            string str=to_string(i);
            int c=0;
            for(int j=0;j<str.size();j++){
                if(str[j]!='0')c++;
            }
            if(c==1)cnt++;
        }
    }
    cout<<cnt<<endl;
}

return 0;
}
