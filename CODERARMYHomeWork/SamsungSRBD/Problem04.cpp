#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        string s,ss;
        s+=str[0];
        s+=str[1];
        ss+=str[3];
        ss+=str[4];
        int h=stoi(s);
        int m=stoi(ss);
        if(h==0 and m==0)cout<<"00"<<":"<<"00"<<endl;
        else if(h<11){
                cout<<"11"<<":"<<"11"<<endl;
        }
        else if(h<22){
            if(h==11 and m<11)cout<<"11"<<":"<<"11"<<endl;
            else cout<<"22"<<":"<<"22"<<endl;
        }
        else{
           if(h==22 and m<22)cout<<"22"<<":"<<"22"<<endl;
           else cout<<"00"<<":"<<"00"<<endl;
        }



    }


    return 0;
}
