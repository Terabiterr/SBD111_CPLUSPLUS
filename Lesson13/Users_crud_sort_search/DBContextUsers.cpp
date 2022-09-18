#include "User.cpp"
#include <list>

class DBContextUsers {
public:
	static User& initUsers()
	{
		return *new User{
			*new User(5, "Oliver", "ADAM", 35, 8500.00, 
			*new list<Profession> {
					*new Profession(1, "developer c++", "google ENG", "google"),
					* new Profession(2, "developer JS", "google ENG", "google"),
					* new Profession(3, "developer HTML & CSS", "google ENG", "google")
				}, 
				*new list<Role> {
					*new Role(1, "moderator", "all rights"),
					* new Role(-1, "admin", "all_rights"),
					* new Role(2, "user", "user rights"),
					* new Role(3, "authUser", "user auth")
				}),
			* new User(3, "Jack", "DONALDSON", 48, 2500.00,
			*new list<Profession> {
					*new Profession(4, "developer html", "skarb UKR", "skarb")
				},
				*new list<Role> {
					*new Role(2, "user", "user rights")
				}),
			*new User(7, "Harry", "LAIRD", 58, 1200.00,
			*new list<Profession> {
					*new Profession(1, "worker", "Cars The United States", "opel")
				},
				*new list<Role> {
					*new Role(0, "---", "---")
				}),
			*new User(8, "Callum", "DOUGLAS", 23, 5000.00,
			*new list<Profession> {
					*new Profession(1, "developer c++", "google ENG", "google"),
					*new Profession(2, "developer JS", "google ENG", "google")
				},
				*new list<Role> {
					*new Role(1, "moderator", "all rights"),
					*new Role(2, "user", "user rights")
				}),
			*new User(6, "Kyle", "FLEMING", 27, 15000.00,
			*new list<Profession> {
					*new Profession(4, "Team Lead c++", "google ENG", "google"),
					*new Profession(5, "Team Lead JS", "google ENG", "google"),
					*new Profession(6, "Team Lead HTML & CSS", "google ENG", "google"),
					*new Profession(7, "Developer Java", "google ENG", "google"),
					*new Profession(8, "Developer C#", "google ENG", "google")
				},
				*new list<Role> {
					*new Role(1, "moderator", "all rights"),
					*new Role(-1, "admin", "all_rights"),
					*new Role(2, "user", "user rights"),
					*new Role(3, "authUser", "user auth"),
					*new Role(4, "Super admin", "super rights"),
					* new Role(5, "Root", "root")
				}),
			*new User(2, "Michael", "HENDERSON", 41, 7000.00,
			*new list<Profession> {
					*new Profession(8, "Senior Unit Test", "google ENG", "google")
				},
				*new list<Role> {
					*new Role(1, "moderator", "all rights"),
					*new Role(-1, "admin", "all_rights")
				}),
			*new User(4, "Thomas", "CRAWFORD", 34, 4500.00,
			*new list<Profession> {
					*new Profession(9, "Unit Test Junior", "google ENG", "google")
				},
				* new list<Role> {
					*new Role(1, "moderator", "all rights")
				}),
			*new User(1, "William", "HARDIE", 67, 300.00,
			*new list<Profession> {
					*new Profession(10, "watchman", "rozetka Ukraine", "rozetka")
				},
				*new list<Role> {
					*new Role(0, "---", "---")
				}),
			*new User(10, "Charlie", "HOUSTON", 67, 150.00,
			*new list<Profession> {
					*new Profession(10, "loader worker", "rozetka Ukraine", "rozetka")
				},
				*new list<Role> {
					*new Role(0, "---", "---")
				}),
			*new User(9, "William", "HOUSTON", 53, 40.00,
			*new list<Profession> {
					*new Profession(9, "loader worker", "Skarb UKRAINE", "SKARB")
				},
				* new list<Role> {
					*new Role(0, "---", "---")
				}),
		};
	}
};