#include <iostream>
using namespace std;

class Student {
public:
    virtual string study() = 0;
};

class UG : public Student {
public:
    string study() { return "UG studies B.Tech"; }
};

class PG : public Student {
public:
    string study() { return "PG studies M.Tech"; }
};

int main() {
    Student* s1 = new UG();
    Student* s2 = new PG();
    cout << s1->study() << "\n" << s2->study();
    return 0;
}
