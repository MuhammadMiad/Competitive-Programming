#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        vector<int> idx(n);

        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
            idx[i] = i + 1;
        }
        vector<int> x_sorted = idx;
        sort(x_sorted.begin(), x_sorted.end(), [&](int i, int j) {
            return points[i - 1].first < points[j - 1].first;
        });
        vector<int> y_sorted = idx;
        sort(y_sorted.begin(), y_sorted.end(), [&](int i, int j) {
            return points[i - 1].second < points[j - 1].second;
        });
        vector<bool> used(n + 1, false);
        vector<pair<int, int>> result;
        int l = 0, r = n - 1;
        while (l < r) {
            if (!used[x_sorted[l]] && !used[x_sorted[r]]) {
                result.emplace_back(x_sorted[l], x_sorted[r]);
                used[x_sorted[l]] = used[x_sorted[r]] = true;
                ++l;
                --r;
            } else {
                if (used[x_sorted[l]]) ++l;
                if (used[x_sorted[r]]) --r;
            }
        }
        l = 0, r = n - 1;
        while (result.size() < n / 2 && l < r) {
            if (!used[y_sorted[l]] && !used[y_sorted[r]]) {
                result.emplace_back(y_sorted[l], y_sorted[r]);
                used[y_sorted[l]] = used[y_sorted[r]] = true;
                ++l;
                --r;
            } else {
                if (used[y_sorted[l]]) ++l;
                if (used[y_sorted[r]]) --r;
            }
        }

        for (auto &[a, b] : result)
            cout << a << " " << b << "\n";
    }

    return 0;
}
