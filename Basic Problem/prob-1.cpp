#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (!isValidTriangle(a, b, c)) {
            cout << "Invalid triangle" << endl;
            continue;
        }

        int s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        if (area == 0) {
            cout << "0/1" << endl;
            continue;
        }

        double r = area / s;
        double r_squared = r * r;

        int p = static_cast<int>(round(r_squared * s * s));
        int q = s * s;

        int g = gcd(p, q);
        p /= g;
        q /= g;

        cout << p << "/" << q << endl;
    }
    return 0;
}
