//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    map<int,int>mp;
//    vector<int>arr;
//    int x;
//    while(cin>>x){
//        mp[x]++;
//        arr.push_back(x);
//    }
//    for(auto &p:arr){
//        if(mp[p]==0)continue;
//        cout<<p<<" "<<mp[p]<<endl;
//        mp[p]=0;
//    }
//
//return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int, int> freq;   // to count occurrences
    vector<int> order;              // to preserve input order
    int num;

    // Read all integers until EOF
    while (cin >> num) {
        if (freq.find(num) == freq.end()) {
            order.push_back(num);   // first time seeing this number
        }
        freq[num]++;                // count occurrences
    }

    // Output in the order of first appearance
    for (int val : order) {
        cout << val << " " << freq[val] << "\n";
    }

    return 0;
}
