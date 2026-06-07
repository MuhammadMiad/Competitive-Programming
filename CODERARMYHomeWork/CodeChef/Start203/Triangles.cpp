//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int a,b;
//	cin>>a>>b;
//	cout<<180-(a+b)<<endl;
//return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
	cin>>a>>b;
	int pro=a*b;
	int h=pro/60;
	int m=pro%60;

	cout<<h<<" "<<m<<endl;
    }


	return 0;

}
