#include<bits/stdc++.h>
using namespace std;
///Method--1 T.C:O(n2),O(n)
//int timeRequiredToBuy(vector<int>& tickets, int k) {
//        queue<int>q;
//        int n=tickets.size();
//        for(int i=0;i<n;i++)q.push(i);
//
//        int Time=0;
//        while(tickets[k]!=0){
//            tickets[q.front()]--;
//            if(tickets[q.front()]){
//                q.push(q.front());
//            }
//                q.pop();
//                Time++;
//
//        }
//        return Time;
//    }

///Method -2 T.C:O(n)
int timeRequiredToBuy(vector<int>&tickets, int k){
   int time =0;
   for(int i=0;i<=k;i++){
    time+=min(tickets[k],tickets[i]);
   }
   for(int i=k+1;i<tickets.size();i++){
    time+=min(tickets[k]-1,tickets[i]);
   }
   return time;
}
int main()
{
    vector<int>v={2,3,4,3,5};
    int k=2;
    int ans=timeRequiredToBuy(v,k);
    cout<<"Time Needed To Buy Tickets:"<<ans<<endl;
    return 0;
}



