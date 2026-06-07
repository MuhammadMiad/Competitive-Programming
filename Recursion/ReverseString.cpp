#include<bits/stdc++.h>
using namespace std;
void Reverse(string &str,int start,int End){
 if(start>=End)return ;
 swap(str[start],str[End]);
 Reverse(str,start+1,End-1);

}
int main(){
string str;
getline(cin,str);
Reverse(str,0,str.size()-1);
cout<<"Reverse String :"<<str<<endl;


return 0;
}

