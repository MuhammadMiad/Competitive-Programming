#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>v;
    while(t--)
    {

        string s,s1="";
        cin>>s;
        int ans=(s[0]-'0');
        ans=ans*10+(s[1]-'0');

        if(ans>12)
        {
            int h=(ans-12);
            if(h<10)
            {
                s1="0"+to_string(h)+s[2]+s[3]+s[4]+" PM";
                v.push_back(s1);
                // cout<<'0'<<h<<s[2]<<s[3]<<s[4]<<"PM"<<endl;
            }

            else
            {
                s1=to_string(h)+s[2]+s[3]+s[4]+" PM";
                v.push_back(s1);
                // cout<<h<<s[2]<<s[3]<<s[4]<<"PM"<<endl;
            }



        }
        else if(ans==0)
        {
            s1=to_string(12)+s[2]+s[3]+s[4]+" AM";
            v.push_back(s1);
        }
        else if(ans==12)
        {
            s1=to_string(12)+s[2]+s[3]+s[4]+" PM";
            v.push_back(s1);
            //  cout<<12<<s[2]<<s[3]<<s[4]<<"PM"<<endl;
        }

        else
        {
            if(ans>9)
            {
                s1=to_string(ans)+s[2]+s[3]+s[4]+" AM";
                v.push_back(s1);
                //  cout<<ans<<s[2]<<s[3]<<s[4]<<"AM"<<endl;
            }

            else
            {
                s1="0"+to_string(ans)+s[2]+s[3]+s[4]+" AM";
                v.push_back(s1);
                //  cout<<'0'<<ans<<s[2]<<s[3]<<s[4]<<"AM"<<endl;
            }

        }


    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
