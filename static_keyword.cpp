#include <iostream>
using namespace std;
static int counter = 0;
void increment() { counter++; cout << counter << endl; }
int main() { increment(); increment(); return 0; }
