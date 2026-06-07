#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<string >v;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,odd=0,even=0;
    for(int i=0;i<n;i++){

            sum+=arr[i];
            if(arr[i]%2==1){
                odd++;
            }else even++;

    }
    if(sum%2==1){
        v.push_back("YES");
    }
    else if(odd>0&&even>0){
        v.push_back("YES");
    }
    else v.push_back("NO");
}
for(int i=0;i<v.size();i++){

        cout<<v[i]<<endl;

}

return 0;
}
