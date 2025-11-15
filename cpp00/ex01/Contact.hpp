#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	public :
		void		setFirstName(const std::string& fn);
		void		setLastName(const std::string& ln);
		void		setNickname(const std::string& ni);
		void		setPhoneNumber(const std::string& ph);
		void		setDarkestSecret(const std::string& ds);
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
};

#endif