#include <string>
#include <sstream>
#include "IModels.cpp"

using namespace std;

class Role : public IModels {
	int _id { 0 };
	string _name { "" };
	string _type { "" };
public:
	Role(int id, string name, string type) :
		_id{ id }, _name{ name }, _type{ type } {}

	int getId() { return _id; }
	void setId(int id) { _id = id; }

	string getName() { return _name; }
	void setName(string name) { _name = name; }

	string getType() { return _type; }
	void setType(string type) { _type = type; }

	virtual string toString() override
	{
		stringstream ss;
		ss
			<< "id:\t" << _id << "\n"
			<< "name:\t" << _name << "\n"
			<< "type:\t" << _type << "\n";
		return ss.str();
	}
};