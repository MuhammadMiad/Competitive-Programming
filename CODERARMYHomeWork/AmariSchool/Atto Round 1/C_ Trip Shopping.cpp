#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;

        int count = 0;

        for (int i = 0; i < n; ++i) {
            int dx, dy;
            long long x, y;
            cin >> dx >> dy >> x >> y;

            long long x_dist,y_dist;
            if(dx==1)x_dist=s-x;
            else x_dist=x;

            if(dy==1)y_dist=s-y;
            else y_dist=y;
            if (x_dist == y_dist) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
