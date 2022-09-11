#include <iostream>
#include "ServiceBook.cpp"

using namespace std;

//example CRUD service for DB (test) books

int main()
{
    ServiceBook _serviceBook;
    cout << "_create()" << endl;
    _serviceBook._create();
    cout << "_read()" << endl;
    _serviceBook._read();
    cout << "_delete(2)" << endl;
    _serviceBook._delete(2);
    cout << "_read()" << endl;
    _serviceBook._read();
    cout << "_update(1)" << endl;
    _serviceBook._update(1, *new Book(1, "C++ Primer (change - test!!!)", 750.00, "C++", "Stanley Lippman, Josée Lajoie, Barbara Moo",
        *new Part(
            "C++11 Standard",
            "part 1",
            "2012"
        )));
    cout << "_read()" << endl;
    _serviceBook._read();
    return 0;
}
