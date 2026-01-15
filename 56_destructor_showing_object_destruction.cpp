#include <iostream>
using namespace std;

class Demo {
public:

    Demo() {
        cout << "Constructor called: Object created" << endl;
    }

    ~Demo() {
        cout << "Destructor called: Object destroyed" << endl;
    }
};

int main() {
    cout << "Entering main function" << endl;

    Demo d1;

    cout << "Exiting main function" << endl;
    return 0;  
}
