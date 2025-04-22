#include <iostream>
using namespace std;

inline int add(int a, int b) { return a + b; }
inline int sub(int a, int b) { return a - b; }
inline int mul(int a, int b) { return a * b; }
inline float div(float a, float b) { return a / b; }

int main() {
    cout << add(5,3) << " " << sub(5,3) << " "
         << mul(5,3) << " " << div(6,3);
    return 0;
}
