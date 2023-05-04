#include <iostream>
using namespace std;
void countWays(int n) {
    int w0 = 1, w1 = 1, way;
    for (int i = 2; i <= n; i++) {
        way = w0 + w1;
        w0 = w1;
        w1 = way;
    }
    cout << way << " ";
}

int main() {
    int n;
    cin >> n;
    countWays(n);
    return 0;
}
