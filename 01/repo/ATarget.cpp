#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const ATarget& o)
{
	(void)o;
}

ATarget& ATarget::operator=(const ATarget& o)
{
	(void)o;
	return *this;
}

ATarget::~ATarget()
{}

const std::string& ATarget::getType() const
{
	return type;
}

ATarget::ATarget(std::string type) :
type(type)
{}

void ATarget::getHitBySpell(const ASpell& spell)
{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}
