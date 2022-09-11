#include <iostream>
#include <sstream>
#include <string>
#include <initializer_list>
#include <vector>
#include <algorithm>
#include "Part.cpp"
using namespace std;

// Model Book
class Book {
    int _id{ 0 };
    string _bookName{ "" };
    double _price{ 0 };
    string _category{ "" };
    string _author{ "" };
    Part _part{ "", "", "" }; // dependence
    vector<Book> _books; // initialization the list objects
public:
    Book(initializer_list<Book> books) : _books{ books } {}
    Book(int id, string bookName, double price, string catagory, string author, Part &part) :
    _id{ id }, _bookName{ bookName }, _price { price }, _category{ catagory },
        _author{ author }, _part{ part }  {}

    vector<Book>& getBooks() { return _books; } // Сan only be set via the class constructor
    int getId() { return _id; }
    void setId(int id) { _id = id; }
    string getBookName() { return _bookName; }
    void setBookName(string bookName) { _bookName = bookName; }
    double getPrice() { return _price; }
    void setPrice(double price) { _price = price; }
    string getAuthor() { return _author; }
    void setAuthor(string author) { _author = author; }
    string getCategory() { return _category; }
    void setCategory(string category) { _category = category; }
    Part& getPart() { return _part; }
    void setPart(Part &part) { _part = part; }

    string toString() 
    {
        stringstream ss;
        ss
            << "id:\t" << _id << "\n"
            << "book name:\t" << _bookName << "\n"
            << "price:\t" << _price << "\n"
            << "category:\t" << _category << "\n"
            << _part.toString();
        return ss.str();
    }
};