#include "Contact.hpp"

void Contact::setFirstName(const std::string& fn) {
	FirstName = fn;
}
void Contact::setLastName(const std::string& ln) {
	LastName = ln;
}
void Contact::setNickname(const std::string& ni) {
	Nickname = ni;
}
void Contact::setPhoneNumber(const std::string& ph) {
	PhoneNumber = ph;
}
void Contact::setDarkestSecret(const std::string& ds) {
	DarkestSecret = ds;
}
std::string Contact::getFirstName() const {
	return FirstName;
}
std::string Contact::getLastName() const {
	return LastName;
}
std::string Contact::getNickname() const {
	return Nickname;
}
std::string Contact::getPhoneNumber() const {
	return PhoneNumber;
}
std::string Contact::getDarkestSecret() const {
	return DarkestSecret;
}