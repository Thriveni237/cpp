#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("test.txt");
    file << "Hello, World!\n";
    file.close();
    return 0;
}
