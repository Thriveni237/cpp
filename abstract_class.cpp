#include <iostream>
using namespace std;
class Animal { public:
    virtual void speak() = 0; };
class Cat : public Animal { public:
    void speak() { cout << "Meow" << endl; } };
int main() { Cat c; c.speak(); return 0; }
