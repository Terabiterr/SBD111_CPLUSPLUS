#include <iostream>
#include "ServiceUser.cpp"

int main()
{
    ServiceUser _su;
    _su._create();
    cout << "---------------------------------" << endl;
    cout << "sort by id:" << endl;
    cout << "---------------------------------" << endl;
    _su.sortById();
    _su._read();
    cout << "---------------------------------" << endl;
    cout << "sort by name:" << endl;
    cout << "---------------------------------" << endl;
    _su.sortByName();
    _su._read();
    cout << "---------------------------------" << endl;
    cout << "search by id = 30:" << endl;
    cout << "---------------------------------" << endl;
    if (_su.searchById(30)) 
        cout << "Found!" << endl;
    else 
        cout << "Not found!" << endl;
    cout << "---------------------------------" << endl;
    cout << "search by name = Oliver:" << endl;
    cout << "---------------------------------" << endl;
    if (_su.searchByName("Oliver"))
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;
    cout << "---------------------------------" << endl;
    cout << "delete id = 3" << endl;
    cout << "---------------------------------" << endl;
    _su._delete(3);
    _su.sortById();
    _su._read();
    return 0;
}
