#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    bool found = binary_search(arr, arr+5, 3);
    cout << (found ? "Found" : "Not Found") << endl;
    return 0;
}
