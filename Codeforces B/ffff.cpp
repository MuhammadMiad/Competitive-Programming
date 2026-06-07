#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a point (x, y) lies on the parabola ax^2 - by + c = 0
bool isPointOnParabola(int a, int b, int c, int x, int y) {
    return (a * x * x - b * y + c) == 0;
}

// Function to find the minimum integer radius for given a, b, c
int findMinRadius(int a, int b, int c) {
    int radius = 1;
    while (true) {
        for (int x = -radius; x <= radius; ++x) {
            int ySquare = radius * radius - x * x;
            if (ySquare >= 0) {
                int y = sqrt(ySquare);
                if (y * y == ySquare) {
                    if (isPointOnParabola(a, b, c, x, y) || isPointOnParabola(a, b, c, x, -y)) {
                        return radius;
                    }
                }
            }
        }
        ++radius;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << findMinRadius(a, b, c) << endl;
    }
    return 0;
}
