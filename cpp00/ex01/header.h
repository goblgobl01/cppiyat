#ifndef HEADER_H 
#define HEADER_H 

#include <string>
#include <iostream>
#include <iomanip>
class Contact {
	public :
		void setFirstName(const std::string& fn) {
			FirstName = fn;
		}
		void setLastName(const std::string& ln) {
			LastName = ln;
		}
		void setNickname(const std::string& ni) {
			Nickname = ni;
		}
		void setPhoneNumber(const std::string& ph) {
			PhoneNumber = ph;
		}
		void setDarkestSecret(const std::string& ds) {
			DarkestSecret = ds;
		}
		std::string getFirstName() const {
			return FirstName;
		}
		std::string getLastName() const {
			return LastName;
		}
		std::string getNickname() const {
			return Nickname;
		}
		std::string getPhoneNumber() const {
			return PhoneNumber;
		}
		std::string getDarkestSecret() const {
			return DarkestSecret;
		}
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

class PhoneBook {
	public:
		print_contact()
		Contact contacts[8];
};

#endif