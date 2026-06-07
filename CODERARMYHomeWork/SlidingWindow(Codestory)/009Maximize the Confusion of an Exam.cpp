#include<bits/stdc++.h>
using namespace std;
 int maxConsecutiveAnswers(string answerKey, int k){
     int n=answerKey.size();
     int ans=0,cnt=0;

     ///Make Maximum True
     int F=0;
     int first=0;
     int second=0;
     while(second<n){
        if(answerKey[second]=='T')cnt++;
        else{
            cnt++;
            F++;
        }
        while(F>k){
            if(answerKey[first]=='T')cnt--;
            else{
                cnt--;
                F--;
            }
            first++;
        }
        ans=max(ans,cnt);
        second++;
     }

     ///Make maximum False
     int T=0;
      first=0;
      second=0;
      cnt=0;
     while(second<n){
        if(answerKey[second]=='F')cnt++;
        else{
            cnt++;
            T++;
        }
        while(T>k){
            if(answerKey[first]=='F')cnt--;
            else{
                cnt--;
                T--;
            }
            first++;
        }
        ans=max(ans,cnt);
        second++;
     }

     return ans;

    }
int main(){
    string str;int k;
    cin>>str>>k;

    int ans=maxConsecutiveAnswers(str,k);
    cout<<ans<<endl;

return 0;
}
