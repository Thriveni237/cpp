#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    for(int x : arr) cout << x << " ";
    cout << endl << "Size: " << arr.size() << endl;
    return 0;
}
