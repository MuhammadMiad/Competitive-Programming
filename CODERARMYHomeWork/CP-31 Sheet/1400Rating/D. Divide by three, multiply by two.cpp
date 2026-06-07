#include<bits/stdc++.h>
using namespace std;
#define check 1.5*1e18
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    unordered_set<ll>st;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    ll cn;
    vector<ll>ans;
    ll val;
    for(int i=0; i<n; i++)
    {
        val=arr[i];
        st.clear();
        for(int j=0; j<n; j++)
        {
            if(i!=j)st.insert(arr[j]);
        }
        cn=n-1;
        while(cn--)
        {

            if(val<=check and st.count(val*2))
            {
                ans.push_back(val);
                val=val*2;
                st.erase(val);
            }
            else if(st.count(val/3))
            {
                ans.push_back(val);
                val=val/3;
                st.erase(val);
            }
            else break;

        }
        if(ans.size()==n-1)break;
        else ans.clear();
    }
    ans.push_back(val);

    for(auto &p:ans)cout<<p<<" ";
    cout<<endl;


    return 0;
}
