#include <iostream>
using namespace std;
template <typename T>
T getMax(T a, T b) { return (a > b) ? a : b; }
int main() {
    cout << getMax(5, 10) << endl;
    cout << getMax(3.5, 2.1) << endl;
    return 0;
}
