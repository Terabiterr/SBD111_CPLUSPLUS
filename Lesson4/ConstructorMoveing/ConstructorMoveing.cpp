#include <iostream>
using namespace std;

class A {
    int* _data; // private
public:
    A() { _data = new int; cout << "Constructor default" << endl; }
    A(const A& oldA) { cout << "Constructor copy" << endl; }
    A(const A&& oldA) { cout << "Constructor Moving [rvalue]" << endl; }
    A& operator= (const A& oldA) { cout << "Copy operator=" << endl; return *this; }
    A& operator= (const A&& oldA) { cout << "Rvalue operator=" << endl; return *this; }
};

int main()
{
    A a1;
    A a2 = a1; // Constructor copy
    a1 = a2; // Copy operator=
    A a3 = move(a2); // Constructor Moving [rvalue]
    a3 = move(a2); // Rvalue operator=
    return 0;
}