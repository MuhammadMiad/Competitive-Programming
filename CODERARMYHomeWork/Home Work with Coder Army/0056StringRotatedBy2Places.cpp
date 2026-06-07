#include<bits/stdc++.h>
using namespace std;
void rotateAnticlock(string &s){
    char ch=s[s.size()-1];
    int n=s.size()-2;
    while(n>=0){
        s[n+1]=s[n];
        n--;
    }
    s[0]=ch;
}
void rotateClock(string &s){
char ch=s[0];
int n=s.size();
int i=1;
while(i<n){
    s[i-1]=s[i];
    i++;
}
s[n-1]=ch;


}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    string clock=str2,anticlock=str2;
    rotateAnticlock(anticlock);
    rotateAnticlock(anticlock);
    if(anticlock==str1){
        cout<<"YES"<<endl;
        return 0;
    }
    rotateClock(clock);
    rotateClock(clock);
    if(clock==str1){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
return 0;
}
