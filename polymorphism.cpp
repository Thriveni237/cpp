#include <iostream>
using namespace std;
class Shape { public:
    virtual void area() { } };
class Circle : public Shape { public:
    void area() { cout << "Circle area" << endl; } };
int main() { Circle c; c.area(); return 0; }
