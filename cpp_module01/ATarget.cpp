#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(const ATarget& other)
{
	*this = other;
}

ATarget& ATarget::operator=(const ATarget& other)
{
	_type = other._type;
	return *this;
}

ATarget::~ATarget()
{}

const string& ATarget::getType() const
{
	return _type;
}

ATarget::ATarget(const string& type)
{
	_type = type;
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
	cout << _type << " has been " << spell.getEffects() << "!\n";
}
