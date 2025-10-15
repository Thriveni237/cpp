#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
   
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

        int area() {
        return length * width;
    }
};

int main() {
     Rectangle rect(10, 5);
       cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}
