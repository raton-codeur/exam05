#include "Warlock.hpp"

Warlock::Warlock()
{}

Warlock::Warlock(const Warlock& other)
{
	*this = other;
}

Warlock& Warlock::operator=(const Warlock& other)
{
	(void)other;
	return *this;
}

Warlock::~Warlock()
{
	cout << _name << ": My job here is done!\n";
}

const string& Warlock::getName() const
{
	return _name;
}

const string& Warlock::getTitle() const
{
	return _title;
}

void Warlock::setTitle(const string& title)
{
	_title = title;
}

Warlock::Warlock(const string& name, const string& title)
{
	_name = name;
	_title = title;
	cout << _name << ": This looks like another boring day.\n";
}

void Warlock::introduce() const
{
	cout << _name << ": I am " << _name << ", " << _title << "!\n";
}
