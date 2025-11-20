#include <iostream>
namespace MyNamespace { int x = 10; }
using namespace std;
int main() { cout << MyNamespace::x << endl; return 0; }
