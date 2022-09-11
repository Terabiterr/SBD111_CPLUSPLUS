#include "Book.cpp"
//#include "Part.cpp" Error C2011 
//You may also get C2011 if you import 
//a header file or type library more 
//than once into the same file. 
class ContextBooks {
public:
	Book& initBooks()
	{
        return *new Book {
    *new Book(1, "C++ Primer", 750.00, "C++", "Stanley Lippman, Josée Lajoie, Barbara Moo",
    *new Part(
            "C++11 Standard",
            "part 1",
            "2012"
        )),
    *new Book(2, "Effective Modern C++", 1200.00, "C++", "Scott Meyers",
        *new Part(
            "42 Specific Ways to Improve Your Use of C++11 and C++14",
            "part 1",
            "2014"
        )),
    *new Book(3, "C++ Coding Standards", 1500.00, "C++", "Herb Sutter, Andrei Alexandrescu, John Fuller",
        *new Part(
            "101 Rules, Guidelines, and Best Practices",
            "part 1",
            "2004"
        )),
    *new Book(4, "Modern C++ Design", 1100.50, "C++", "Debbie Lafferty, Andrei Alexandrescu",
        *new Part(
            "101 Rules, Guidelines, and Best Practices",
            "part 1",
            "2001"
        )),
    *new Book(5, "Programming", 1700.50, "C++", "Bjarne Stroustrup",
        *new Part(
            "Principles and Practice Using C++",
            "part 1",
            "2014"
        ))
        };
	}
};