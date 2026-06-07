#include<bits/stdc++.h>
using namespace std;
string s1="";
vector<string>v;
void StringRev(string s){
for(int i=s.size()-1;i>=0;i--){
      s1+=s[i];
}
v.push_back(s1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s="";
        cin>>n;

        int carr=n/26;
        if(carr>0){
            for(int i=0;i<carr;i++){
                    if(carr==1&&(n%26<2)){
                        if(n%26==1) {
                            char x=96+(n-2);
                            s+=x;
                            s+="aa";
                        }
                        else if(n%26==0){
                              char x=96+(n-2);
                            s+=x;
                            s+="aa";
                        }


                    }
                     else if(carr==2&&(n%26==0)){
                               s+='z';
                               s+='y';
                             s+='a';
                         break;
                        }
                    else  s+='z';
            }
            if(carr==1&&n%26>=2) {
                char x=96+((n%26)-1);
                s+=x;
                s+='a';
            }
          else if(carr==2&&n%26>=1) {
                char x=96+(n%26);
                s+=x;

            }


        }
        else if(carr==0){
                n-=2;
            char x=96+n;
          s+=x;
          s+="aa";
        }
    StringRev(s);

   s="";
   s1="";

    }

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
