#include <iostream>
using namespace std;
union Data { int i; float f; };
int main() { Data d; d.i = 10; cout << d.i << endl; return 0; }
