#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y,z;
    vector<vector<int>>ans;
    for(x=0; x<=n; x++)
        for( y=0; y<=n; y++)
            for(z=0; z<=n; z++)
            {
                if(x+y+z<=n)
                {
                    ans.push_back({x,y,z});
                }
            }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
