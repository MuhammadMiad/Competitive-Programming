#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        vector<int>arr(r-l+1);
        for(int i=0; i<r-l+1; i++)cin>>arr[i];

       vector<bitset<18>>initBit(r+1);
       vector<bitset<18>>targetBit(r+1);
        for(int i=0;i<r+1;i++){ /// if l allways zero
            bitset<18>B(arr[i]);
            initBit[i]=B;
            bitset<18>i_B(i);
            targetBit[i]=i_B;
        }
        bitset<18>ansbit(0);
        for(int bit=0;bit<=17;bit++){
            int initCnt=0,targetCnt=0;
            for(int j=0;j<r+1;j++){
                if(initBit[j][bit])initCnt++;
            }
             for(int j=0;j<r+1;j++){
                if(targetBit[j][bit])targetCnt++;
            }

            if(initCnt!=targetCnt)ansbit[bit]=1;
        }

        int ans=ansbit.to_ulong();

        cout<<ans<<endl;
    }


    return 0;
}
