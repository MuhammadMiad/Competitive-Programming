#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v;
while(n--){
    int k;
    cin>>k;
    int c=0;
    int p=k;
    while(p>0){
        p/=10;
        c++;
    }
    int r=k%10;
    int d=(r-1)*10;
    for(int i=1;i<=c;i++){
        d+=i;
    }
    v.push_back(d);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
