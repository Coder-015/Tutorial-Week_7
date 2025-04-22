#include <iostream>
using namespace std;

class Book {
    string name = "C++";
    int price = 500;
    friend int book_price(Book);
};

int book_price(Book b) { return b.price; }

int main() {
    Book b;
    cout << book_price(b);
    return 0;
}
