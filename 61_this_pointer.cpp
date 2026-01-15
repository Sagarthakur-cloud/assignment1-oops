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
        cout << "Roll: " << this->roll << ", Name: " << this->name << endl;
    }

    Student* getObject() {
        return this;
    }
};

int main() {
    Student s1(101, "Rahul");

    s1.display();

    Student* ptr = s1.getObject();
    cout << "Address of object s1: " << &s1 << endl;
    cout << "Address returned by getObject(): " << ptr << endl;

    return 0;
}
