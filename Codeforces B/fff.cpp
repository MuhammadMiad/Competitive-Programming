#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long count = 0;

    for (int i = 0; i < n; ++i) {
        vector<int> divisible_count(n + 1, 0);
        for (int j = i + 1; j < n; ++j) {
            if (a[j] % a[i] == 0) {
                divisible_count[a[j]]++;
            }
        }
        for (int j = i + 1; j < n; ++j) {
            if (a[j] % a[i] == 0) {
                divisible_count[a[j]]--;
                for (int k = j + 1; k < n; ++k) {
                    if (a[k] % a[i] == 0 && a[k] % a[j] != 0) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}

