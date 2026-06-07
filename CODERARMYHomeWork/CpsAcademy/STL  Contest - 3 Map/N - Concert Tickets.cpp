#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, m;
	cin >> n >> m;
	map < int, int > cnt;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		cnt[x]++;
	}
	for (int i = 0, x; i < m; i++) {
		cin >> x;
		auto it = cnt.upper_bound(x);
		if(it==cnt.begin())cout<<"YES"<<endl;
		cout<<it->first<<" "<<it->second<<endl;

	}
}
