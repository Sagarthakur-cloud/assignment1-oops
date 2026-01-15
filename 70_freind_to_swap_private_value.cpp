#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:

    Box(int l) {
        length = l;
    }

    void display() {
        cout << "Length: " << length << endl;
    }

    friend void swap(Box &b1, Box &b2);
};

void swap(Box &b1, Box &b2) {
    int temp = b1.length;
    b1.length = b2.length;
    b2.length = temp;
}

int main() {
    Box b1(10), b2(20);

    cout << "Before swapping:" << endl;
    b1.display();
    b2.display();

    swap(b1, b2);

    cout << "After swapping:" << endl;
    b1.display();
    b2.display();

    return 0;
}
