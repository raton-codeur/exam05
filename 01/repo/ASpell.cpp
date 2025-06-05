#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell& o)
{
	(void)o;
}

ASpell& ASpell::operator=(const ASpell& o)
{
	(void)o;
	return *this;
}

ASpell::~ASpell()
{}

std::string ASpell::getName()
{
	return name;
}

std::string ASpell::getEffects()
{
	return effects;
}

ASpell(const std::string& name, const std::string effects) :
name(name),
effects(effects)
{}


void ASpell::launch(const ATarget& target)
{
	target.getHitBySpell(*this);
}