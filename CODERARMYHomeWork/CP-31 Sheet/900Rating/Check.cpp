#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n = 5;
    string pname[] = {"A", "B", "C", "D", "E"};
    int at[] = {0, 0, 4, 3, 11};   // Arrival time
    int bt[] = {16, 13, 4, 6, 9};  // Burst time
    int rem[5];                    // Remaining time
    int ct[5], tat[5], wt[5];
    for (int i = 0; i < n; i++) rem[i] = bt[i];

    int tq = 4;  // time quantum
    int time = 0;
    queue<int> q;
    bool inQueue[5] = {false};

    // push processes that arrive at time 0
    for (int i = 0; i < n; i++) {
        if (at[i] == 0 && !inQueue[i]) {
            q.push(i);
            inQueue[i] = true;
        }
    }

    cout << "\nGantt Chart:\n";

    while (!q.empty()) {
        int i = q.front();
        q.pop();

        cout << "| " << pname[i] << " ";

        int exec = min(tq, rem[i]);
        time += exec;
        rem[i] -= exec;

        // add newly arrived processes at this time
        for (int j = 0; j < n; j++) {
            if (!inQueue[j] && at[j] <= time && rem[j] > 0) {
                q.push(j);
                inQueue[j] = true;
            }
        }

        if (rem[i] > 0) {
            q.push(i);  // still remaining, requeue
        } else {
            ct[i] = time;  // finished
        }
    }

    cout << "|\n";

    // calculate TAT and WT
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        cout << pname[i] << "\t" << at[i] << "\t" << bt[i] << "\t"
             << ct[i] << "\t" << tat[i] << "\t" << wt[i] << "\n";
    }

    return 0;
}
