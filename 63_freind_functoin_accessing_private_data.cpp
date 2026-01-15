#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    Box(int l, int w) {
        length = l;
        width = w;
    }
    friend void displayArea(Box b);
};


void displayArea(Box b) {

    cout << "Length: " << b.length << ", Width: " << b.width << endl;
    cout << "Area: " << b.length * b.width << endl;
}

int main() {
    Box b1(5, 3);
    displayArea(b1);

    return 0;
}
