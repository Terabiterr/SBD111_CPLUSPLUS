#include <string>
#include <sstream>
#include "IModels.cpp"

using namespace std;
// Imodels has diferent virtual functions
// toString, overload operators for sort
class Profession : public IModels {
	int _id { 0 };
	string _job { "" };
	string _company { "" };
	string _brand { "" };
public:
	Profession(int id, string job, string company, string brand) :
		_id{ id }, _job{ job }, _company{ company }, _brand{ brand } {}

	int getId() { return _id; }
	void setId(int id) { _id = id; }

	string getJob() { return _job; }
	void setJob(string job) { _job = job; }

	string getCompany() { return _company; }
	void setCompany(string company) { _company = company; }

	string getBrand() { return _brand; }
	void setBrand(string brand) { _brand = brand; }

	virtual string toString() override 
	{
		stringstream ss;
		ss
			<< "id:\t" << _id << "\n"
			<< "job:\t" << _job << "\n"
			<< "company:\t" << _company << "\n"
			<< "brand:\t" << _brand << "\n";
		return ss.str();
	}
};