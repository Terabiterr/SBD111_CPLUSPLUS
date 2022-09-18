#include "DBContextUsers.cpp"
#include <vector>
#include <iostream>
#include <algorithm>

class ServiceUser {
	vector<User> _users;
public:
	void _create() 
	{
		_users = DBContextUsers::initUsers().getUsers();
	}
	void _read()
	{
		for (auto& user : _users)
			std::cout << user.toString();
	}
	void _update(User& newUser)
	{
		for (auto& user : _users)
		{
			if (newUser.getId() == user.getId())
			{
				user.setName(newUser.getName());
				user.setlastName(newUser.getlastName());
				user.setAge(newUser.getAge());
				user.setSalary(newUser.getSalary());
				user.setProfessions(newUser.getProfessions());
				user.setRoles(newUser.getRoles());
			}
		}
	}
	void _delete(int id)
	{
		/*
			In this situation effectively use find because the vector has specific iterator for vector objects
		*/
		// find the element
		auto iter = find_if(_users.begin(), _users.end(), [id](User& user) {
				return user.getId() == id; 
			});
		// if found, erase it
		if (iter != _users.end())
			_users.erase(iter);
	}
	void sortById(bool lessMore = false)
	{
		// anonim function play here how the predicat
		sort(_users.begin(), _users.end(), [lessMore](User& right, User& left) {
			if(lessMore)
				return right.getId() > left.getId(); // More - less
			return right.getId() < left.getId(); // Less - More
			});
	}
	void sortByName(bool lessMore = false)
	{
		/*
			It's works! because:
			if see on the class string in deep to C++, exist the overload operators <>
			example in deep the class string:
			-----------------------------------------------
			template <class _Elem, class _Traits>
			_NODISCARD constexpr bool operator<(
				const basic_string_view<_Elem, _Traits> _Lhs, const basic_string_view<_Elem, _Traits> _Rhs) noexcept {
				return _Lhs.compare(_Rhs) < 0
			-----------------------------------------------
			example test:
			"a" > "b" result: 0 (false)
		*/
		// anonim function play here as the predicat
		sort(_users.begin(), _users.end(), [lessMore](User& right, User& left) {
			if (lessMore)
				return right.getName() > left.getName(); // More - less
			return right.getName() < left.getName(); // Less - More
			});
	}
	bool searchById(int id)
	{
		for (auto it = _users.begin(); it != _users.end(); it++)
			if (it->getId() == id) return true;
		return false;
	}
	bool searchByName(string name)
	{
		for (auto it = _users.begin(); it != _users.end(); it++)
			if (it->getName() == name) return true;
		return false;
	}
};