#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["apple"] = 5;
    m["banana"] = 3;
    for(auto p : m) cout << p.first << ": " << p.second << endl;
    return 0;
}
