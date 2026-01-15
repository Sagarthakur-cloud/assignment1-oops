#include <iostream>
using namespace std;

class Box; 

class Rectangle {
private:
    int length;
public:
    Rectangle(int l) {
        length = l;
    }
    friend void compare(Box r, Rectangle rect);
};

class Box {
private:
    int length;
public:
    Box(int l) {
        length = l;
    }

    friend void compare(Box r, Rectangle rect);
};
void compare(Box b, Rectangle r) {
    if (b.length > r.length)
        cout << "Box is bigger than Rectangle." << endl;
    else if (b.length < r.length)
        cout << "Rectangle is bigger than Box." << endl;
    else
        cout << "Box and Rectangle are equal in length." << endl;
}

int main() {
    Box b1(10);
    Rectangle r1(15);

    compare(b1, r1);
    return 0;
}
