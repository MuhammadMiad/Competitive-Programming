#include<bits/stdc++.h>
using namespace std;
void Reverse(string &str,int low,int high){
 if(low>=high)return;
 swap(str[low],str[high]);
 return Reverse(str,low+1,high-1);
}
int main(){
    string str;
    cin>>str;
    cout<<"Before Reversing String:"<<str<<endl;
    Reverse(str,0,str.size()-1);
    cout<<"After Reversing  String:"<<str<<endl;


return 0;
}
