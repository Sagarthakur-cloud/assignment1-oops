#include <iostream>
using namespace std;

class Box;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    friend void showArea(Rectangle r, Box b);
};

class Box {
private:
    int height;

public:
    Box(int h) {
        height = h;
    }
    friend void showArea(Rectangle r, Box b);
};

void showArea(Rectangle r, Box b) {
    int area = r.length * r.width * b.height;
    cout << "Volume of the box (Length*Width*Height): " << area << endl;
}

int main() {
    Rectangle rect(4, 5);
    Box box(6);

    showArea(rect, box);

    return 0;
}
