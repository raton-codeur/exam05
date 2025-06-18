#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(const ASpell& other)
{
	*this = other;
}

ASpell& ASpell::operator=(const ASpell& other)
{
	_name = other.getName();
	_effects = other.getEffects();
	return *this;
}

ASpell::~ASpell()
{}

const string& ASpell::getName() const
{
	return _name;
}

const string& ASpell::getEffects() const
{
	return _effects;
}

ASpell::ASpell(const string& name, const string& effects)
{
	_name = name;
	_effects = effects;

}

void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
