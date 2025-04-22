#include <iostream>
using namespace std;

class Shape {
public:
    virtual string draw() = 0;
};

class Circle : public Shape {
public:
    string draw() { return "Drawing Circle"; }
};

class Rectangle : public Shape {
public:
    string draw() { return "Drawing Rectangle"; }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    cout << s1->draw() << "\n" << s2->draw();
    return 0;
}
