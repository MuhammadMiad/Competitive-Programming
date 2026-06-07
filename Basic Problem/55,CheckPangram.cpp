///approach-1 using set
///approach-2
#include<bits/stdc++.h>
using namespace std;
int main(){
string str="thequickbrownfoxjumpsoverthelazydog";
vector<bool>pangram(26,0);
int i=0;
while(i<str.size()){
    pangram[str[i]-'a']=1;
    i++;
}
for(int i=0;i<26;i++){
    if(pangram[i]==0){
        cout<<"It's not a Pangram."<<endl;
        return 0;
    }

}
 cout<<"It's a pangram."<<endl;
return 0;
}
