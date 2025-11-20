#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int &ref = x;
    ref = 10;
    cout << x << endl;
    return 0;
}
