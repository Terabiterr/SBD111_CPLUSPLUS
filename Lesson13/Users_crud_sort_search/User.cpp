#include "Profession.cpp"
#include "Role.cpp"
#include <list>
#include <string>
#include <initializer_list>
#include <vector>
#include "IModels.cpp"
#include <iostream>

using namespace std;
class User : public IModels {
	int _id{ 0 };
	string _name { "" };
	string _lastName { "" };
	int _age{ 0 };
	double _salary { 0 };
	// У пользователя может быть несколько профессий
	list<Profession> _professions;
	// У пользователя может быть несколько ролей
	list<Role> _roles;
	vector<User> _users;
public:
	User(initializer_list<User> users) : _users{ users } {}
	User(int id, string name, string lastName, 
		int age, double salary, list<Profession> &professions, list<Role> &roles)
		: _id{ id }, _name{ name }, _lastName{ lastName }, _age{ age }, _salary { salary },
		_professions{ professions }, _roles{ roles } {}

	vector<User>& getUsers() { return _users; }

	int getId() { return _id; }
	void setId(int id) { _id = id; }

	string getName() { return _name; }
	void setName(string name) { _name = name; }

	string getlastName() { return _lastName; }
	void setlastName(string lastName) { _lastName = lastName; }

	int getAge() { return _age; }
	void setAge(int age) { _age = age; }

	double getSalary() { return _salary; }
	void setSalary(double salary) { _salary = salary; }

	list<Profession>& getProfessions() { return _professions; }
	void setProfessions(list<Profession>& professions) { _professions = professions; }

	list<Role>& getRoles() { return _roles; }
	void setRoles(list<Role>& roles) { _roles = roles; }

	virtual string toString() override
	{
		string salary = to_string(_salary);
		salary = salary.substr(0, salary.find('.') + 3); // count after point _salary = 2 example: 1.11111 = 1.11
		stringstream ss;
		ss
			<< "###############################\n"
			<< "User:\t" << _name << "\n"
			<< "id:\t" << _id << "\n"
			<< "name:\t" << _name << "\n"
			<< "lastName:\t" << _lastName << "\n"
			<< "age:\t" << _age << "\n"
			<< "salary:\t" << salary << "\n";
			ss << "-----professions------\n";
		for (auto& profession : _professions)
			ss << profession.toString();
		ss << "-----roles------\n";
		for (auto& role : _roles)
			ss << role.toString();
		ss << "###############################\n";
		return ss.str();
	}
};