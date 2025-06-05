#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {std::cout << this->name << ": My job here is done!\n";}

std::string const &Warlock::getName() const { return (this->name);}
std::string const &Warlock::getTitle() const { return (this->title);}

void Warlock::setTitle(std::string const &title) { this->title = title;}

void Warlock::introduce() const { std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";}

void learnSpell(ASpell* spell)
{
	map_spell::iterator it = map_warlock.find(spell->getName);
	if (it == map_warlock.end())
		map_warlock[spell->getName] = spell.clone();
}

void forgetSpell(std::string name_spell)
{
	map_spell::iterator it = map_warlock.find(name_spell);
	if (it != map_warlock.end())
		delete it->second;
	map_warlock.erase(name_spell);
}

void launchSpell(std::string name_spell, ATarget& target)
{

}
