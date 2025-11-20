#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {5,2,8,1,9};
    sort(arr, arr + 5);
    for(int x : arr) cout << x << " ";
    return 0;
}
