#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Rahul");
    Student s2(102, "Anita");

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}
