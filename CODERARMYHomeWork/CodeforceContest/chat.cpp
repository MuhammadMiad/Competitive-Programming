#include<bits/stdc++.h>
using namespace std;
long long prefixMinSum(vector<int>&a) {
    long long sum = 0;
    int Min = a[0];
    sum+=Min;
    for (int i=1;i<a.size();i++) {
        Min=min(Min,a[i]);
        sum+=Min;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long minSum = prefixMinSum(a);

        for (int i=0;i<n;i++) {
            for (int j= i+1;j<n;j++) {
                vector<int>b=a;
                b[i]+=b[j];
                b[j]=0;
                minSum=min(minSum,prefixMinSum(b));
            }
        }

        cout << minSum <<endl;
    }
    return 0;
}
