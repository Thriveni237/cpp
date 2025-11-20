#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 1, 3, 2, 4};
    for(int x : s) cout << x << " ";
    cout << endl;
    return 0;
}
