#include <iostream>
using namespace std;
int main() {
    try { throw 42; }
    catch (int e) { cout << "Exception: " << e << endl; }
    return 0;
}
