#include <iostream>
using namespace std;

class Box; 
class BoxInspector {
public:
    void showVolume(Box &b);
};

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    friend class BoxInspector;
};
void BoxInspector::showVolume(Box &b) {
    int volume = b.length * b.width * b.height;
    cout << "Volume of the box: " << volume << endl;
}

int main() {
    Box b1(4, 5, 6);
    BoxInspector inspector;
    inspector.showVolume(b1);

    return 0;
}
