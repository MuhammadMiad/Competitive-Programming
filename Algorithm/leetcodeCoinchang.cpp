//#include<bits/stdc++.h>
//using namespace std;
//int coinChange(vector<int>&coins, int amount) {
//           sort(coins.begin(),coins.end());
//           reverse(coins.begin(),coins.end());
//        int rem=amount;
//        int totalcoin=0;
//        int sum=0;
//        for(int i=0;i<coins.size();i++){
//            int x=rem/coins[i];
//            totalcoin+=x;
//            rem-=(x*coins[i]);
//            sum+=(x*coins[i]);
//        }
//        if(sum==amount)return totalcoin;
//        else return -1;
//
//    }
//int main(){
//    vector<int>coins;
//    int a=6249;
//    coins.push_back(186);
//    coins.push_back(419);
//    coins.push_back(83);
//    coins.push_back(408);
//
//    cout<< coinChange(coins,a)<<endl;
//
//
//
//return 0;
//}


#include <bits/stdc++.h>
using namespace std;


int coinChangeHelper(vector < int > & coins, int start,int amount) {


   //  Base Case
   if (start > coins.size()-1) {
       if (amount == 0) {
           return 0;
       }
       return -1;
   }


   // If amount is negative
   if (amount < 0) {
       return -1;
   }


   // Recursive calls
   int ans1 = coinChangeHelper(coins, start, amount - coins[start]);
   int ans2 = coinChangeHelper(coins, start + 1,  amount);

   if (ans1 != -1 && ans2 != -1) {
       return min(ans1 + 1, ans2);
   }


   // If we cannot achieve that amount through recursive call 1
   if (ans1 == -1) {
       return ans2;
   }


   // If we cannot achieve that amount through recursive call 2
   if (ans2 == -1) {
       return (ans1 + 1);
   }


   return -1;
}


int coinChange(vector < int > & coins, int amount) {
   return coinChangeHelper(coins, 0, amount);
}


int main() {
   vector < int > coins={186,419,83,408};


   int amount=6249;


   // Calling the function
   cout << coinChange(coins, amount);
   return 0;
}
