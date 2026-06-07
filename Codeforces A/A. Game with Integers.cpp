#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    if(n%3==0){
        v.push_back(2);
    }
    else{
            int m=0,co=0;
        while(m>=0){
                co++;
            n++;
            if(n%3==0){
                     v.push_back(1);
                break;
            }
            else if(co==10){
                    v.push_back(2);
                break;
            }
            m++;
        }
    }
}
for(int i=0;i<v.size();i++){
    if(v[i]==1){
        cout<<"First"<<endl;
    }
    else
        cout<< "Second"<<endl;
}

return 0;
}
