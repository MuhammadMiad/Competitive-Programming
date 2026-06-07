#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long count = 0;

    // Iterate through each element as a_i
    for (int i = 0; i < n; ++i) {
        vector<int> divisible_count(n + 1, 0); // To keep track of counts of elements divisible by a_i

        // Count divisible elements on the right side
        for (int j = i + 1; j < n; ++j) {
            if (a[j] % a[i] == 0) {
                divisible_count[a[j]]++;
            }
        }

        // Iterate through each element on the right side as a_j
        for (int j = i + 1; j < n; ++j) {
            if (a[j] % a[i] == 0) {
                divisible_count[a[j]]--;

                // Count valid a_k for this a_j
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

