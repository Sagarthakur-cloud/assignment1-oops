#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    static int count; 

public:

    Student(int r, string n) {
        roll = r;
        name = n;
        count++;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total students created: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1(101, "Rahul");
    Student s2(102, "Anita");

    s1.display();
    s2.display();

    Student::showCount();

    return 0;
}
