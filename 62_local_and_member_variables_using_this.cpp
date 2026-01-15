#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student(int roll, string name) {
        this->roll = roll;
        this->name = name;
    }

    void display() {
        cout << "Roll: " << this->roll << endl;
        cout << "Name: " << this->name << endl;
    }
};

int main() {
    int roll = 999;
    string name = "LocalName";

    Student s1(101, "Rahul");
    s1.display();

    cout << "Local variables in main:" << endl;
    cout << "Roll: " << roll << endl;
    cout << "Name: " << name << endl;

    return 0;
}
