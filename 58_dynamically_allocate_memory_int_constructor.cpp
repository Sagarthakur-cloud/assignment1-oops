#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Memory allocated for " << size << " elements" << endl;

        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Array() {
        delete[] arr;
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    Array a1(5);
    a1.display();

    return 0;
}
