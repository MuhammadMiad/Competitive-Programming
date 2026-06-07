#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to find the minimum number of operations
int minOperations(vector<int>& arr) {
    int n = arr.size();
    vector<int> operations = {-7, -3, -1, 1, 3, 7};
    unordered_map<int, unordered_map<int, int>> distance;

    auto bfs = [&](int target) {
        queue<pair<int, int>> q;  // pair of (current_value, operations_count)
        for (int i = 0; i < n; i++) {
            q.push({arr[i], 0});
            distance[i][arr[i]] = 0;
        }

        int minOps = INT_MAX;

        while (!q.empty()) {
            int current = q.front().first;
            int ops = q.front().second;
            q.pop();

            if (current == target) {
                minOps = min(minOps, ops);
            }

            for (int op : operations) {
                int next = current + op;
                for (int i = 0; i < n; i++) {
                    if (distance[i].find(next) == distance[i].end() || distance[i][next] > ops + 1) {
                        distance[i][next] = ops + 1;
                        q.push({next, ops + 1});
                    }
                }
            }
        }
        return minOps;
    };

    int minOperations = INT_MAX;
    for (int i = 0; i < n; i++) {
        minOperations = min(minOperations, bfs(arr[i]));
    }

    return minOperations;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << minOperations(arr) << endl;
    return 0;
}
