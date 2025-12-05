#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name) :name(name){}
		void announce(void);
};

#endif