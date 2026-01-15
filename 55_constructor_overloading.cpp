#include <iostream>
using namespace std;

class Box {
public:
    int length, breadth, height;

    Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }

    Box(int l) {
        length = breadth = height = l;
    }

    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    void volume() {
        cout << "Volume = " << length * breadth * height << endl;
    }
};

int main() {
    Box b1;
    Box b2(5);
    Box b3(4, 3, 2);

    b1.volume();
    b2.volume();
    b3.volume();

    return 0;
}
