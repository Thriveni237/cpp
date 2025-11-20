#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *ptr = &x;
    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;
    return 0;
}
