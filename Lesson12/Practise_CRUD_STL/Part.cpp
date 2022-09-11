#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Part {
	string _tittle{ "" };
	string _series{ "" };
	string _date{ "" };
public:
	Part(string tittle, string series, string date) : 
		_tittle{ tittle }, _series{ series }, _date{ date } {}
	string getTitle() { return _tittle;  }
	void setTitle(string title) { _tittle = title; }
	string getSeries() { return _series; }
	void setSeries(string series) { _series = series; }
	string getDate() { return _date; }
	void setDate(string date) { _date = date; }

	string toString() 
	{
		stringstream ss;
		ss
			<< "part-> tittle:\t" << _tittle << "\n"
			<< "part-> series:\t" << _series << "\n"
			<< "part-> date:\t" << _date << "\n";
		return ss.str();
	}
};