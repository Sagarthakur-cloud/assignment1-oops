#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;        
    Rectangle r2(10, 5); 

    r1.area();
    r2.area();

    return 0;
}
