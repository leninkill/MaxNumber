#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max;

    if (a >= b and a >= c)
        max = a;
    if (b >= a and b >= c)
        max = b;
    if (c >= a and c >= b)
        max = c;

    cout << max;

    return 0;
}