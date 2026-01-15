#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    void setData(int r, string n) {
        roll = r;
        name = n;
    }
};

int main() {

    const Student s1(101, "Rahul");

    s1.display();

    return 0;
}
