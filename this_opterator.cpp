#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    // Parameter name is also 'name'
    void setName(string name) {
        this->name = name; // use 'this' to refer to member variable
    }

    void showName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.setName("Kauss");
    s.showName(); // Output: Name: Kauss
}