#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    for(int x : v) cout << x << " ";
    cout << endl;
    return 0;
}
