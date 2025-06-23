#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::SpellBook(const SpellBook& other)
{
	*this = other;
}

SpellBook& SpellBook::operator=(const SpellBook& other)
{
	(void)other;
	return *this;
}

SpellBook::~SpellBook()
{
	MapSpell::iterator i = _spells.begin();
	while (i != _spells.end())
	{
		delete i->second;
		i++;
	}
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		_spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(string const & spell)
{
	MapSpell::iterator i = _spells.find(spell);
	if (i != _spells.end())
	{
		delete i->second;
		_spells.erase(i);
	}
}

ASpell* SpellBook::createSpell(string const & spell)
{
	MapSpell::iterator i = _spells.find(spell);
	if (i != _spells.end())
		return i->second;
	return 0;
}
