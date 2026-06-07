#include<bits/stdc++.h>
using namespace std;
string Add(string num1, string num2) {
        int index1 = num1.size()-1;
        int index2 = num2.size()-1;
        int carray = 0;
        string ans;
        while (index1>=0) {
            int sum=(num1[index1]-'0')+(num2[index2]-'0')+carray;
            carray = sum / 10;
            ans +='0'+sum%10;
            index2--;
            index1--;
        }
        while (index2>= 0) {
            int sum =num2[index2]-'0'+carray;
            carray=sum/10;
            ans+='0'+sum%10;
            index2--;
        }
        if(carray)ans+='1';

        reverse(ans.begin(), ans.end());
        return ans;
    }
int main(){
    string num1,num2;
   cout<<"Enter First Number:"<<endl;
   cin>>num1;
   cout<<"Enter Second Number:"<<endl;
   cin>>num2;
 //string  num1 = "456", num2 = "77";
if(num1.size()>num2.size()){
    cout<<"After Adding "<<num1<<" and "<<num2<<" = "<<Add(num2,num1)<<endl;
}
else{
   cout<<"After Adding "<<num2<<" and "<<num1<<" = "<<Add(num1,num2)<<endl;
}
return 0;
}
