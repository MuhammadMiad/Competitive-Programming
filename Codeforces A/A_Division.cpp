#include<bits/stdc++.h>
using namespace std;
int main (){
int t;
cin>>t;
vector<int>v;
while(t--){
        int n;
    cin>>n;
if(n >= 1900){
    v.push_back(1);
}
 else if (n >= 1600 && n <= 1899){
    v.push_back(2);
}
else if(1400 <= n&&n <= 1599 ) {
    v.push_back(3);
}
else if(n <=1399){
    v.push_back(4);
}

}
for(int i=0;i<v.size();i++){
    if(v[i]==1){
       cout<<"Division 1"<<endl;
    }
    else if(v[i]==2){
            cout<<"Division 2"<<endl;}
    else if(v[i]==3){
       cout<<"Division 3"<<endl;
    }
    else if(v[i]==4){
       cout<<"Division 4"<<endl;
    }


}

return 0;
}
