#include<bits/stdc++.h>
using namespace std;
string shiftingLetters(string s, vector<vector<int>>& shifts) {
     for(auto &it:shifts){
        int start=it[0];
        int end=it[1];
        int direc=it[2];

        if(direc==0){
            (s[start]=='a'?s[start]='z':s[start]--);
            (s[end]=='a'?s[end]='z':s[end]--);

        }
        else{
            (s[start]=='z'?s[start]='a':s[start]++);
            (s[end]=='z'?s[end]='a':s[end]++);
        }
        cout<<s<<endl;
     }
     return s;
    }
int main(){
    int n;cin>>n;
    vector<vector<int>>arr(n,vector<int>(3));
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i][0]=a;
        arr[i][1]=c;
        arr[i][2]=c;

    }
    string str;
    cin>>str;
    cout<<shiftingLetters(str,arr)<<endl;


return 0;
}
